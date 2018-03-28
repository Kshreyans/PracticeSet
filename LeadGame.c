//https://www.codechef.com/problems/TLG
#include<stdio.h>
#include<stdlib.h>

int main(){

        int n,s=0;
        scanf("%d",&n);
        
        int *a,b,max=-21,w=0;
        a=(int *)malloc(sizeof(int)*n);        
        
        for(int i=0; i<n; i++ )
        { scanf("%d  %d",&a[i],&b);
                a[i]=a[i]-b;
                s=s+a[i];
                if( abs(s)> max ){
                    max=abs(s);
                        
                        if( s > 0 )
                          w=1; 
                        else
                          w=2;
                }
        }
        
        printf("%d %d",w,max);
        return 0;
}

/*
#include <stdio.h>
 
    int k;
    int modulus1(int a)
    {
        if(a>0)
           k=a;
        else
           k=-a;
           return k;
    }
 
        int main()
    {
      int i,rounds,j,q,l,s;
            scanf("%d",&rounds);
      int playerone[rounds];//stores scores of player one in each round
      int playertwo[rounds];//stores scores of player two in each round
      int lead[rounds];//stores lead of player one over player 2
      int moduluslead[rounds];//stores modulus of lead
       s=0;
      for(i=0;i<rounds;i++)
      {
               scanf("%d",&playerone[i]);
         scanf("%d",&playertwo[i]);
          s=s+playerone[i]-playertwo[i];printf("s%d   %d\n",i,s);
          lead[i]=s;
          moduluslead[i]=modulus1(lead[i]);
      }
      
      j=moduluslead[0];
      q=0;
      for(i = 1;i<rounds; i++)//loop to find modulus of maximum lead
     {
         if(moduluslead[i]>j)
         {
             j=moduluslead[i];
             q=i;
         }
     }
     l=2;
     if (lead[q]>0)
              l=1;
              printf("%d %d",l,moduluslead[q]);
 
        for(i=0; i<rounds ; i++ )
        printf(" %d   %d  \n",i,lead[i]);
 
    } 
 */   
