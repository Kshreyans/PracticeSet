//https://www.hackerrank.com/challenges/circular-array-rotation

#include<stdio.h>
#include<stdlib.h>

 int main(){
    int n; 
    int k; 
    int q; 
    int i;
    scanf("%d %d %d",&n,&k,&q);
    k=k%n;
    int *a =(int *)malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    for(int a0 = 0; a0 < q; a0++){
        int m; 
        scanf("%d",&m);
        if(m-k < 0)
         i=m-k+n;
        else
         i= m-k; 
        printf("%d\n",a[i]);
    }
    return 0;
}

