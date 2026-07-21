# Day 5: Loops

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
**Submitted:** 2026-07-21T18:55:54.431Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// for (int i = 0; i<=n; i++) {
//     cout << n * i << endl;
// }



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/30-loops/problem)