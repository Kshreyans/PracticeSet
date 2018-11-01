#include<stdio.h>
#include<stdlib.h>


void BubbleSort(int *a,int n){
	int i,j,temp;
	
	for(i=0; i<=n; i++)
		for(j=0; j<n-1-i; j++){
			if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
}


int main(){
	int test,n,m,*a=NULL,k,i;
	
	scanf("%d",&test);
	
	while(test--){
		scanf("%d%d",&n,&m);
		a=(int *)malloc(sizeof(int)*(n+1));
		a[0]=0;
		for(i=1; i<=n; i++)
		a[i]=i;
		
		for(i=0; i<m; i++){
		scanf("%d",&k);
		a[k]=0;
		}
	/*	for(i=0; i<=n;i++)
		printf("%d ",a[i]);
		printf("\n");
	*/	
		BubbleSort(a,n+1);
		
	/*	for(i=0; i<=n;i++)
		printf("%d ",a[i]);
		printf("\n");
	*/	
		i=0;
		while(a[i]==0)
		i++;
		
		k=i+1;
		
		for(; i<=n; i=i+2)
		printf("%d ",a[i]);
		printf("\n");
		
		for(; k<=n; k=k+2)
		printf("%d ",a[k]);
		printf("\n");
		
	}
	return 0;
}
