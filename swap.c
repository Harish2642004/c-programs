#include<stdio.h>
main()
{
  int x,y,z;
  printf("enter the value for x and y\n");
  scanf("%d%d",&x,&y);
  z=x;
  x=y;
  y=z;
  printf("x=%d\n y=%d\n",x,y);


}
