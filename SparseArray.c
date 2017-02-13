// https://www.hackerrank.com/challenges/sparse-arrays

// To Enter n strings & Check q queries( previous occurence of a current entered string). 

#include<stdio.h>

int main() {
    int n,                                                                      //no. of strings
        q,                                                                      //no.  of queries
        i;                                                                      // loop iterator
    scanf("%d",&n);
    char arr[n][20];                                                            // arr[n] -> n strings n each of 20 length
    
    for(i=0; i<n; i++)
        scanf("%s",arr[i]);                                                     // input of strings
    
    scanf("%d",&q);int occ[q];                                                  // queries wise storing no. of occurence in 'occ' array. 
    
    for(i=0; i<q; i++)
      {     char c[20];
            scanf("%s",c); occ[i]=0;
          
          for(int j=0; j<n; j++)                                                // check for previous occurence
            {                       int f=1; 
              for(int k=0; c[k]!='\0' || arr[j][k]!='\0'; k++)
                    {
                        if(c[k]!=arr[j][k])
                        {f=0; break;}
                    }
                    
                    if(f==1)
                     occ[i]++;   
            }  
      }
        
        for(i=0; i<q; i++)
            printf("%d\n",occ[i]);                                              // printing the no. occurence for each queries
    
    return 0;
}

