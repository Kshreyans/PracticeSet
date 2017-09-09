#include<stdio.h>


int howManyGames(int p, int d, int m, int s) {
   
   int c=0;
   
    while(s>=p){
      s=s-p;
      c++;
       printf("i-%d  cost:-%d\n",c,p); 
      
      if( (p-d)>m )
        p=p-d; 
      else
        p=m;
        
      }
  return c;   
}

int main() {
    int p; 
    int d; 
    int m; 
    int s; 
    scanf("%i %i %i %i", &p, &d, &m, &s);
    int answer = howManyGames(p, d, m, s);
    printf("%d\n", answer);
    return 0;
}

