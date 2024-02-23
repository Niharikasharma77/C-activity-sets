/*06. Write a program to reverse a string.

***Function Declarations***
```c
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
```
*/

#include<stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    char a[100],b[100];
    input_string(a);
    str_reverse(a,b);
    output(a,b);
    return 0;
}

void input_string(char *a)
{
    printf("enter the string:");
    scanf("%s",a);
}

void str_reverse(char *str,char *rev_str)
{
    int i,j;
    for(i=0;str[i]!='\0';i++);
    i=i-1;
    for(j=0;i>=0;j++,i--)
    {
        rev_str[j]=str[i];
    }
    rev_str[j]='\0';
}

void output(char *a, char *reverse_a)
{
    printf("the string is %s\n",a);
    printf("reverse string is %s\n",reverse_a);
}