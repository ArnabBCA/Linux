#!/bin/bash

echo "Enter the range for Fibonacci series:"
read range

# Initialize variables
a=0
b=1

echo "Fibonacci series up to $range terms:"

# Loop to generate Fibonacci series
for (( i=0; i<$range; i++ )); do
  echo -n "$a "
  next=$((a + b))
  a=$b
  b=$next
done

echo
