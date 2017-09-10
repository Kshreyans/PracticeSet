#include<stdio.h>
#include<string.h>
void swap(int a,int b,char word[]){

        char temp;
        temp=word[a];
        word[a]=word[b];
        word[b]=temp;
}


void Convert_word(){

    char w[100];
    scanf("%s",w);    

    int len=strlen(w);
    int i,j;
        i=j=len-1;
    if(len>1)
    { 
        while(strcmp(&w[i-1],&w[i])>0)
         i--;
         i--;
         
         if(i>=0)
         {      while(strcmp(&w[i],&w[j])>0)
                    j--;
              //      printf("%d\ni=%d    J=%d\n",strcmp(&w[j],&w[i]),i,j);
                  swap(j,i,w);  
            //      printf("====%s\n",w);
                  j=len-1;
                  i++;
                  while(i<j)
                  { swap(i,j,w);
                        i++;
                        j--;
                  }
                printf("%s\n",w);return;
         }
         
    }
printf("no answer\n");
}




int main(){
        
        int t;
        scanf("%d",&t);
        
        for(int i=1; i<=t; i++ ){
        
            Convert_word();
        }

  return 0;
}
