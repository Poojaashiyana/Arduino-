#include<stdio.h>
int main()
{
int x,y;
printf("Enter the value of x");
scanf("%d",&x);
printf("Enter the value of y");
scanf("%d",&y);
if((x*x*x)<(y*x*x)){
  printf("TRUE");
}
else{
  printf("FALSE");
}
return 0;
}
