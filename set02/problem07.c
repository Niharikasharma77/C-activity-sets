/*07. Write a program to find the area of a triangle.

***Function Declarations***
```c
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Traingle *t);
void output(Triangle t);
```*/

#include <stdio.h>
typedef struct _triangle
{
    float base, altitude, area;
}Triangle;

Triangle input_triangle();
void find(Triangle* t) ;
void output(Triangle t);

int main()
{
    Triangle Tri;
    Tri = input_triangle();
    find(&Tri);
    output(Tri);
    return 0;
}

Triangle input_triangle()
{
    Triangle Tri;
    printf("enter the base of triangle:");
    scanf("%f",&Tri.base);
    printf("enter the altitude of triangle:");
    scanf("%f",&Tri.altitude);
    return Tri;
}

void find(Triangle *t)
{
    t->area = 0.5*t->base*t->altitude;
}

void output(Triangle t)
{
    printf("The area of the triangle with base %f and height %f is %fsq units",t.base,t.altitude,t.area);
}