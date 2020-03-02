#include<stdio.h>

int main()
{

 int num = 10 ;
 
 char*ptr = (char*)&num ;
 
  ptr++;
 
  *ptr = 21 ;

 ptr++ ;

 *ptr = 31 ;

 ptr++ ;

 *ptr = 51 ;

 printf("%d\n",*ptr);
	ptr-- ;
 printf("%d\n",*ptr);
	ptr-- ;
 printf("%d\n",*ptr);
	ptr-- ;
 printf("%d\n",*ptr);


// and original num value is no now
 printf("%d\n",num);

return 0 ;

}
