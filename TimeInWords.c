//https://www.hackerrank.com/challenges/the-time-in-words/problem

#include<stdio.h>
#include<string.h>

int main(){
     int h,m,a=0;
     char word[100],hour[20],min[60];
     bzero(hour,20);
     bzero(word,100);
     bzero(min,60);
     scanf("%d%d",&h,&m);
     
     if(m>30)
      h++;
      
     switch(h){
        case 1:strcpy(hour,"one");break;
        case 2:strcpy(hour,"two");break;
        case 3:strcpy(hour,"three");break;
        case 4:strcpy(hour,"four");break;
        case 5:strcpy(hour,"five");break;
        case 6:strcpy(hour,"six");break;
        case 7:strcpy(hour,"seven");break;
        case 8:strcpy(hour,"eight");break;
        case 9:strcpy(hour,"nine");break;
        case 10:strcpy(hour,"ten");break;
        case 11:strcpy(hour,"eleven");break;
        case 12:strcpy(hour,"twelve");break;
     }
    
     if(m==0)
     { printf("%s o' clock",hour); return 0;}
     
     a=m;  
     if(m>30)
      a=60-m;  
         
      switch(a) {
        case 1:strcpy(min,"one minutes");break;
        case 2:strcpy(min,"two minutes");break;
        case 3:strcpy(min,"three minutes");break;
        case 4:strcpy(min,"four minutes");break;
        case 5:strcpy(min,"five minutes");break;
        case 6:strcpy(min,"six minutes");break;
        case 7:strcpy(min,"seven minutes");break;
        case 8:strcpy(min,"eight minutes");break;
        case 9:strcpy(min,"nine minutes");break;
        case 10:strcpy(min,"ten minutes");break;
        case 11:strcpy(min,"eleven minutes");break;
        case 12:strcpy(min,"twelve minutes");break;
        case 13:strcpy(min,"thirteen minutes");break;      
        case 14:strcpy(min,"fourteen minutes");break;
        case 15:strcpy(min,"quarter");break;
        case 16:strcpy(min,"sixteen minutes");break;
        case 17:strcpy(min,"seventeen minutes");break;
        case 18:strcpy(min,"eighteen minutes");break;
        case 19:strcpy(min,"nineteen minutes");break;
        case 20:strcpy(min,"twenty minutes");break;
        case 21:strcpy(min,"twenty one minutes");break;
        case 22:strcpy(min,"twenty two minutes");break;
        case 23:strcpy(min,"twenty three minutes");break;
        case 24:strcpy(min,"twenty four minutes");break;
        case 25:strcpy(min,"twenty five minutes");break;
        case 26:strcpy(min,"twenty six minutes");break;
        case 27:strcpy(min,"twenty seven minutes");break;
        case 28:strcpy(min,"twenty eight minutes");break;
        case 29:strcpy(min,"twenty nine minutes");break;
        case 30:strcpy(min,"half");break;
     }   
     
     if(m<=30)
      strcat(min," past");
     else
      strcat(min," to");
         
      strcat(word,min);strcat(word," ");
      strcat(word,hour);
      printf("%s",word);   
    return 0;
}
