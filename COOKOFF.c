//

#include<stdio.h>
#include<string.h>

int main(){
        int t,n,i;
        scanf("%d",&t);
        char a[100];int ok[5]={0},sum,j;
        
        for(i=0 ; i<t; i++){
                scanf("%d",&n);
                ok[0]=ok[1]=ok[2]=ok[3]=ok[4]=0;sum=0;
                
                for(j=0; j<n; j++){
                    scanf("%s",a);             
                   
                    if(strcmp(a,"cakewalk")==0)ok[0]=1;
                    else
                    if(strcmp(a,"simple")==0)ok[1]=1;
                    else
                    if(strcmp(a,"easy")==0)ok[2]=1;
                    else
                    if(strcmp(a,"easy-medium")==0 || strcmp(a,"medium")==0)ok[3]=1;
                    else
                    if(strcmp(a,"medium-hard")==0 ||  strcmp(a, "hard")==0)ok[4]=1;
                    
                 }
                 sum=ok[0]+ok[1]+ok[2]+ok[3]+ok[4];
                    
                bzero(a,100);
                if(sum!=5)
                  printf("No\n");
                else
                if(sum==5)
                     printf("Yes\n");
                    
        }
 
 return 0;
        
}
