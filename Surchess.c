#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void input(char **a,int n,int m){
	int i,j;
	getchar();
	for(i=n-1; i>=0; i--){
		for(j=0; j<m; j++)
		   scanf("%c",&a[i][j]);
	
		getchar();
	}
}

int main(){
	int n,m,i,row,col,j;
	long q,ci;
	char flag;
	char **a;
	scanf("%d%d",&n,&m);
	row=n-1;
	col=m-1;
	
	a=(char **)malloc(sizeof(char *)*n);
	for(i=0; i<n; i++)
	a[i]=(char *)malloc(sizeof(char)*m);
	
	input(a,n,m);
	/*
	printf("\n\n");
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
		   printf("%c",a[i][j]);
		}
		printf("\n");	
	}
	*/
	scanf("%ld",&q);
	
	if(a[0][0]=='1')
	flag='0';
	else
	flag='1';
	
	while(q--){
		scanf("%ld",&ci);
		//printf("( ci= %ld )",ci);
		
		if(a[0][0]=='1')
		flag='0';
		else
		flag='1';
		row=n-1;
		col=m-1;
		
		for(i=0; i<=row; i++){
			for(j=0; j<=col; j++){
			//	printf("(%d,%d)ci=%ld  ",i,j,ci);

				if(a[i][j]!=flag){
					
					if(flag=='1')
					flag='0';
					else
					flag='1';
				
				}else
				  if(ci>0)
				  { ci--;
				    	if(flag=='1')
					flag='0';
					else
					flag='1';
				 }
				  else
				  if(j<row)
				   {row=i-1;break;}
				   else{
				   col=j-1;
				   row=j-1;
				   }
				  
				  
			}
			
			if(a[i][0]=='0')
			flag='0';
			else
			flag='1';
			
			//printf("flag=%c\n",flag);
		}
		if(row<col)
		printf("%d\n",row+1);
		else
		printf("%d\n",col+1);
		
	}
	
	return 0;
}
