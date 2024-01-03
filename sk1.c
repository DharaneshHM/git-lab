#include<stdio.h>
int main()
{
	int arr[5]={20,70,54,76,89};
	int size=sizeof(arr)/sizeof (arr[0]);
	int max=arr[0];
	for(int i=1;i<size;i++)
	{
        	if(max<arr[i])
	        {
		  max=arr[i];
		  }
		  }		  
		  printf("%d",max);
		  return 0;
		  }

	


