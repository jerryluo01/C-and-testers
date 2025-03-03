#!/bin/bash

gcc -o anagram anagram.c

echo "Test 1: mary and ramy"
./anagram mary ramy
echo "Expected output message: Anagram"

echo "Test 2: bob and lary"
./anagram bob lary
errcode="$echo $?"
if [ $errcode != 1 ]
        then
        echo "Exited with unexpected return code: "$errcode" (Expected 1)"
else
        echo "Exited with expected return code: 1"
fi
