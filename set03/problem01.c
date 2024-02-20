/*1. Write a program to find the distance between 2 points

***Function Declarations***
```c
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
```*/

#include<stdio.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2) ;
void output(float x1, float y1, float x2, float y2,float distance);

int main()
{
    float x1, y1, x2, y2;
    input(&x1,&y1,&x2,&y2);
    float distance = find_distance(x1, y1, x2, y2);
    output(x1, y1, x2, y2, distance);
    return 0;
}

void input(float *x1,float *y1, float *x2, float *y2)
{
    printf("enter the coordinates for first point:");
    scanf("%f %f",x1,y1);
    printf("enter the coordinates for second point:");
    scanf("%f %f",x2,y2);
}

float find_distance(float x1,float y1,float x2,float y2)
{
    float dx = x2-x1;
    float dy = y2-y1;
    float distance = dx*dx+dy*dy;
    return distance;
}

void output(float x1,float y1,float x2,float y2,float distance)
{
    printf("the distance between the points (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,distance);
}