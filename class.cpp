#include<iostream>

using namespace std;
/*
//#pragma pack(1)
class demo
{
char k ;
	//int i;
 char ch ;
 

};

int main()
{
	demo obj ;

 cout<<sizeof(obj)<<endl;
return 0 ;


}
*/
////////////////////////////////////////////////////////
/*

class demo
{
int x ;
public:
int i;
private:
int j ;

protected:
 int k;

};

int main()
{
	demo obj ;

 cout<<sizeof(obj)<<endl;
cout<<obj.x<<endl;
return 0 ;


}
*/
///////////////////////////////////////////////////////////////////////
/*
class demo
{
public:
void fun()
{
cout<<"inside fun"<<endl;
}

};

int main()
{
demo obj ;
demo *p = &obj;
obj.fun();
p->fun();
(*p).fun();
(&obj)->fun();


return 0 ;


}*/
//////////////////////////////////
/*
 class demo
{
public:
int i,j ;
void fun()
{
cout<<"inside fun"<<endl;
}

}obj={10,20};

int main()
{
obj.fun();

cout<<obj.i<<endl;
cout<<obj.j<<endl;
return 0 ;



}
*/
///////////////////////////////////////////////////////
/*
typedef class demo
{
public:
int i,j,k ;
void fun()
{
cout<<"inside fun"<<endl;
}

}type,*ptype ;

int main()
{
cout<<sizeof(ptype)<<endl;


}
*/
//////////////////////////////////////////////////////

int no = 10 ;

void fun()
{
cout<<"inside global"<<endl;

}

class demo
{
	public:

	int no ;

demo()
{
	no = ::no ;

++::no;
}

void fun()
{
	cout<<"inside demo fun"<<endl;
	::fun();

}

};




int main()
{

demo obj ;

cout<<obj.no<<endl;
cout<<no<<endl;
obj.fun();

return 0 ;
}
