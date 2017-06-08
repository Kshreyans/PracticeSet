//https://www.hackerrank.com/challenges/day-of-the-programmer

#include<stdio.h>
#include<stdlib.h>

 int countDays(int year,int ch,int *m){
   int f=0;
   int day=0,i;
   int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
        switch(ch)
        { case 1: if(year%4==0)
                   f=1;
                  break;
          
          case 2: f=0;
                  day=day-13;break;
          
          case 3: if(year%100==0)
                  { if(year%400==0)
                      f=1;
                  }
                  else
                  if(year%4==0)
                   f=1;break;
        }
        
     for(i=0; (256-day)>a[i] ;i++)
     { day=day+a[i];
         
       if(i==1 && f==1) 
        day=day+1;
        
      }     
      *m=i+1;
    return 256-day;         
 }
 
 
 char* solve(int year){
        
    int ch;
    
    if(year<=1917)
    ch=1;
    else
    if(year>1918)
    ch=3;
    else
    ch=2;
   int month; 
  int day=countDays(year,ch,&month);
  
  char *c=(char *)malloc(sizeof(char)*10);
  c[0]=(char)(48+day/10);
  c[1]=(char)(48+day%10);
  c[2]='.';
  c[3]=(char)(48+month/10);
  c[4]=(char)(48+month%10);
  c[5]='.';
  c[6]=(char)(48+year/1000);    year=year%1000;
  c[7]=(char)(48+year/100);     year=year%100;
  c[8]=(char)(48+year/10);
  c[9]=(char)(48+year%10);
  
       
   return c;    
}

int main() {
    int year; 
    scanf("%d", &year);
   
    char* result =solve(year);
    printf("%s\n", result);
    return 0;
}
