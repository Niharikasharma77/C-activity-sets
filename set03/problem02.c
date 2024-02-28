/*2. Write a program to find whether the given 3 points form a triangle

***Function Declarations***
```c
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
```*/

#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
    float  x1, y1, x2, y2, x3, y3;
    input_triangle(&x1, &y1, &x2, &y2,&x3, &y3);
    int result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}

void  input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the point x1 and y1: \n");
    scanf("%f %f",x1,y1);

    printf("Enter the point x2 and y2: \n");
    scanf("%f %f",x2,y2);

    printf("Enter the point x3 and y3: \n");
    scanf("%f %f",x3,y3);

}

int  is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    int result;
    if(0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)))
    {
        result==1;
    }
    else{
        result== 0;
    }
    return result;
}

void  output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result==1)
    {
        printf("it is triangle");
    }
    else if(result==0)
    {
        printf("not a triangle");
    }
}