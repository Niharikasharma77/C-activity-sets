/*04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.

***Function Declarations***
```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
```*/

#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n = input_array_size();
    int a[n];
    input_array(n,a);
    int sum = sum_composite_numbers(n,a);
    output(sum);
}

int input_array_size()
{
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    printf("enter the number:");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int sum_composite_numbers(int n,int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=2;j<n;j++)
        {
            if(a[i]%j==0)
            {
                sum+=a[i];
                break;
            }
        }
    }
    return sum;
}

void output(int sum)
{
    printf("the sum is %d\n",sum);
}