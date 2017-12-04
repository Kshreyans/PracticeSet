#include<stdio.h>
#include<stdlib.h>


int main(){
        int t,i,j,n,*a,f;
          a=NULL;
        scanf("%d",&t);
        
        for(i=0; i<t; i++){
                f=0;
                scanf("%d",&n);
                a=(int *)malloc(sizeof(int)*n );
                
                for(j=0; j<n; j++){
                        scanf("%d",&a[j]);
                }
                
                for(j=1; j<(n-2); j++){
                       if(a[j-1] < a[j] && a[j]>a[j+1] && a[j-1]<a[j+1]) 
                         if(a[j]>a[j+1] && a[j+1]>a[j+2])
                            { printf("kk");    f=1;}
                }
                
                if(f==1 ||( a[n-4]<a[n-1] && a[n-3]< a[n-2] && a[n-2]> a[n-1] && a[n-1] > a[n-3]) )
                printf("NO\n");
                else
                printf("YES\n");
        }
        return 0;
}
