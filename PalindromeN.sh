echo -n "Enter the number: "   # Prompt user to enter a number
read Number                    # Read the number entered by the user

Sum=0                           # Initialize a variable to store the sum of digits

# Save the original number for later comparison
OriginalNumber=$Number

while [ $Number -ne 0 ]; do     # Loop until all digits are processed
    Digit=$((Number % 10))      # Extract the last digit
    Number=$((Number / 10))      # Remove the last digit
    # Add the current digit raised to the power of the number of digits to the sum
    Sum=$((Sum*10 + Digit))
done

# Check if the sum is equal to the original number
if [ $Sum -eq $OriginalNumber ]; then
    echo "$OriginalNumber is an Palindrome number"
else
    echo "$OriginalNumber is not an Palindroome number"
fi
