//https://www.hackerrank.com/challenges/save-the-prisoner

#include<stdio.h>

int saveThePrisoner(int n, int m, int s){
   int i=s;
     s=(m+s-1)%n;
     if(s==0 && (m+i-1)/n >0)
      s=n;
   return s;
}

int main() {
    int t; 
    scanf("%d", &t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int m; 
        int s; 
        scanf("%d %d %d", &n, &m, &s);
        int result = saveThePrisoner(n, m, s);
        printf("%d\n", result);
    }
    return 0;
}

