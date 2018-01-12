//https://www.hackerrank.com/challenges/separate-the-numbers/problem

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int ConvertToInt(int i, int j,char *s){
        
        int n=0,k;
        for( k=i; k<=j; k++ ){
        n=n*10+(s[k] - '0');
        }

        return n;
}

int raise(int k){

        int i,n=1;
        
        for(i=1; i<=k; i++ )
         n=n*10;
         
         return n;

}
void separateNumbers(char* s) {
   
        int len,p,n,i,k=1,f=0,h;
        len=strlen(s);
        
        p=ConvertToInt(0,0,s);
        
        if( p == 9 )
          k++;
          
      int  d=1;
      
        for( i=1 ; i<len; i=i+k ){
        
                n=ConvertToInt(i,i+k-1,s);        
                
                if( (n-p)!=1 ){
                    k++;
                    i=-k;
                    d=k-1;
                }
                
                h=raise(k);
                if( (n+1)% h == 0 && (n+1)/h == 1 )
                k++;
                
                p=n;
                
                if( s[i]== '0' || k > len/2 )
                 { f=1; break;
                 }
        }
      
                if( f==1 ){
                 printf("NO\n");
                }
                else
                { printf("YES %d\n",ConvertToInt(0,d,s));
                }
                
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
       separateNumbers(s);
      
     
    }
    return 0;
}

