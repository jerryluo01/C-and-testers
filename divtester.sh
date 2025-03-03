#!/bin/bash

gcc -o divisible divisible.c
echo "10 5 7" > input1.txt
echo "Test 1: not divisible & not increasing"
./divisible < input1.txt
echo "Expected output message: Not divisible & Not increasing"

echo "5 20 10" > input2.txt
echo "Test 2: divisible & not increasing"
./divisible < input2.txt
errcode="$echo $?"
if [ $errcode != 2 ]
        then
        echo "Exited with unexpected return code: "$errcode" (Expected 2)"
else
        echo "Exited with expected return code: 2"
fi

