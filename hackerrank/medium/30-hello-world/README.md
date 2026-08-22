# Day 0: Hello, World.

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

**Objective**	
In this challenge, we review some basic concepts that will get you started with this series. You will need to use the same (or similar) syntax to read input and write output in challenges throughout HackerRank. Check out the [Tutorial](/challenges/30-hello-world/tutorial) tab for learning materials and an instructional video!		

**Task**	
To complete this challenge, you must save a line of input from stdin to a variable, print `Hello, World.` on a single line, and finally print the value of your variable on a second line.

You've got this!

**Note:** The instructions are Java-based, but we support submissions in many popular languages. You can switch languages using the drop-down menu above your editor, and the $inputString$ variable may be written differently depending on the best-practice conventions of your submission language.

**Input Format**

A single line of text denoting $inputString$ (the variable whose contents must be printed).

**Constraints**

 

**Output Format**

Print `Hello, World.` on the first line, and the contents of $inputString$ on the second line.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-22T18:59:18.898Z  

```cpp

int main() {
    // Declare a variable named 'input_string' to hold our input.
    string input_string; 
    
    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(cin, input_string); 
    
    // Print a string literal saying "Hello, World." to stdout using cout.
    cout << "Hello, World." << endl;

    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    
      cout << input_string << endl;

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/30-hello-world/problem)