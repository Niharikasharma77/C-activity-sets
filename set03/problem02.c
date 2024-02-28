/*2. Write a program to find whether the given 3 points form a triangle

***Function Declarations***
```c
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
```*/

#include<stdio.h>
#include<math.h>
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
    float a,b,c,d,e,f,d1,d2,d3;
    a=pow(x2-x1,2); 
    b=pow(x3-x1,2);
    c=pow(x3-x2,2);
    d=pow(y2-y1,2);
    e=pow(y3-y2,2);
    f=pow(y3-y1,2); 

    d1=sqrt(a+d); 
    d2=sqrt(b+f);
    d3=sqrt(c+e);

    if(d1+d2>d3 && d2+d3>d1 && d1+d3>d2)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void  output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result==1)
    {
        printf("it is triangle");
    }
    else
    {
        printf("not a triangle");
    }
}