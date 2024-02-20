/*06. Write a program to reverse a string.

***Function Declarations***
```c
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
```
*/

#include<stdio.h>

//wap to change the value of the variable in the main function

int input(int *n);
int main()
{
   
    int a=4;
    printf("%d",a);
    input(&a);
    printf("%d",a);
}

int input(int *n)
{
    *n=7;
}
