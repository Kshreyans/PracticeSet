//https://www.hackerrank.com/challenges/sherlock-and-squares/problem

#include<stdio.h>
#include<math.h>
 
 
 int SquareInt(double Ra,double Rb,int b){

   if(Ra*Ra > b)
     return 0;

   if(Rb*Rb==b)   
     Rb++;
     
     return Rb-Ra;
}
 
 int main(){
     int a,b,t;
     double Ra,Rb;
 
  scanf("%d",&t);
  
  for(int i=1; i<=t; i++){
     scanf("%d%d",&a,&b);
     Ra=sqrt(a);
     Ra=ceil(Ra);
     Rb=sqrt(b);
     Rb=ceil(Rb);
  
     printf("%d\n",SquareInt(Ra,Rb,b));
   }
 return 0;
}
