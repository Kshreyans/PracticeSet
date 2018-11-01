#include<stdio.h>
#include<stdlib.h>

void BubbleSort(long *a,int n){
	int i,j;
	long temp;
	
	for(i=0; i<=n; i++)
		for(j=0; j<=n-1-i; j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
}

int main(){
	int test,k,n,i;
	long *a=NULL,klong;
	
	scanf("%d",&test);
	
	while(test--){
		scanf("%d",&n);
		
		a=(long *)malloc(sizeof(long)*(n+1) );
		a[0]=0;
		for(i=1 ; i<=n; i++)
		scanf("%ld",&a[i]);
		
		scanf("%d",&k);
		klong=a[k];
		
		BubbleSort(a,n);
		
	/*	for(i=0; i<=n; i++)
		printf("%ld ",a[i]);
		printf("\n");
	*/	
		for(i=1; i<=n; i++)
			if(a[i]==klong){
			  printf("%d\n",i);
		  	  break;
			}
		
		
	}	
	
	return 0;
}
