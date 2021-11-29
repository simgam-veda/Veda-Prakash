#include<stdio.h>
#include<math.h>
int main(){
  int a,b;
  printf("Enter A:-");
  scanf("%d",&a);
  
  printf("Enter B:-");
  scanf("%d",&b);
  printf("Square root of %d is %f",a,sqrt(a));
  printf("\n%d Raise to the power of %d is %f",a,b,pow(a,b));

}
