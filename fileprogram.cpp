#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>
#include<unistd.h>
using namespace std;
#include<iostream>

#define READ 1 
#define WRITE 2 
#define START 0
#define CURRENT 1
#define END 2


class filewrap
{
   public :
   
   int fd ;
  char fname[50] ;
 int fmode ;


   filewrap(const char*,int);
   filewrap(filewrap&);
   //~filewrap();

   void fileread();
   void fileread(int);
   void fileread(int from, int size);
   void filewrite(const char*);
   void filewrite(const char* buffer,int size);
   long int getoffset();
   void setoffset(int offset, int from);
};

filewrap::filewrap(const char*name,int mode=READ+WRITE)
{

  strcpy(fname,name);
  fmode = mode ;


if(fmode==READ)
{
  
  fd=open(fname,O_RDONLY);

 if(fd==-1)
 {

   printf("unable to create file\n");

 }
  else
      {
            printf("file opened with reading activity successfully\n");


      }


}

if(fmode==WRITE)
{
  
  fd=open(fname,O_RDONLY);

 if(fd==-1)
 {

   printf("unable to create file\n");

 }
  else
      {
            printf("file opened with writting activity successfully\n");


      }


}

if(fmode==READ+WRITE)
{
  
  fd=open(fname,O_RDWR);

 if(fd==-1)
 {

   printf("unable to create file\n");

 }
  else
      {
            printf("file opened with reading and witting activity successfully\n");


      }


}

}

///////////////////////////////////////////////////////////////

filewrap :: filewrap(filewrap &ref)
{
   char buffer[512] ;
   int rd = 0, wd = 0, offset=0 ;  


 sprintf(fname,"%s_new",ref.fname);

 fmode = ref.fmode ;
  
 fd=creat(fname,0777);
  
  if(fd==-1)
  {
    cout<<"unable to create new file"<<endl;

  }

offset = lseek(ref.fd,0,1);


while((rd=read(ref.fd,buffer,sizeof(buffer)))!=0)
  {

    wd = write(fd,buffer,rd);

   if(wd==-1)

  {

    cout<<"unable to write data in new file"<<endl;

  }
  
    memset(buffer,0,sizeof(buffer));
   
  }

lseek(ref.fd,offset,0);


}

//////////////////////////////////////////////////////////////

void filewrap :: fileread()
{

 char buffer[512] ;

 int rd = 0;

int offset = lseek(fd,0,1);

 while((rd = read(fd,buffer,sizeof(buffer)))!=0)
  {
     for(int i=0 ; i<rd ; i++)
     {
         printf("%c",buffer[i]);
    
     }
   
  }

lseek(fd,offset,0);

 

}
///////////////////////////////////////////////////////////

void filewrap :: fileread(int size)
{
   int rd = 0 ;
    char *buffer = NULL ;

    buffer=(char*)malloc((size+1)*sizeof(char)); 

 int offset = lseek(fd,0,1);
   
    rd=read(fd,buffer,size);

   if(rd==-1)
    {
      printf("unable to read file ");
     
    }
else
{
	cout<<"file read successfully"<<endl<<size<<endl;

}

cout<<buffer<<endl;

lseek(fd,offset,0);

}
////////////////////////////////////////////////////////////////////////


void filewrap :: fileread(int size, int from)
{
    char *buffer = NULL ;

   buffer=(char*)malloc(size+1);

    int rd=0 ;
int  offset=0;

offset=lseek(fd,0,1);

lseek(fd,from,1);

rd=read(fd,buffer,size);

if(rd==-1)
{
  cout<<"unable to read file"<<endl;

}
else
{
  cout<<"file read successfully"<<endl;

}

  cout<<buffer<<endl;

lseek(fd,offset,0);


}
/////////////////////////////////////////////////////////////////////////

void filewrap :: filewrite(const char* data)
{

  int wd=0,offset=0;

offset=lseek(fd,0,1);
  
lseek(fd,0,2);
  wd = write(fd,data,strlen(data));

if(wd==-1)
{
  cout<<"unable to write data into file"<<endl;

}
else
{
 cout<<"write data successfully into file"<<endl;

}

lseek(fd,offset,0);


}
////////////////////////////////////////////////////////////////////

void filewrap::filewrite(const char*bufferfulled,int size)
{
  int wd = 0, offset=0;
 

offset = lseek(fd,0,1);

lseek(fd,0,2);

wd=write(fd,bufferfulled,size);

if(wd==-1)
{

 cout<<"unable to write data"<<endl;

}
else
{
  cout<<"data written successfully"<<endl;


}

  lseek(fd,offset,0);




}

////////////////////////////////////////

long int filewrap::getoffset()
{

  return(lseek(fd,0,1));


}
//////////////////////////////////////////////

void filewrap::setoffset(int size,int from)
{

 lseek(fd,size,from);

cout<<"offset set successfully"<<endl;


}

int main()
{

   char arr[]="love.txt";
int size = 0 , from = 0,offset=0;
int mode = 3;
size=3;
from=6;


    filewrap obj(arr,mode);
    filewrap obj3(obj);
    // filewrap obj2(arr,mode);
 // obj.fileread();
  // obj.fileread(size);
  //obj.fileread(size,from);
  // obj.filewrite("Jay ShreeRam");
     //obj.filewrite("hare krishna hari bol",14);
   // offset=obj.getoffset();

 //cout<<offset<<endl;

//obj.setoffset(15,1);

return 0 ;

}
