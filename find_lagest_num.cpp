#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter the three numbers:");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>=num2 && num1>=num3)
	{
	printf("highest num is:%d",num1);
    }
    else if(num2>=num1 && num2>=num3)
    {
    	printf("highest num is: %d",num2);
	}
	else
	{
		printf("highest num is : %d",num3);
		
	}
	return 0;

}