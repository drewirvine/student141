# CPTR 141: Homework Assignment #16

## Problem Overview

In this homework assignment you will write a program to read two files and write one file. The first input file is a list of letters and points for each letter and the second input file is a list of words. The output file has a line for each word and its point value.

## Solution Specification

The following key features need to be included in your solution.

1. Your program should read the point value assigned to each letter from the file `letters.txt`.  
2. Your program should verify that two command-line arguments are given.  This can be done by ensuring the variable `argc` in the `main()` function is at least three (the first argument is the name of the program being run).
3. Your program should then open the input file whose name is the first command-line argument.  This argument is stored in the array variable `argv[1]` inside the `main()` function. 
4. Your program should open an output file whose name is the second command-line argument (`argv[2]` in `main()`) .
5. Your program should then read each line of the words file and output the word and the points for that word (separated by a space) on a line of the output file.
6. Conduct error checking to ensure that all files opened successfully and report errors using the `cerr` output stream.
7. You must format your code using the "Format Document" command in your development environment.
8. Finally, your output **must** match the output of the included sample program, `solution.o`. To  run the program, right click on the folder "hw16" and pick "Open in Terminal."  Then in the terminal that opens, enter the following command:

```bash
./solution.o words.txt points.txt
```

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with no errors or warnings
- M -- demonstrates understanding of the needed solution but with minor errors
- R -- should be revised to demonstrate understanding of the needed solution
- N -- no substantive changes made to template, or nothing submitted
