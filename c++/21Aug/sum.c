#include <stdio.h>

int main()
{
	printf("Enter number to calculate sum \n");
	int num ;
	scanf("%d",&num);
	int sum =0;
	int i;
	for( i =0;i<=num;i++){
		
	 sum =sum + i;

	}
	
printf("Sum of the numbers upto %d",sum);
return 1; 
}
