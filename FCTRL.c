#include<stdio.h>


int main(){
	long n,t,a,sum;
	
	scanf("%ld",&t);
	
	while(t--){
		scanf("%ld",&a);
		n=5;
		sum=0;
		
		while(a/n){
		  sum=sum+a/n;
		  n=n*5;
		}
		
		printf("%ld\n",sum);
	}
	
	return 0;
}
