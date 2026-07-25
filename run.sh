#!/bin/bash

# Check if a file argument is provided
if [ -z "$1" ]; then
    echo "Error: No C++ file specified."
    echo "Usage: ./run.sh <filename.cpp>"
    exit 1
fi

# Ensure the file exists
if [ ! -f "$1" ]; then
    echo "Error: File '$1' not found."
    exit 1
fi

# Extract the base name (e.g., "palindrome" from "palindrome.cpp")
filename=$(basename -- "$1")
basename="${filename%.*}"

# Compile to the temporary directory
g++ -std=c++17 "$1" -o "/tmp/$basename"

# If compilation succeeded, run the executable
if [ $? -eq 0 ]; then
    "/tmp/$basename"
fi
