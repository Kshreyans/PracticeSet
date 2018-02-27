//


#include<stdio.h>
#include<stdlib.h>


void freq(int l,int r, char *s,int a[]){
    
    int i=l-1;
    
    for(    ; i<r; i++ ){
        a[s[i]-'a']++;    
    }
}


long long int fact(int n){
    
   long long int f=1; 
    for(int  i=1; i<=n; i++ )
        f=f*i;
        
       return f;
}


int answerQuery(int l, int r,char *s) {
        
        int i,c,d,q;long long int k;
        c=q=0;
        d=1;
        int a[26]={0};
        freq(l,r,s,a);
        
        for( i=0; i<26; i++ ){
            if( a[i]>=2 ){
                    
                if( a[i]/2 == 1 )
                    c++;
                else
                {
                    d=d*a[i]/2;
                    c=c+a[i]/2;
                } 
                
                a[i]=a[i]%2;
                
            }
              if( a[i] == 1 )
                   q++; 
        }
               
    if(q == 0 )
       q=1;
    
    k= ( fact(c)/d )*q;
    
    return k;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        int l; 
        int r; 
        scanf("%i %i", &l, &r);
        int result = answerQuery(l, r, s);
        printf("%d\n", result);
    }
    return 0;
}

