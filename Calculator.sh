#!/bin/bash

# Prompt the user for input
read -p "Enter the first number:" num1
read -p "Enter the second number:" num2

# Perform calculations
sum=$((num1 + num2))
difference=$((num1 - num2))
product=$((num1 * num2))
quotient=$((num1 / num2))

# Display results
echo "Sum: $sum"
echo "Difference: $difference"
echo "Product: $product"
echo "Quotient: $quotient"
