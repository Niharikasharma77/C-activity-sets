/*3. Write a C program to add two numbers using **pass by value**

***Function declarations***

```c
int input();
int add(int a, int b);
void output(int a, int b, int sum);*/
#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int input()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    return x;
}

int add(int a,int b)
{
    int sum;
    sum = a+b;
    return sum;
}

void output(int a,int b,int sum)
{
    printf("sum is %d",sum);
}
 int main()
 {
    int a,b,sum;
    a = input();
    b=input();
    sum = add(a,b);
    output(a,b,sum);
    return 0;
 }