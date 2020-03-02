#include<iostream>
using namespace std ;

/*

class demo
{
public:
int num1, num2, ans ;



demo(int x = 10, int y = 10)
{

	num1 = x ;
	num2 = y ;


}
public:

int Addition() ;

int Substraction(int &i,int &j) ;




} ;


int demo:: Addition()
{

	ans = num1+num2 ;

	return ans ;


}

int demo :: Substraction(int &num1,int &num2)
{

	ans = num1 - num2 ;


	return ans ;

}

int main()
{

	int value = 60, val2 = 20 ;
	demo obj(50,90);

	

	value = obj.Addition() ;

	cout<<value<<"\n" ;



	value = 60 ;
	value = obj.Substraction(value,val2) ;

	cout<<value<<"\n" ;

	int i = 10 ; 

	int *ptr = &i ;

	int *(&ref) = ptr ;

	cout<<*(ref)<<"\n" ;

	int arr[5] = {10,20,30,40,50} ;

	int (&brr)[5] = arr ;

	cout<<brr[1]<<"\n";
	
return 0 ;

}

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*

class demo
{

 public :

int i , j ;

	 demo() // defaut constructor
	 {
	   i=0;
	   j=0;

	 }

	demo(int x,int y) // parameterise constructor
	{
		
	 i=x;
	 j=y;

	}
	
	demo(demo &ref) // copy constructor
	{
		i=ref.i ;
		j=ref.j ;

	}


} ;


int main()
{
 	demo obj();// defaut constructor
	demo obj2(10,20);//parameterise constructor
	//demo obj3(obj2);// copy constructor

	demo obj3 = obj2 ;// copy constructor

	cout<<obj3.i<<"\n"<<obj3.j<<"\n";



return 0;

}
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
class hello
{

public:

int i,j ;

hello()
{

	i = 10 ;
	j=20;


}

hello(int x)
{
//this->i = x ;
(*this).i = x ;

}

int add() ;

hello& sun()
{

 this->j = 100 ;

	return *this ;


}


} ;

int hello :: add()
{

j=i ;

return j ;

}

int main()
{
	hello value = 0;
	hello obj(50);

	//value = obj.add() ;

	value= obj.sun() ;

	cout<<value.j<<"\n";

	cout<<obj.i<<"\n";
return 0;

}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

class demo
{
public:

int i, j ;

static int k,l,m ;

demo()
{
i=10;
j=10;

}
static int add();

} ;

int demo::k=40 ;
int demo::l=20 ;
int demo::m=1000 ;

int demo :: add()
{

	k=l+m;

  return k ;	

} 

int main()
{

	//demo obj ;

	//cout<<obj.k<<"\n";

 cout<<demo::k<<"\n";

	cout<<demo::add()<<"\n";



return 0 ;

}
*/
//////////////////////////////////////////////////////////////////////////////////////////////


