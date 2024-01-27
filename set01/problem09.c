/*9. Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.

***Function Declarations***
```c
float input();
float square_root(float n);
void output(float n, float sqrroot);
```
*/
#include <stdio.h>
float input();
float square_root(float n);
void output(float n,float sqrroot);
float input()
{
    float n;
    printf("enter the number:");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float sqrroot;
    float difference = 1;
    sqrroot = n/2;
    while(difference > 0.0001)
    {
        difference = sqrroot*sqrroot-n;
        sqrroot =(sqrroot +n /sqrroot)/2;
    }
    return sqrroot;
}

void output(float n,float sqrroot)
{
    printf("the squareroot of %.2f is %.2f\n",n,sqrroot);
}
int main()
{
    float n,sqrroot;
    n = input();
    sqrroot = square_root(n);
    output(n,sqrroot);
    return 0;
}