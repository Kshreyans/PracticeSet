//https://www.hackerrank.com/contests/university-codesprint-3/challenges/erupting-volcanoes

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node{
      int x,
          y,
          w;
      double d;
};

void swap(struct node *a,int j,int i){

        int temp;
        temp=a[j].x;    a[j].x=a[j+1].x;    a[j+1].x=temp;
        temp=a[j].y;    a[j].y=a[j+1].y;    a[j+1].y=temp;
        temp=a[j].w;    a[j].w=a[j+1].w;    a[j+1].w=temp;
        
        double r;
        r=a[j].d;    a[j].d=a[j+1].d;    a[j+1].d=r;
}

void sort(struct node *a,int m){

        int i,j;
        
        for(i=0; i<m; i++){
        
                for(j=0; j<m-1-i; j++)
                {  
                   if(a[j].d>a[j+1].d)
                     swap(a,j,i);
                }
        }
        
}

int main(){
        int n,m,i;
        
        scanf("%d%d",&n,&m);
        
        struct node a[m];
        int  board[n][n],w=0,x,y;
        
        for(i=0; i<m; i++){
             scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].w);
             a[i].d=sqrt(a[i].x*a[i].x +a[i].y*a[i].y);
        }
        
      //  if(m==1)
      //  {printf("%d",a[0].w); return 0;}
        
        sort(a,m);        
        
        int k,mx,my,max=-2,j;
        
        for(i=0; i<n; i++)
               for(j=0; j<n ;j++)
                     board[i][j]=0;   
         for(i=0; i<n; i++)
        {       for(j=0; j<n ;j++)
                printf(" %d "  ,   board[i][j]);   
          printf("\n");
         } 
 printf("------------------------------------\n");
                
        for(k=0; k<m; k++){
        
                for(i=0; i<n; i++){
                        for(j=0; j<n ;j++){
                             mx=abs(i-a[k].x);         
                             my=abs(j-a[k].y);                          
                             if(my>mx)
                             mx=my;
                             
                             if(mx<a[k].w)
                             board[i][j]=board[i][j]+abs(a[k].w-mx);
                                
                             if(max<board[i][j])
                             max=board[i][j];   
                        }
                }
        }
         for(i=0; i<n; i++)
        {       for(j=0; j<n ;j++)
                printf(" %d "  ,   board[i][j]);   
          printf("\n");
         } 
        printf("\n%d",max);
        return 0;
}
