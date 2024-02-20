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
