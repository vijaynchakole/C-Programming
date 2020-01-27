#include<stdio.h>
#include<malloc.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

bool strCMP(const char*, char*);

int main()
{

  int fd=0,rd=0,i=0;

  char ch[1];

  char buffer[512] ;

 fd=open("fc.txt",O_RDWR);

  if(fd==-1)
  {

    printf("unable to opened file\n");
  }
  else
      {
          printf("file opened successfully\n");
        
      }


 while((rd=read(fd,ch,1))!=0)
   {
      
       if(ch[0]!='\n')
        {
           buffer[i]=ch[0];
          i++;
      
        }

         else
             {
                  buffer[i]='\n';  
                  if(strCMP("access",buffer)==true)
                    {
                           
                       printf("found\n");

                      }
                        else
                           {
                                     printf("try hard\n");   
    
                             }
                     
                  memset(buffer,0,512);
      
             }

   }



return 0;

}

bool strCMP(const char* src, char* des)
{

bool flag = false;

 const char *temp =src;


   while(*des!='\n')
     {

         if(*src==*des && *des!=' ')
            {
               
               if(*src=='\0')
                  {
                     flag = true;

                     break;
                   }  

               src++;

                        

            }

              if(*des==' ')
                  {
                     src=temp;
                   }


      des++;


    }


return flag ;



}
