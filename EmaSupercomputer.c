//https://www.hackerrank.com/challenges/two-pluses/problem

#include<stdio.h>

struct node{
        
        int t[2],
            d[2],
            l[2],
            r[2];
};

int check(int m,char a[][m],int nx,int ny,int px,int py,int i, int j){
        
         
        if(a[px][j]=='G' && a[i][py]=='G' && a[i][ny]=='G' && a[nx][j]=='G')
            { printf("%d, %d  %d, %d  %d, %d %d, %d",px,j,i,py,i,ny,nx,j); 
             printf("yea====1\n");  return 1;  }
         else
            {  printf("yea====0\n");  return 0;  }     
}

int overlap(struct node vpos, struct node maxpos){

        if(vpos.r[0]==maxpos.l[0] && vpos.r[1]>=maxpos.l[1])
          return 1;
        
        if(vpos.t[1]==maxpos.d[1] && vpos.t[0]>=maxpos.d[0])
         return 1;
         
         if( ( vpos.t[0]<=maxpos.r[0] && vpos.t[1]<=maxpos.r[1])  && ( vpos.l[0]<=maxpos.d[0] && vpos.l[1]<=maxpos.d[1] ) )
         return 1;

         if(   (vpos.r[0]<=maxpos.d[0]   &&  vpos.r[1]>=maxpos.d[1]) && (vpos.t[0]<=maxpos.l[0]  && vpos.t[1]>= maxpos.l[1]) )
                return 1;

  return 0;
}               



int main(){

        int n,m,i,j,k=0,v,max1,max2;
        max1=-8;max2=-4;
        
        struct node vpos,max1pos;
        vpos.t[0]=vpos.t[1]=vpos.d[0]=vpos.d[1]=vpos.l[0]=vpos.l[1]=vpos.r[0]=vpos.r[1]=0;
        max1pos.t[0]=max1pos.t[1]=max1pos.d[0]=max1pos.d[1]=max1pos.l[0]=max1pos.l[1]=max1pos.r[0]=max1pos.r[1]=-1;
              
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
                                   vpos.t[0]=px;
                                   vpos.t[1]=j;
                                   vpos.d[0]=nx;
                                   vpos.d[1]=j;
                                   vpos.l[0]=i;
                                   vpos.l[1]=py;
                                   vpos.r[0]=i;
                                   vpos.r[1]=ny;
                        }
                        
                    }        if(v>max2){
                                        
                                      if(!overlap(vpos,max1pos))  
                                        if(v>max1)
                                        { max2=max1;
                                          max1=v;
                                    max1pos.t[0]=  vpos.t[0];
                                    max1pos.t[1]=  vpos.t[1];
                                    max1pos.d[0]=  vpos.d[0];
                                    max1pos.d[1]=  vpos.d[1];
                                    max1pos.l[0]=  vpos.l[0];
                                    max1pos.l[1]=  vpos.l[1];
                                    max1pos.r[0]=  vpos.r[0];
                                    max1pos.r[1]=  vpos.r[1];
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

