#include<stdio.h>
#include"static.c"
 static void gun()
{

printf("inside main gun\n");
}
int main(int arg,char*args[])
{

//printf("%s\n%d\n",args[0],*args[1]);

gun();
gun();


return 0;

}
