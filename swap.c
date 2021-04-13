#include<stdio.h>
int main()
{
double x, y, temp;
printf("enter x: ");
scanf("%lf",&x);
printf("enter y: ");
scanf("%lf",&y);
temp=x;
x=y;
y=temp;
printf("\nAfter swapping , x=%lf\n", x);
printf("after swapping , y=%lf\n", y);
return 0;
}
