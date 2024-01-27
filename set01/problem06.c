/*6. Write a C program to compare three numbers using **pass by reference**

***Function Declarations***

```c
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
```*/

#include<stdio.h>
int input(int *a,int *b, int *c);
void compare(int a,int b,int c,int * largest);
void output(int a,int b,int c,int largest);
int input(int *a,int *b,int *c)
{
    int x;
    printf("enter the value:");
    scanf("%d",&x);
    return x;
}

void compare(int a,int b,int c,int *largest)
{
    int largest;
    if(a>=b && a>=c)
    {
        *largest = a;
    }
    if(b>=a && b>=c)
    {
        *largest =b;
    }
    else{
        *largest =c;
    }
}

void output(int a,int b,int c,int largest)
{
    printf("the largest of %d,%d and %d is %d",a,b,c,largest);
}

int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}