/*10. Write a C program to compare two strings, character by character.

> For example, `Hello` should be equal to `Hello`, but not equal to `hello`.

> `Hello` will be lesser than `Hellw` (alphabetical order).

***Function Declarations***

```c
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
```*/
#include<stdio.h>
void input_two_strings(char *string1,char *string2);
int stringcompare(char *string1,char *string2);
void output(char *string1,char *string2,int result);
void input_two_strings(char *string1,char *string2)
{
    printf("enter the first string:");
    scanf("%s",string1);
    printf("enter the second string:");
    scanf("%s",string2);
}

int stringcompare(char *string1,char *string2)
{
    int i,result=0;
    for(i=0;string1[i]!='\0' && string2[i]!='\0' && string1[i]==string2[i];i++)
    {
        continue;
    }
    result =string1[i] - string2[i];
    return result;
}

void output(char *string1,char *string2,int result)
{
    if (result <=-1)
    {
        printf("%s is less than %s\n",string1,string2);
    }
    else if(result >=1)
    {
        printf("%s is greater than %s\n",string1,string2);
    }
    else if(result ==0)
    {
        printf("%s is equal to %s\n",string1,string2);
    }
}

int main()
{
    char string1[100],string2[100];
    input_two_strings(string1,string2);
    int result = stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}