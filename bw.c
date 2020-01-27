/**/


#include<stdio.h>
/*
int main()
{

printf("Hello world\n");
int i = -1;
	 i=i>>3 ;
printf("%d first\n",-1>>3);//
printf("%d second\n",-1>>3);
printf("%d third\n",-1<<3);
printf("%d fourth\n",-1<<3);


return 0 ; 
}
*/
//////////////////////////////////////////////
/*
void fun(int x)
{
	
	while(x)
	{
		
	if(x&(+1))
	printf("%d\n",x);

	--x ;

	}


}//25 23 21 19 17 15 13 11 9 7 5 3 1 

int main()
{

	fun(25);
	
	return 0 ;


}*/

/////////////////////////////////////////////
/*
void fun(int x)
{
	int no = 0X1 ;
	x = 97 ;

	int cnt = 32 ;

	while(cnt)
	{
		 if(x&no==0)
			printf("0");
			else
					printf("1");

			
				no<<=1 ;

		cnt--;
	

	}
	
}

int main()
{

	fun('a') ;

  return 0 ;




return 0 ;
}
*/
///////////////////////////////////////////////
/*
int fun(int x,int y)
{
	return (x&~y|0x10);
	
}

int main()
{
		int i = 20 ;
		int x =10, y = 20 ;
//	printf("%d\n",x&~y|0x10);//26
	printf("%d\n",fun(10,20));//26

return 0 ;
}
*/
/////////////////////////////////////////////
/*

int gun(int x,int y)
{
	return (x+y);//18

}
int fun(int x, int y)
{
return gun(x&~y|0x10,++x&++y);

}

int main()
{


	printf("%d\n",fun(10,20));//18

return 0 ;
}
*/

////////////////////////////////////////////
/*
int main()
{

	int no1 = 11 , no2 = 21, a ,b ,c ;

	a = no1&no2 ;

	b = no1 | no2 ;
  
	c = no1^no2 ;

	printf("%d  %d %d\n",a,b,c);// 1 31 30



return 0 ;
}
*/
////////////////////////////////////////////

/*
int main()
{

	unsigned  no1 = 11 ;

	unsigned  no2 ;

	no2 = ~no1 + 1 ;// (-12)+1 = -11 ;
	no1 = ~no1 + 1 ; ; // -11


	printf("%d  %d\n",no1,no2);//-11 -11


return 0 ;
}
*/
//////////////////////////////////////////
/*
int main()
{

	unsigned int no1 = 0x0000ffff ;
	unsigned int no2 = 0xffff0000 ;
	
printf("%x %x %x\n",no1&no2,no1|no2,no1^no2);//00000000, ffffffff ffffffff

return 0 ;
}
*/

/////////////////////////////////////////////////
/*
int main()
{

	unsigned int no1 = 0x00ff00ff ;
	unsigned int no2 = 0xff00ff00 ;
	
printf("%x %x %x\n",no1&no2,no1|no2,no1^no2);//0 ffffffff ffffffff


return 0 ;
}
*/
///////////////////////////////////////////////////
/*

int main()
{

	 int no1 = 10 ;
	 int no2 = 60 ;

	no1 =no1<<1 ;
	no2 =no2>>3 ;
	
	printf("%d  %d\n",no1,no2); //20 7





return 0 ;
}
*/

////////////////////////////////////////////////
/*
int main()
{

	 int no1 = 10 ;
	 int no2 = 60 ;

	no1<<1 ;
	no2>>3 ;
	
	printf("%d  %d\n",no1,no2); //10 60  because we have not assign them after change





return 0 ;
}
*/

////////////////////////////////////////
/*
int main()
{

	int no1 = 10 ;
	 int no2 = 60 ;

	no2 = no1<<printf("Bits") ; //Bits
	
	printf("%d  %d\n",no1,no2);//10 160	

return 0 ;
}
*/
/////////////////////////////////////
/*
int main()
{

	int no1 = 10 ;
	 int no2 = 60 ;

	no2 = no1<<printf(2+"Bits"+2-1) ;//3 character escape and print only s and shift by only 1;
	
printf("%d  %d\n",no1,no2);//10 20 


return 0 ;

}
*/
////////////////////////////////////////

/*
int fun(int x)
{

	int cnt = 0 ;

	for(;x;x>>=1)
	{
		if(x&1)cnt++ ;


	}

return cnt ;

}

int main()
{


int no = 15 ;

printf("%d\n",fun(no));//4


return 0 ;

}
*/
////////////////////////////////////////////


/*

int main()
{

	int no1 = 128 ;

	printf("%d\n",fun(no1));//7

return  ;
}

int fun(int x)
{

	int cnt = 0 ;

	for(;x;x>>=1)
	{
		if(!(x&1))cnt++ ;


	}

return cnt ;

}

*/

///////////////////////////////////////////////////

/*
int fun(int x)
{


return x<<2;
}

int main()
{

	int no1 = 128 ; 

	int no2 = - 5 ;
	
	printf("%d\n",fun(no1));//512
	
	printf("%d\n",fun(no2));//4


return  0 ;
}
*
*/
//////////////////////////////////////////////////////
/*
int main()
{


	int no1 = 15 ; 

	printf("%d\n",no1<<2<<2);//240
	printf("%d\n",no1<<(2<<2));//3840

return 0 ;

}
*/
/////////////////////////////////
/*
int main()
{

int no1 = 115, no2 = 112, ans ;

	if(printf("%d\n",no1&no2||no1&&no2)) //1
	printf("Vijay\n");
	printf("chakole\n");
	
return 0 ;

}//1 Vijay chakole
*/
////////////////////////////////////////////////////
/*
int main()
{

int no1 = 0, no2 = 0 ;

no1<<2||++no1 == 0||++no2 == 1 ;

printf("%d  %d\n",no1,no2);//1 1


return 0 ;


}
*/
//////////////////////////////////////////////
/*
int main()
{
	int no1 = 0x10, no2=010, no3=10,a=2 ;

	printf("%d %d %d\n",no1<<a,no2<<a,no3<<a);////64 32 40


}//64 32 40

*/
///////////////////////////////////////////////

int main()
{
	int no1 = 15, no2 = 01 ;

	printf("%d\n",(no1<<no2<<14)?1:0);//1

	printf("%d\n",(no1<<no2&&no2<<14)?1:0);//1


return 0 ;

}
