#include<stdio.h>
int main()
{
	int i;
	int arr[]={10,20,30,40,50};
	int sum=0;
	for(i=0;i<5;i++)
	{
		sum+=arr[i];
	}
     printf("%d\n",sum);
	return 0;
}