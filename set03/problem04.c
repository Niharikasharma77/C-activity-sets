/*4. Write a program to find nth number in fibonacci sequence.

> Fibonacci Sequence is of the form: `0, 1, 1, 2, 3, 5, 8, 13, ...`

***Function Declarations***
```c
int input();
int find_fibo(int n);
void output(int n, int fibo);
```*/

#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n,int fibo);

int main()
{
    int n,fibo;
    n=input();
    fibo=find_fibo(n);
    output(n,fibo);
}

int input()
{
    int n;
    printf("enter the nth number:");
    scanf("%d",&n);
    return n;
}

int find_fibo(int n)
{
    int fibo;
    for(int i=0;i<n;i++)
    {
        
    }
}