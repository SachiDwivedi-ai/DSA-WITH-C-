#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter no.of element for the insertion:");
	scanf("%d" ,&n);
	int a[n-1];
	printf("Enter value for array:");
	for(i=0;i<n;i++){
		printf("Enter %d no.:" ,(i+1));
		scanf("%d" ,&a[i]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		printf("%d" ,a[i]);
	}
	return 0;
}
