#include<stdio.h>

int main(){
	int  t,g,i,q,cal;
	long n;
	scanf("%d",&t);
	
	while(t--){
		scanf("%d",&g);
		
		while(g--){
		scanf("%d%ld%d",&i,&n,&q);
			if(n%2==0)
			  printf("%ld\n",n/2);
			else
			if(i==1){
				if(q==1)
				printf("%ld\n",n/2);
				else
				printf("%ld\n",n/2 + 1);
			}else{
				if(q==2)
				printf("%ld\n",n/2);
				else
				printf("%ld\n",n/2 + 1);
			}
		}
	}
	return 0;
}
