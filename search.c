#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<dirent.h>
#include<sys/types.h>


int main()
{

	DIR* FD ;

	struct dirent* in_file ;

	int i = 0;


printf("%ld\n",FD = opendir("/home/vijay/codes"));



	while((in_file = readdir(FD)))
	{

			if(!strcmp(in_file->d_name,"."))
					continue ;
			if(!strcmp(in_file->d_name,".."))
					continue ;

		if(strcmp(in_file->d_name,""))
		{
			
			printf("%d file found successfully\n",i++);
				break ;

		}
		else
				{

						printf("FILE NOT FOUND\n");

				}


	}
















return 0 ;

}
