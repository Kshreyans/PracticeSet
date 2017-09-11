#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<string.h>
void main()
{
	int pid;
	int p[2];
	int p2[2];
	char wr[50];
	char rd[50];
	pipe(p);
	pipe(p2);
	pid=fork();
	//printf("%d",pid);
	if(pid!=0)
	{
		close(p[0]);
		close(p2[1]);
	    while(1)		
        	{	printf("Enter a message:");
		        fgets(wr,50,stdin);
		        printf("Sending to child....\n");
		        write(p[1],&wr,strlen(wr));
		        if(wr[0]=='q')
		        break;
                     
                       read(p2[0],&rd,40);
	          if(rd[0]!='\0')
	          {	if(rd[0]=='q')
	        	 break;
		       printf("\nReceived from Pipe child...%s",rd);
		  }                      
		
                }
	}
	else
	{
		
        		close(p[1]);
	                close(p2[0]);
	    while(1)	
	    {  	read(p[0],&rd,40);
		if(rd[0]=='q')
		 break;
		printf("\nReceived from Parent...%s",rd);
	     
	         printf("Enter a message:");
		        fgets(wr,50,stdin);
		if(wr[0]!='\0')
		   {     printf("Sending to parent....\n");
		        write(p2[1],&wr,strlen(wr));
		        if(wr[0]=='q')
		        break;
                   } 	
        
        
           }
	}
}
		
	
