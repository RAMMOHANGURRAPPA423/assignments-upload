#include<stdio.h>

int sum(int arr[], int num)
{
	if(num<0)
	{
		return 0;
	}
	else
	{
		return (arr[n] + sum(arr,num-1));
	}
}
int main()
{
	int arr[]={10,20,30,40,50},i;
	int num = sizeof(arr)/sizeof(arr[0]);
	int res=sum(arr,num);
	printf("sum of array elements: %d",res);
	return 0;
}



