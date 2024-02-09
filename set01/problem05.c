/*5. Write a C program to compare three numbers using **pass by value**

***Function Declarations***

```c
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
```*/
#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int input()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    return x;
}

int compare(int a,int b,int c)
{
    int largest;
    if(a>=b && a>=c)
    {
        largest = a;
        return largest;
    }
    if(b>=a && b>=c)
    {
        largest = b;
        return largest;
    }
    else
    {
        largest = c;
        return largest;
    }
}

void output(int a,int b,int c,int largest)
{
    printf("the largest of %d,%d,%d is %d ",a,b,c,largest);
}
 int main()
 {
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest= compare(a,b,c);
    output(a,b,c,largest);
    return 0;
 }