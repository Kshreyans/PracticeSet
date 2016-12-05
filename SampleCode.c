#include<stdio.h>
#define MAXLINE 100 /* maximum input line size */

int getline(char line[],int maxline);
void copy(char to[],char from[]);

// to read a line and return its length

 int getline(char line[])
{ 
  char c;                                                                       // variable for character input 
  int length;                                                                   //  length of the line
  c=getchar();
  
  for(length=0; length < MAXLINE && c!='\0' && c!='\n';length++)                // a line's end is denoted by eof or newline char or 
  { line[lenght]=c;                                                             // if limit is over
    c=getchar();
  }
  
  if(c=='\n')
  line[lenght++]=c;
  
  line[length]='\0';
  return length;
} 


 void copy(char to[],char from[])
{ int i=0;
  
  while(from[i]!='\0')
  to[i]=from[i];
} 




/* Print longest Line */

 int main()
{ int  len,                                // current line's  length
       max,                                // maximum lenght
  char line[MAXLINE],                      // line Entered
       longest[MAXLINE];                   // Longest line
 
  max=0;
 
 while(len=getline(line)>0)
 { if(len>max)
   { max=len;
     copy(longest,line);
   }
 }    

  if(max>0)                           //if there exist a line
  printf("%s",longest);
}

