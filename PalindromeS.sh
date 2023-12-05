#!/bin/bash

echo "Enter a string: "
read original_string

# Reverse the string
reversed_string=$(echo "$original_string" | rev)

# Check if the original and reversed strings are the same
if [ "$original_string" == "$reversed_string" ]; then
    echo "The string is a palindrome."
else
    echo "The string is not a palindrome."
fi
