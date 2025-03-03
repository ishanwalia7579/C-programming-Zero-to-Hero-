Single File Programming Question
Problem Statement
Shabu is exploring factorials and wants a program to calculate the sum of a series involving factorials. Develop a simple program that should take an integer n as input and calculate the sum of the series: 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 + ... + n!/n. 
Implement a program to help Shabu with a call-by-value function to calculate factorials, and the main program should compute the sum of the series.



Function Specifications: int factorial(int)

Input format :
The input consists of an integer, denoting the value of n.

Output format :
The output displays a single integer, representing the sum of the series.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

2 ≤ n ≤ 10

Sample test cases :
Input 1 :
2
Output 1 :
2
Input 2 :
6
Output 2 :
154
Note :

```c
#include <stdio.h>
int factorial (int n)
{
    int fact=1;
    for (int i=1; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for (int i=1; i<=n; i++)
    {
        sum+=factorial(i)/i;
    }
    printf("%d",sum);
    return 0;
}

```
