#include<stdio.h>

int main()
{

	int arr[] = {36,25,159,45,2,56,5}; 
	int i = 0, Max = arr[0], second = 0,third = 0 ; 


	for(i = 0 ; i<7 ; i++)
	{

			if(arr[i]>Max)
			{
				third = second ;
				second = Max ;
				Max = arr[i] ;


			}

		if(arr[i]<Max && arr[i]>second)
			{

				third = second ;
				second = arr[i] ;

			}

			if(arr[i]<second && arr[i]>third)
			{
				third = arr[i] ;

			}
				


	}

printf("first Max is %d\n",Max);
printf("Second Max is %d\n",second);
printf("third Max is %d\n",third);




return 0 ;

}
