#include<stdio.h>
int main()
{
	int n1,n2,*a,*b;
	printf("enter n1 and n2 value:");
	scanf("%d %d",&n1,&n2);
	a=&n1;
	b=&n2;
	if(*a>*b){
		printf("the max element is %d",*a);
	}
	else{
		printf("the max element is %d",*b);
	}
return 0;
}
