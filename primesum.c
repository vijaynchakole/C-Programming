#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL ;
BOOL ChkPrime(int );
BOOL PSum(int);

int main()
{
int num = 0 ;
printf("enter number\n");
scanf("%d",&num);

ChkPrime(num);

printf("\n");

return 0 ;
}


BOOL ChkPrime(int no)
{

BOOL flag=FALSE;
int iSum=0,iCnt=0;
int temp=0;


int *ptr=(int*)malloc((no/2)*sizeof(int));

int i = 0, j = 0 ;

for(i=2 ; i<no;i++)
{

for(j=2;j<=(i/2);j++)
{
   if((i%j)==0)
     {
        break;

     }



}

if(j>(i/2))
{

PSum(i);

}


}

/*
i=0;
iSum=0; 

while(ptr[i]!=0)
{


//printf("%d  ",ptr[i]);

iSum=iSum+ptr[i];

if(iSum==ptr[i+1] && ptr[i]>temp)
{
	temp =iSum;


printf("%d  ",ptr[i]);

	i=0;
iSum=0;



}

i++;

}*/

return TRUE;

}


BOOL PSum(int no)
{

int i = 0 , j = 0 , iSum = 0;

for(i=2; i<no ; i++)
{

for(j=2;j<=(i/2);j++)
{
   if((i%j)==0)
    {

	break;
	}



}

if(j>(i/2))
{

  iSum=iSum+i;

if(iSum==no)
{
  //iSum=0;

printf("%d  ",no);
break;

}

}



}



return TRUE;
}





















//////////////////////////////////////////////////////////////////////////////

/*
BOOL PSum(int prime)
{

int i = 0, j = 0 , k = 0, iSum = 0 ;


for(i=2;i<prime;i++)
{

for(j=2; j<=(i/2); j++)
{
 
  if((i%j)==0)
     {
         break;

      }


}


if(j>(i%2))
{

iSum=iSum+i;

if(iSum==prime)
{
iSum=0;
  printf("%d ",prime);
  return TRUE;


}


}


}

return FALSE;
}*/
