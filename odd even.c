/*chek whether odd or even*/
#include<stdio.h>
int main()
{

    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    if(n%2==0)
    {

        printf("%d is even number\n",n);

    }
    else{
        printf("%d is odd number\n",n);
    }
    return 0;
}
