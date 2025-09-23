 #include<stdio.h>
 int main()
 {  
    int i,k;
    int a[]={10,20,30,40,50};
    printf("Enter the index you want to delete:");
    scanf("%d" ,&k);
    for(i=k;i<4;i++){
    	a[i]=a[i+1];
	}
	for(i=0;i<4;i++){
		printf("%d " ,a[i]);
	}
 }
