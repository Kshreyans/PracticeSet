//https://www.hackerrank.com/challenges/two-pluses/problem

#include<stdio.h>

int check(int m,char a[][m],int nx,int ny,int px,int py,int i, int j){
        
         
        if(a[px][j]=='G' && a[i][py]=='G' && a[i][ny]=='G' && a[nx][j]=='G')
            { printf("%d, %d  %d, %d  %d, %d %d, %d",px,j,i,py,i,ny,nx,j); 
             printf("yea====1\n");  return 1;  }
         else
            {  printf("yea====0\n");  return 0;  }     
}

int main(){

        int n,m,i,j,k=0,v,max1,max2;
        max1=-8;max2=-4;
        
        scanf("%d%d",&n,&m);
        char a[n][m];
        
        for(i=0; i<n; i++)
        scanf("%s",a[i]);        
        
      
        int nx,ny,px,py;        int b[2][4]={-1};
                
        for(i=0; i<n; i++){
                
                for(j=0; j<m; j++){
                        
                    if(a[i][j]=='G')
                    {   nx=px=i; py=ny=j;
                        k=1;v=1;
                        while(k!=0){
                             
                                nx++;ny++;px--;py--;
                                
                                if(nx >= n || ny >= m || px < 0 ||py < 0)
                                break;
                                
                                
                                k=check(m,a,nx,ny,px,py,i,j);
                                   
                                if(k==0)
                                 break;
                                    
                                 v=v+4;
                        }
                        
                    }        if(v>max2){
                                        if(v>max1)
                                        { max2=max1;
                                          max1=v;
                                        }
                                        else
                                          max2=v;
                                       printf("(%d,%d) yea          max1=%d max2= %d    ",i,j,max1,max2);         
                                      }
                }
        }
        
        printf("max1=%d max2= %d ,,,, %d",max1,max2,max1*max2);
        
        return 0;
}

