# AVGPROBLEM - Rating 500

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Greater Average

You are given $3$ numbers $A, B,$ and $C$.

Determine whether the  **average**  of $A$ and $B$ is  **strictly greater**  than $C$ or not?

 **NOTE:**  Average of $A$ and $B$ is defined as $\frac{(A+B)}{2}$. For example, average of $5$ and $9$ is $7$, average of $5$ and $8$ is $6.5$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of $3$ integers $A, B,$ and $C$.
### Output Format

For each test case, output `YES` if average of $A$ and $B$ is strictly greater than $C$, `NO` otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings `YeS`, `yEs`, `yes` and `YES` will all be treated as identical).

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq A, B, C \leq 10$
### Sample 1:
Input
Output

```
5
5 9 6
5 8 6
5 7 6
4 9 8
3 7 2

```

```
YES
YES
NO
NO
YES

```

### Explanation:

 **Test case $1$:**  The average value of $5$ and $9$ is $7$ which is strictly greater than $6$.

 **Test case $2$:**  The average value of $5$ and $8$ is $6.5$ which is strictly greater than $6$.

 **Test case $3$:**  The average value of $5$ and $7$ is $6$ which is not strictly greater than $6$.

 **Test case $4$:**  The average value of $4$ and $9$ is $6.5$ which is not strictly greater than $8$.

 **Test case $5$:**  The average value of $3$ and $7$ is $5$ which is strictly greater than $2$.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-13T18:08:23.051Z  

```java
import java.util.*;
class Codechef
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while(T-- > 0)
        {
            int A = sc.nextInt();
            int B = sc.nextInt();
            int C = sc.nextInt();

            if((A + B) > (2 * C))
            {
                System.out.println("YES");
            }
            else
            {
                System.out.println("NO");
            }
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AVGPROBLEM)