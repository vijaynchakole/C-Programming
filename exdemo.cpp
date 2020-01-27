#include <gnu/libc-version.h>
#include<stdio.h>
#include<malloc.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

int main()
{

 char arr[50];
char brr[50];


printf("enter first string\n");
scanf("%s",arr);

snprintf("\tvijay%s\n"arr);

fflush(stdout);
printf("enter second string\n");
scanf("%[^'\n']s",brr);
fflush(stdin);



return 0 ;

}
