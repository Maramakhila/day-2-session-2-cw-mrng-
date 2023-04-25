#include<stdio.h>
int main(){
	int arr[1000];
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements in an array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n All negative numbers in an array are:");
	for(int i=0;i<n;i++){
		if (arr[i]<0)
		{
			printf("  %d",arr[i]);
		}
	}
	return 0;
	
}
