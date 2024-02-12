/*02.  Write a program to find if a triangle is scalene.

> A triangle is scalene if all the three sides of the triangle are not equal to one another

***Function Declarations***
```c
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
```*/

#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
    int a,b,c,isscalene;
    a = input_side();
    b = input_side();
    c = input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}

int input_side()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    return x;
}

int check_scalene(int a, int b, int c)
{
    int isscalene;
    if(a!=b && a!=c && b!=c)
    {
        return 0;
    }
    else{
        return 1;
    }
    return isscalene;
}

void output(int a, int b, int c, int isscalene)
{
    if(isscalene==0)
    {
        printf("The triangle is scalene with sides %d,%d and %d\n",a,b,c);
    }
    else if(isscalene==1)
    {
        printf("the triangle is not scalene with sides %d,%d and %d",a,b,c);
    }
}
