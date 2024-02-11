/*12. Write a C program to find the sum of _n_ complex numbers

***Function Declarations***
```c
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
```*/
#include<stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int get_n()
{
    int n;
    printf("rnter the complex number:");
    scanf("%d",&n);
    return n;
}

Complex input_complex()
{
    Complex c;
    printf("enter the real part:");
    scanf("%f",&c.real);
    printf("enter the imaginary part:");
    scanf("%f",&c.imaginary);
    return c;
}

void input_n_complex(int n,Complex c[n])
{
    for (int i=0;i<n;i++)
    {
        c[i]=input_complex();
    }
}

Complex add(Complex a,Complex b)
{
    Complex result;
    result.real=a.real+b.real;
    result.imaginary=a.imaginary+b.imaginary;
    return result;
}

Complex add_n_complex(int n,Complex c[n])
{
    Complex result =c[0];
    for (int i=0;i<n;i++)
    {
        result=add(result,c[i]);
    }
    return result;
}

void output(int n,Complex c[n],Complex result)
{
    printf("the sum of the %d complex numbers is",n);
    if(result.imaginary>=0)
    {
        printf("%.0f+%0.fi\n",result.real,result.imaginary);
    }
    else{
        printf("%.0f+%.0fi\n",result.real,result.imaginary);
    }
}

int main()
{
    int n=get_n();
    Complex c[n];
    input_n_complex(n,c);
    Complex result=add_n_complex(n,c);
    output(n,c,result);
    return 0;
}