#include<stdio.h>
int main()
{
	int num[]={24,34,12,44,56,17};
	int i=0;
	while(i<=5){
		printf("\nElement no. %d",i);
		printf("\nAddress = %u",&num[i]);
		i++;
		
	}
}