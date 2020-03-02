#include<stdio.h>
#include<malloc.h>

int Forward(int *ptr, int num) ;
int Backward(int *ptr, int num,int) ;


int main()
{


int num = 0, i = 0 ;
int *ptr = NULL ;

printf("enter number of elements for storing\n");
scanf("%d",&num);

ptr =(int*)malloc(num*sizeof(int)) ;

for(i=0;i<num;i++)
{

	scanf("%d",&ptr[i]);

}

Forward(ptr,num);

return 0 ;

}

///////////////////////////////////////////////////////////

/*
int Forward(int *arr, int num)
{

static int count = 0 ;
int i = 0 ;





	for(i=0; i<num ; i++)
	{

			if(count==0)
	{

		return 0 ;
	}
			printf("%d ",arr[i]);


			if(i==(num-1))	
				{

						printf("\t");
					count++;
					printf("{(%d)}",count);
						Backward(arr,i,num);
			
				}
	
	

	}


return 0 ;
}

/////////////////////////////////////////////////////

int Backward(int *arr, int num, int index)
{

	int i = 0 ;

//static int fix = index ;

	for(i=num ; i>=0 ; i--)
		{
			
			printf("%d ",arr[i]);

				if(i==0)
				{
							printf("\t");
						Forward(arr,(index));

				}		

		}

return 0 ;
}*/
//////////////////////////////////////////////////////////


int Forward(int *arr, int num)
{

static int count = 0 ;
int i = 0 ;



/*

	for(i=0; i<num ; i++)
	{

			printf("%d ",arr[i]);


		if(i==(num-1))
		{
					count++ ;
		for(; i>=0 ; i--)
		{
			
			printf("%d ",arr[i]);	

		}
		
		printf("{(%d)}",count);
		}
	
	

	}
*/

int flag = 0 ;

for(; ; )
	{

			

			if(i<num && flag == 0 )
			{
				printf("%d ",arr[i]);

				i++ ;

			

			}
			else if(i>=0)
					{
							flag = 1 ;
						if(i==num){i--;}

						
							
							printf("%d ",arr[i]);

								i--;

						if(i==-1){ i++; flag = 0;}

					}
	



	}


return 0 ;
}
