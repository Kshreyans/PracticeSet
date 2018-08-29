#include<stdio.h>
#include<stdlib.h>

void FindMissingElement(int n, int k){
	int i,a1,a2,*a;
	
	a=(int *)malloc(sizeof(int)*n);
	
	for( i=0; i<n; i++ )
	scanf("%d",&a[i]);
	a1=a[0];
	
	for( i=1; i<n; i++ ){
		a2=a[i];
		
		if( abs(a2-a1) > 1 ){
			//printf("  (%d  %d)  ",a2-a1,k);
			if( a2-a1 > k ){
			  printf("%d\n",a1+k);
			  return ;		    
			}else
			 k=k-(a2-a1)+1;
		}
		
		  a1=a2;
	}
	
	printf("-1\n");
}


int main(){
	int t,n,k;
	
	scanf("%d",&t);
	
	while(t--){
		scanf("%d%d",&n,&k);
		FindMissingElement(n,k);
	}
	
	return 0;
}
