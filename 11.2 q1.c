#include<stdio.h>

void main()
{
	int n,i,j;
	
	printf("Enter the array's size : ");
	scanf("%d",&n);
 	
 	j=n-1;
	
	int a[n],b[n];
	int *p[n];
	
	printf("Enter array elements : \n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		p[i] = &a[i];
		b[i] = a[i];
	}
	
	for(i=0;i<n;i++)
	{
		*p[i] = b[j];
		j--;
	}
	
	printf("Reversed array elements : \n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,*p[i]);
	}
	
	
}
