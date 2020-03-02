#include<stdio.h>
#include<fcntl.h>
void Encryption(char *str, int key);

void Decryption(char *str, int key);
 long int start = 100 ;
long int end = 0 ;
long int *temp = &start ;

int main()
{

char arr[100] ;
/*
printf("enter strinng\n");
scanf("%[^'\n']s",arr);
Encryption(arr,5);
printf("%s\n",arr);
Decryption(arr,5);
printf("%s\n",arr);
*/
start = ~start ;
printf("value of %ld\n",start);

start = ~start ;
printf("%d\n",start);


return 0 ;

}


void Encryption(char *str, int key)
{



}



void Decryption(char *str, int key)
{




}
