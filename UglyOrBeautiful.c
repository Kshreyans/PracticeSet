//https://www.hackerrank.com/contests/codeagon/challenges/ugly-or-beautiful

#include<stdio.h>
#include<stdlib.h>



void uglyOrBeautiful(int n, int* a) {
    
    int j,i,f=0;
    
    
    for(i=0; i<(n-1); i++){
        for(j=0; j<(n-1); j++)
        {
                if(a[j]>a[j+1])        
                 f=1;
                if(i!=j && a[j]==a[i])
                 {f=0; break;}
        }   
 
   }
   
   
        if(f==0)
         printf("Ugly\n");
        else
         printf("Beautiful\n");

}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        int n,k=0; 
        scanf("%i", &n);
        int *a =(int *) malloc(sizeof(int) * n);
        for (int a_i = 0; a_i < n; a_i++) {
           scanf("%i",&a[a_i]);
            if(a[a_i]>n)
              k=1;
        }
            
        int result_size;
        if(k==1)
        printf("Ugly\n");
        else
        uglyOrBeautiful(n,a);
        
    }
    return 0;
}

