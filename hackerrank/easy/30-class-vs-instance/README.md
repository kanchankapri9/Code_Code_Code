# Day 4: Class vs. Instance

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

**Objective**	
In this challenge, we're going to learn about the difference between a *class* and an *instance*; because this is an *Object Oriented* concept, it's only enabled in certain languages. Check out the [Tutorial](/challenges/30-class-vs-instance/tutorial) tab for learning materials and an instructional video!	

**Task**	
Write a *Person* class with an instance variable, $age$, and a constructor that takes an integer, $initialAge$, as a parameter. The constructor must assign $initialAge$ to $age$ after confirming the argument passed as $initialAge$ is not negative; if a negative argument is passed as $initialAge$, the constructor should set $age$ to $0$ and print `Age is not valid, setting age to 0.`. In addition, you must write the following instance methods:

1. *yearPasses()* should increase the $age$ instance variable by $1$. 	
2. *amIOld()* should perform the following conditional actions:
- If $age \lt 13$, print `You are young.`.		
- If $age \geq 13$ and $age \lt 18$, print `You are a teenager.`.	
- Otherwise, print `You are old.`.

To help you learn by example and complete this challenge, much of the code is provided for you, but you'll be writing everything in the future. The code that creates each instance of your *Person* class is in the *main* method. Don't worry if you don't understand it all quite yet!

**Note:** Do not remove or alter the stub code in the editor.

**Input Format**

Input is handled for you by the stub code in the editor. 

The first line contains an integer, $T$ (the number of test cases), and the $T$ subsequent lines each contain an integer denoting the $age$ of a Person instance.

**Constraints**

- $1 \le T \le 4$  
- $-5 \le age \le 30$

**Output Format**

Complete the method definitions provided in the editor so they meet the specifications outlined above; the code to test your work is already in the editor. If your methods are implemented correctly, each test case will print $2$ or $3$ lines (depending on whether or not a valid $initialAge$ was passed to the constructor).

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-20T02:56:07.838Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/30-class-vs-instance/problem)