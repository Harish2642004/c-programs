/*random numbers */
#include<stdio.h>
#include<stdlib.h>
int main()
{

    int i;
    printf("random numbers are \n");
    for(i=0;i<10;i++)
    {
        printf(" %d",rand()%100+1);

    }
}
