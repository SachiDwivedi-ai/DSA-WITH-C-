#include<stdio.h>
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
void main()
{
	int a,b;
	printf("Enter a two values:");
	scanf("%d" ,&a);
	scanf("%d" ,&b);
	printf("Before swap a is %d and b is %d" ,a,b);
	swap(&a ,&b);
	printf("After swap a is %d and b is %d" ,a,b);
}
