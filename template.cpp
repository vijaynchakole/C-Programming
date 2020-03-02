#include<iostream>

using namespace std;
/*
template<class T>

T add(T no1 , T no2)
{
return no1+no2;

}

int main()
{

int num = add((float)a,b);

cout<<num<<endl;

return 0 ;
}
*/
///////////////////////////////////////////////////
/*

template<class T>

void add(T i)
{
T num ;

cout<<i<<endl;


}

int main()
{

add(1);//no matching function for it

return 0 ;
}
*/
/////////////////////////////////////////////////////
/*
template<class T1,class T2>

void display(T1 num1,T2 num2)
{

T2 no ;
	cout<<no<<endl;
	cout<<num1<<endl;
	cout<<num2<<endl;

}

int main()
{

display('A',20);
cout<<"after"<<endl;
display(20,'A');

return 0 ;
}
*/
//////////////////////////////////////////////////////

/*


template <class T>

class base
{
	public:

	T i,j;

};

template <class T1>
class derived:public base
{
public:

T1 a,b,c;

};
int main()
{

base<int>bobj;

cout<<sizeof(bobj)<<endl;

derived<int>dobj;
cout<<sizeof(dobj)<<endl;
return 0;
}
*/
//////////////////////////////////////////////////

template <class T>

class derived
{
public:

void fun(T no)
{

cout<<"template fun"<<endl;
}

void fun1(float no)
{

cout<<"float fun"<<endl;
}

};

int main()
{
derived<float>obj ;

obj.fun(30.23);


return 0 ;
}
