#include<stdio.h>
int main()
{	int flag;
	printf("------- Calculator ----------");
	do{
		printf("\nOperation:-\n");
		printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulos\n");
		printf("Enter Your Choice:-");
		int n;
		scanf("%d",&n);
		float a,b,c;
		float x,y,z;
		float p,q,r;
		float n1,n2,res;
		int num1,num2,n3;
		switch(n)
		{	case 1:
				
				printf("\n Performing Addition\n");
				printf("Enter 1st Number:-");
				scanf("%f",&a);
				printf("Enter 2nd Number:-");
				scanf("%f",&b);
				c=a+b;
				printf("\nAddition of %0.2f and %0.2f is %0.2f",a,b,c);
				break;
			case 2:
				
				printf("\n Performing Subtraction\n");
				printf("Enter 1st Number:-");
				scanf("%f",&x);
				printf("Enter 2nd Number:-");
				scanf("%f",&y);
				z=x-y;
				printf("\nSubtraction of %0.2f and %0.2f is %0.2f",x,y,z);
				break;
			case 3:
				
				printf("\n Performing Multiplication\n");
				printf("Enter 1st Number:-");
				scanf("%f",&p);
				printf("Enter 2nd Number:-");
				scanf("%f",&q);
				r=p*q;
				printf("\nMultiplication of %0.2f and %0.2f is %0.2f",p,q,r);
				break;
			case 4:
				
				printf("\n Performing Division\n");
				printf("Enter 1st Number:-");
				scanf("%f",&n1);
				printf("Enter 2nd Number:-");
				scanf("%f",&n2);
				res=n1/n2;
				printf("\nDivision of %0.2f and %0.2f is %0.2f",n1,n2,res);
				break;
			case 5:
				
				printf("\n Performing Modulos\n");
				printf("Enter 1st Number:-");
				scanf("%d",&num1);
				printf("Enter 2nd Number:-");
				scanf("%d",&num2);
				n3=num1%num2;
				printf("\nModulos of %d and %d is %d",num1,num2,n3);
				break;	
			default:
				printf("\nChoice between 1-5\n");
				break;
		}
		printf("\n\nDo U want to Continue(press 1):-");
		scanf("%d",&flag);
	}while(flag==1);
}
