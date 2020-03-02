#include<stdio.h>
#include<fcntl.h>

int main()
{

int fd = 0 ;
char arr[512] ;
char brr = "chakole" ;
char ch ;


fd = open("demo.txt",O_RDWR | O_APPEND);

if(fd==-1)
{
printf("unable to open file\n");

}
else
{
printf("open successfully\n");
}


read(fd,arr,512);

//printf("%s",arr);

char*str = brr ;

while(*str!='\0')
{
printf("%c",*str);

write(fd,*str,1);

str++;

}

return 0;
}
