echo -n "Enter the number: "   # Prompt user to enter a number
read Number                    # Read the number entered by the user

Length=${#Number}               # Calculate the number of digits in the entered number

Sum=0                           # Initialize a variable to store the sum of digits

# Save the original number for later comparison
OriginalNumber=$Number

while [ $Number -ne 0 ]; do     # Loop until all digits are processed
    Digit=$((Number % 10))      # Extract the last digit
    Number=$((Number / 10))      # Remove the last digit

    # Add the current digit raised to the power of the number of digits to the sum
    Sum=$((Sum + Digit**Length))
done

# Check if the sum is equal to the original number
if [ $Sum -eq $OriginalNumber ]; then
    echo "$OriginalNumber is an Armstrong number"
else
    echo "$OriginalNumber is not an Armstrong number"
fi

#echo "Length is $Length"
