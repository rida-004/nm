#!/bin/bash

# Array of programs
programs=(
"4program-to-implement-factorial-using-recursion.cpp"
"5Program-to-generate-Fibonacci-series-up-to-n-terms-using-recursive-functio.cpp"
"6program-for-Tower-of-Hanoi-using-recursion.cpp"
"7program-to-find-the-Greatest-Common-Divisor-GCD-of-two-numbers-using-a-recursive-function.cpp"
"8program-to-implement-stack-using-linked-list.cpp"
"9program-to-implement-insertion-sort.cpp"
)

# Loop through each program
for prog in "${programs[@]}"
do
    echo "--------------------------------------------"
    echo "Compiling $prog ..."
    
    # Extract filename without extension for executable
    exe="${prog%.cpp}"
    
    # Compile the program
    g++ "$prog" -o "$exe"
    
    if [ $? -eq 0 ]; then
        echo "Compilation successful. Running $exe ..."
        echo "--------------------------------------------"
        ./"$exe"
    else
        echo "Compilation failed for $prog"
    fi

    echo -e "\n\n"
done

echo "All programs executed!"