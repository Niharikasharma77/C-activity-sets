/*8. Write a C program to find sum of _n_ different numbers entered by the user.

***Function Declarations***

```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
```*/

#include<stdio.h>
int input_array_size();
void input_array(int n,int a[n]);
int sum_n_array(int n,int a[n]);
void output(int n,int a[n],int sum);
int input_array_size()
{
    int n;
    printf("enetr the size of an array:");
    scanf("%d",&n);
    return n;
}

void input_array(int n,int a[n])
{
    printf("enter array values:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n,int a[n])
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum = a[i]+sum;
    }
    return sum;
}

void output(int n,int a[n],int sum)
{
    printf("the sum is %d \n",sum);
}

int main()
{
    int n,sum =0;
    n = input_array_size();
    int a[n];
    input_array(n,a);
    sum = sum_n_array(n,a);
    output(n,a,sum);
    return 0;
}