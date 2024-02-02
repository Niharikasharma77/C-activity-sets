/*11. Write a C program to find the sum of 2 complex numbers

***Function Declarations***
```c
struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
```
*/
#include<stdio.h>
struct _complex{
    float real;
    float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a,Complex b);
void output(Complex a,Complex b,Complex sum);

Complex input_complex()
{
    Complex c;
    printf("enter the real part:");
    scanf("%f",&c.real);
    printf("enter the imaginary part:");
    scanf("%f",&c.imaginary);
}

Complex add_complex(Complex a,Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a,Complex b,Complex sum)
{
    printf("the sum of the two complex numbers is :%.2f +%.2fi\n",sum.real,sum.imaginary);
}

int main()
{
    Complex a,b,sum;
    a=input();
    b=input();
    sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
}
