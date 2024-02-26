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
    n=input_number();
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
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            return  0; // not prime
            break;
        }
        
    }
    return 66;  
}

void output(int n, int result)
{
    if(result == 0)
    {
        printf("\n%d is a prime number.",n);
    }
    else
    {
        printf("\n%d is not a prime number.",n);
    }
}
