//https://www.hackerrank.com/contests/w34/challenges/once-in-a-tram/problem

#include<stdio.h>


void ExtractDigits(int a[],int n,int *sum1,int *sum2){

        int i,s1=0,s2=0;
     
     for(i=5; i>=0; i--){
        a[i]=n%10;
        
       if(i>2) 
        s2=s2+a[i];
       else
        s1=s1+a[i]; 
        n=n/10;
     }
   *sum1=s1; 
   *sum2=s2;    
}

void NextLuckyNo(int s1,int s2,int a[]){
        
     int i,j; 
        
        i=4;
        do{
                if(a[i]==9)
                 i--;
                 a[i]++; a[i+1]=0;
                s2=a[3]+a[4]+a[5];
                s1=a[0]+a[1]+a[2];
                i--;
           }while(s1<s2 && i>-1);
             
             j=5; 
            while(s1!=s2){
               
               if(s1-s2>=9){
                a[j]=9;
                s2=s2+9;
               }
               else 
               { a[j]=s1-s2; break;}
               j--;
            }
        }



int main(){

        int n,a[6]={0},sum1,sum2;
        
       scanf("%d",&n);
       ExtractDigits(a,n,&sum1,&sum2);
     
    
    if(sum1>sum2)
      printf("%d",n+sum1-sum2);
     else         
    { NextLuckyNo(sum1,sum2,a);
      printf("%d%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4],a[5]);
    }
        
 return 0;
}





