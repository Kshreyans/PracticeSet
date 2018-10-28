#include<stdio.h>
#include<stdlib.h>


void merge();

void sort(int l,int h,long *a){
	int mid;
	
	if(l<h){
	mid=(l+h)/2;
	sort(l,mid,a);
	sort(mid+1,h,a);
	merge(l,mid,h,a);
	}

}

void merge(int l,int mid,int h,long *a){
	int x=0,i,j;
	long *temp=NULL;
	
	temp=(long *)malloc(sizeof(long)*(h-l+1));
	i=l;
	j=mid+1;
	
	while(i<=mid && j<=h){
	
		if(a[i]<a[j])
		temp[x]=a[i++];
		else
		temp[x]=a[j++];
		
		x++;
	}
	
	while(i<=mid)
	temp[x++]=a[i++];
	
	while(j<=h)
	temp[x++]=a[j++];
	
	for(i=0; i<x; i++)
	a[i+l]=temp[i];
	
}

int main(){
	int t,n,i;
	long *a=NULL,min;
	
	scanf("%d",&t);
	
	while(t--){
		
		scanf("%d",&n);
		a=(long *)malloc(sizeof(long)*n);
		
		for(i=0; i<n; i++)
		scanf("%ld",&a[i]);
	//printf("input done\n");
		sort(0,n-1,a);
	//	printf("sort  done\n");
	
		min=a[1]-a[0];
		for(i=1; i<n-1; i++)
		if(a[i+1]-a[i]<min)
		min=a[i+1]-a[i];
		
		
		printf("%ld\n",min);
	}	
	
	return 0;
}
