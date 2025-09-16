#include<stdio.h>
void swap(int a ,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("After swaping of no. a = %d",a);
	printf("After swaping of no. b = %d",b);
}
int main()
{
	int a,b;
	printf("Enter a number ");
	scanf("%d" ,&a);
	printf("Enter a number ");
	scanf("%d" ,&b);
	printf("Before swap value of a and b is %d and %d" ,a,b);
	swap(a,b);
}
