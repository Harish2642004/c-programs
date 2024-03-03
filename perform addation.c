#include<stdio.h>
struct complex
{
   int real,imaginary;
};
struct complex addition(struct complex c1,struct complex c2)
{
    struct complex c3;
    c3.real=c1.real+c2.real;
    c3.imaginary=c1.imaginary+c2.imaginary;
    return c3;
}
int main()
{
    struct complex c1,c2,c3;
    printf("enter real part and imaginary part of 1st complex number\n");
    scanf("%d%d",&c1.real,&c1.imaginary);
    printf("enter real part and imaginary part of 2nd complex number\n");
    scanf("%d%d",&c2.real,&c2.imaginary);
    c3=addition(c1,c2);
    printf("c1 is %d+%di\n",c1.real,c1.imaginary);
    printf("c2 is %d+%di\n",c2.real,c2.imaginary);
    if(c3.imaginary<0)
    printf("Result is %d%di\n",c3.real,c3.imaginary);
    else
    printf("Result is %d+%di\n",c3.real,c3.imaginary);
    return 0;
}
