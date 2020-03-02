#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
printf("inside hello\n");



if(fork()==0)
{

exec("myexe");

}

return 0;

}
