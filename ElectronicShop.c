//https://www.hackerrank.com/challenges/electronics-shop

#include<stdio.h>
#include<stdlib.h>

 void sort(int *a,int n)
{ int i,j,temp;
        
        for(i=0; i<n; i++)
        {       
                for(j=0; j<n-1-i; j++)
                { if(a[j]<a[j+1])
                   { temp=a[j];
                     a[j]=a[j+1];
                     a[j+1]=temp;
                   }
                }
        }
} 
 

int getMoneySpent(int* keyboards, int* drives, int s,int n,int m){
    
    int i,j,a,max=0;
    
    for(i=0; i<n; i++)
    {  a=0;
       if(keyboards[i]<s)
        for(j=0; j<m; j++)
        {  a=keyboards[i]+drives[j];
           
            if(a > max && a <= s)
              max=a;  
        }
        
        if(max==s)
          break;
    }
    
    return max;
}

int main() {
    int s; 
    int n; 
    int m;
     int moneySpent=-1; 
    scanf("%d %d %d", &s, &n, &m);
    int *keyboards = malloc(sizeof(int) * n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       scanf("%d",&keyboards[keyboards_i]);
    }
    int *drives = malloc(sizeof(int) * m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       scanf("%d",&drives[drives_i]);
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    sort(keyboards,n);
    sort(drives,m);
    
    if( (keyboards[n-1]+drives[m-1]) > s )
      moneySpent=-1;
    else
      moneySpent=getMoneySpent(keyboards, drives, s,n,m);
    
    printf("%d\n", moneySpent);
    return 0;
}

