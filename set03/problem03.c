/*3. Write a program to check if the given number is prime

***Function Declarations***
```c
int input_number();
int is_prime(int n);
void output(int n, int result);
```
*/

#include<stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
    int n,result;
    n=input();
    result=is_prime(n);
    output(n,result);
    return 0;
}

int input_number()
{
    int n;
    printf("enter the prime number:");
    scanf("%d",&n);
    return n;
}

int is_prime(int n)
{
    int result;
    
}