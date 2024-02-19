/*08. Write a program to find the triangle with smallest area in n given triangles.

***Function Declarations***
```c
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
```*/

#include<stdio.h>

typedef struct _triangle{
	float base,altitude,area;
}Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n,Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n,Triangle t[n]);
Triangle find_smallest_triangle(int n,Triangle t[n]);
void output(int n,Triangle t[n],Triangle smallest);

int main()
{
	int n=input_n();
	Triangle t[n];
	input_n_triangles(n,t);
	find_n_areas(n,t);
	Triangle smallest=find_smallest_triangle(n,t);
	output(n,t,smallest);
	return 0;
}

int input_n()
{
	int n;
	printf("enter the number of Triangles:");
	scanf("%d",&n);
	return n;
}

Triangle input_triangle()
{
	Triangle t;
	printf("Enter the Base of the triangle: ");
	scanf("%f", &t.base);
	printf("Enter the altitude of the triangle:");
	scanf("%f",&t.altitude);
	return t;
}

void input_n_triangles(int n,Triangle t[n])
{
	for(int i=0;i<n;i++)
	{
		printf("triangle %d:",i+1);
		t[i]=input_triangle();
	}
}

void find_area(Triangle *t)
{
	t->area=0.5*t->base*t->altitude;
}

void find_n_areas(int n,Triangle t[n])
{
	for(int i=0;i<n;i++)
	{
		find_area(&t[i]);
	}
}

Triangle find_smallest_triangle(int n,Triangle t[n])
{
	Triangle smallest=t[0];
	for(int i=1;i<n;i++)
	{
		if(t[i].area<smallest.area)
		{
			smallest=t[i];
		}
	}
	return smallest;
}

void output(int n,Triangle t[n],Triangle smallest)
{
	printf("the number of triangles are %d\n",n);
	printf("smallest triangle is:\n");
	printf("base is %f\n",smallest.base);
	printf("altitude is %f\n",smallest.altitude);
	printf("area is %f\n",smallest.area);
}