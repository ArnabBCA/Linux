#!/bin/bash

# Take user input for the two numbers
read -p "Enter the first number: " num1
read -p "Enter the second number: " num2

# Calculate GCD
while [ $num1 -ne $num2 ]; do
    if [ $num1 -gt $num2 ]; then
        ((num1 -= num2))
    else
        ((num2 -= num1))
    fi
done

# Print the result
echo "GCD: $num1"
