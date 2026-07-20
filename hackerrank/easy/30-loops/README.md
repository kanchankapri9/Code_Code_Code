# Day 4: Class vs. Instance

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

**Objective**	
In this challenge, we will use loops to do some math. Check out the [Tutorial](/challenges/30-loops/tutorial) tab to learn more.	

**Task**	
Given an integer, $n$, print its first $10$ multiples. Each multiple $n \times i$ (where $1 \le i \le 10$) should be printed on a new line in the form: `n x i = result`.

**Example**  
$n = 3$  

The printout should look like this:  
```
3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
3 x 6 = 18
3 x 7 = 21
3 x 8 = 24
3 x 9 = 27
3 x 10 = 30
```

**Input Format**

A single integer, $n$.

**Constraints**

- $2 \le n \le 20$

**Output Format**

Print $10$ lines of output; each line $i$ (where $1 \le i \le 10$) contains the $result$ of $n \times i$ in the form: 	
`n x i = result`.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-20T02:56:16.656Z  

```cpp


class Person{
    public:
        int age;
        Person(int initialAge);  // constructor
        void amIOld(); // foloowing operations
        void yearPasses();  // increses age by 1
    };
    
    
        Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        // asign initial age by confirming checks
        if( initialAge >= 0) {
        age = initialAge;

        } else {
            cout << "Age is not valid, setting age to 0." << endl;
            age = 0;
        }
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console
        if ( age < 13) {
            cout << "You are young." << endl;
        } else if ( age < 18  ) {
            cout << "You are a teenager." << endl;
            
        } else {
            cout << "You are old." << endl;
            
        }

    }

    void Person::yearPasses(){
        // Increment the age of the person in here
     age++;
    }
    
    
    //=====================================

    

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/30-loops/problem)