#include<stdio.h>
#include<stdlib.h>


 void display(int a1[],int n)
{ int i;
  for(i=0;i<n;i++)
  printf("%d    ",a1[i]);
  printf("\n");
  
} 


int* getRecord(int s_size, int* s, int *result_size)
{
  int i,c=0,d=0,size=2;
  int *a1,*a2;
  
  
  a1=(int *)malloc(sizeof(int)*s_size);
  a2=(int *)malloc(sizeof(int)*s_size);
  a1[0]=a2[0]=s[0];
  for(i=1; i<s_size; i++)
  {
        if(a1[i-1]<s[i])
        { a1[i]=s[i];
          c++;
        }
        else
        a1[i]=a1[i-1];
        
                             if(a2[i-1]>s[i])
                             { a2[i]=s[i];
                               d++;
                             }
                             else
                             a2[i]=a2[i-1];
  }
  
  *result_size=&size;
  int *cur=(int *)malloc(sizeof(int)*2);
  cur[0]=c;
  cur[1]=d;
  
  display(a1,s_size);  
  display(a2,s_size);
  return cur;
}



int main() {
    int n; 
    scanf("%d",&n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int result_size;
    int* result = getRecord(n, s, &result_size);
   
   printf("--------------");
    for(int i = 0; i < result_size; i++) {
        if (i) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    
    return 0;
}

