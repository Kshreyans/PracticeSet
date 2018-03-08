#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

         FILE *f=NULL;
        char s[1000],c[100]={'\0'};
        int i=0,j,k=0;
        
         char keyword[32][10]={"auto","double","int","struct","break","else","long",
                	       "switch","case","enum","register","typedef","char",
                	       "extern","return","union","const","float","short",
                	       "unsigned","continue","for","signed","void","default",
                	       "goto","sizeof","voltile","do","if","static","while"} ;
        
        f=fopen("Data","r");
        bzero(c,100);
        bzero(s,1000);
        printf("The indentifiers are :-   \n");
        while( fgets(s,1000,f)!=NULL ){
             i=0;   
             while(s[i]!='\0')   
            {    
                for( ; s[i]!=' ' && s[i]!='\n'; i++ ){
                
                        c[k++]=s[i];
                            
                     //  printf(";; %c\n",s[i]); 
                  }      
                   //  printf(">>>%sfds",c);
                     i++; //printf("s[i]=%c\n",s[i]);
                        
                for( j=0; j<32; j++ ){
                
                        if( strcmp(c,keyword[j])==0 )
                         {   printf("%s\n",c);
                                break;
                         }  
                }
                bzero(c,100);
                        k=0;
             }   
             bzero(s,1000);
        }
        
        return 0;
}
