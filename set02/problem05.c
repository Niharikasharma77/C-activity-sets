/*05.  Write a program to find GCD _(HCF)_ of two numbers.

***Function Declarations***
```c
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
```*/

#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
    int a,b,gcd;
    a = input();
    b = input();
    gcd = find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}

int input()
{
    int a;
    printf("enter the number :");
    scanf("%d",&a);
    return(a);
}

int find_gcd(int a,int b)
{
    int gcd;
    for(int i=1;i<=a || i<=b ;i++)
    {
        if(a%i==0 && b%i ==0 )
        {
            gcd = i;
        }
    }
    return(gcd);
}

void output(int a, int b, int gcd)
{
    printf("\nThe GCD of %d and %d is : %d\n",a,b,gcd);
}

