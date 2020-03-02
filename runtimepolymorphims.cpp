#include<iostream>
using namespace std;
/*
class base
{
public:

virtual void fun()
{
cout<<"base fun"<<endl;

}

};

class derived:public base
{

public:
void fun()
{
cout<<"derived fun"<<endl;

}

};

int main()
{

base bobj ;
derived dobj ;

base *bp = &dobj ;

(bp)->fun();

return 0 ;
}
*/
///////////////////////////////////////////////
/*
class base
{
public:

 void fun()
{
cout<<"base fun"<<endl;

}

};

class base1
{
public:

virtual void fun()
{
cout<<"base fun"<<endl;

}

};

class derived:public base1
{

};

int main()
{
cout<<"base::"<<sizeof(base)<<endl;//1
cout<<"base1::"<<sizeof(base1)<<endl;//8
cout<<"derived"<<sizeof(derived)<<endl;//8

return 0 ;
}*/
///////////////////////////////////////////////////
/*
class base
{
public:

int i,j ;

 void fun()
{
cout<<"base fun"<<endl;

}

};

class base1
{
public:

virtual void fun()
{
cout<<"base fun"<<endl;

}

};

class derived:public base1
{

};

int main()
{
 base bobj  ;//;

 //bobj->fun();

if((&bobj)==(base*)&bobj.i)
{
	cout<<"same address"<<endl;

}
else
{
	cout<<"different"<<endl;

}



return 0 ;
}
*/
////////////////////////////////////////////////////////////
/*
class base
{
public:

int i,j ;

 virtual void fun()
{
cout<<"base fun"<<endl;

}

};


class derived:public base
{
virtual void fun(int i)
{
cout<<"derived fun"<<endl;

}

};

int main()
{

 base *bp = new derived ;

	bp->fun(11);

return 0 ;
}
*/
///////////////////////////////////////////////////////////////////

/*

class base
{
public:

int i,j ;

virtual void sun()
{
}

  virtual void fun()
{
cout<<"base fun"<<endl;

}

};


class derived:public base
{

public:
static void fun()
{
cout<<"derived fun"<<endl;

}

};

int main()
{
	base *bp = new derived ;

	bp->fun();
 

return 0 ;
}
*/

////////////////////////////////////////////////////////


/*
class base
{
public:

int i,j ;

virtual void sun()
{
}

  virtual static void fun()
{
cout<<"base fun"<<endl;

}

};


class derived:public base
{
 void fun()
{
cout<<"derived fun"<<endl;

}

};

int main()
{
	base *bp = new derived ;

	bp->fun();
 

return 0 ;
}
*/

/////////////////////////////////////////////////////

/*

class base
{
public:

virtual base()
{

cout<<"base constructor"<<endl;
}
~base()
{

cout<<"base destructor"<<endl;
}

};


class derived:public base
{
 public :
derived()
{

cout<<"derived constructor"<<endl;
}

~derived()
{

cout<<"derived destructor"<<endl;
}

};

int main()
{
	base *bp = new derived ;

	delete bp;
 

return 0 ;
}
*/
/////////////////////////////////////////

/*
class base
{
public:

 base()
{

cout<<"base constructor"<<endl;
}
 virtual ~base()
{

cout<<"base destructor"<<endl;
}

};


class derived:public base
{
 public :
derived()
{

cout<<"derived constructor"<<endl;
}

~derived()
{

cout<<"derived destructor"<<endl;
}

};

int main()
{
	derived dobj ;
	int*ptr =(int*)&dobj ;

 

return 0 ;
}
*/
//////////////////////////////////////////////////////////////

/*

class base
{
public:

 int x,y ;

virtual void fun()
{
	cout<<"base fun"<<endl;

}
virtual void gun()
{

cout<<"base gun"<<endl;
}

virtual void sun()
{

cout<<"base sun"<<endl;
}

};


class derived:public base
{
 public :
int a,b ;

 void fun()
{
	cout<<"derived fun"<<endl;

}
 void gun()
{

cout<<"derived gun"<<endl;
}

};

int main()
{
	derived dobj ;
	base bobj;
	int*ptr =(int*)&bobj ;
	int *vp = (int*)(*ptr);//
	void (*fp1)() ;

	fp1 = (void(*)())(*vp);//derived fun
	fp1();

fp1 = (void(*)())(*(vp+2));
fp1();//

 

return 0 ;
}
*/
////////////////////////////////////////////////////

/*
class base
{
public:

 int x,y ;

virtual void fun()
{
	cout<<"base fun"<<endl;

}
virtual void gun()
{

cout<<"base gun"<<endl;
}

virtual void sun()
{

cout<<"base sun"<<endl;
}

};



int main()
{
	
base obj1, obj2;

int *p =(int*)&obj1 ;
int *q = (int*)&obj2 ;

if((*p)==(*q))
{
cout<<"Vtable is shared"<<endl;

}
else
{
	cout<<"NOT"<<endl;
}

 

return 0 ;
}
*/
//////////////////////////////////////////////////

/*
class base
{
public:

base()
{
	fun();
}

 int x,y ;

virtual void fun()
{
	cout<<"base fun"<<endl;

}
};

class derived:public base
{

public:
void fun()
{
cout<<"derived fun"<<endl;
}

};



int main()
{
	
derived dobj ;

 

return 0 ;
}
*/
//////////////////////////////////////////////////////////////
/*
class base
{
public:

base()
{
	cout<<"base constructor"<<endl;
}
 ~base() =0 ;

};

base::~base()
{
cout<<"des"<<endl;
}

int main()
{
	base obj ;
	
return 0 ;
}*/
//////////////////////////////////////////

class base
{
public :
base()
{
cout<<"base constructor"<<endl;
}

virtual ~base() = 0;

};

base::~base()
{
cout<<"base destructor"<<endl;

}


class derived:public base
{
public:

derived()
{
cout<<"derived con"<<endl;
}

~derived()
{
cout<<"derived des"<<endl;
}

};

int main()
{

base *bp ;
derived obj;

return 0;
}
