while IFS=":" read -r filepath question; do
    filepath=$(echo "$filepath" | xargs)   # trim spaces
    question=$(echo "$question" | xargs)   # trim spaces
    if [ -f "$filepath" ]; then
        # Get the first line of the file
        firstline=$(head -n 1 "$filepath")
        tmpfile=$(mktemp)
        if [[ "$firstline" =~ ^/\*.*\*/$ ]]; then
            # Already a comment → replace it
            echo "/* $question */" > "$tmpfile"
            tail -n +2 "$filepath" >> "$tmpfile"
            mv "$tmpfile" "$filepath"
            echo "Updated comment in $filepath"
        else
            # No comment → prepend it
            echo "/* $question */" > "$tmpfile"
            cat "$filepath" >> "$tmpfile"
            mv "$tmpfile" "$filepath"
            echo "Inserted comment in $filepath"
        fi
    else
        echo "⚠️ Skipping $filepath (file not found)"
    fi
done < bruh.txt
