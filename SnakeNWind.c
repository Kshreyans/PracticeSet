//https://www.hackerrank.com/contests/university-codesprint-3/challenges/the-snake-vs-the-wind

#include<stdio.h>
int n,c=1;

void horiL2R(int a[][n],int i,int j){

        for(; j<n; j++)
        if(a[i][j]==0)
         a[i][j]=c++;
}

void horiR2L(int a[][n],int i,int j){

        for(; j>=0; j--)
         if(a[i][j]==0)       
           a[i][j]=c++;
}

void vertU2D(int a[][n],int i,int j){
        for(; i<n; i++)
        if(a[i][j]==0)
         a[i][j]=c++;
}

void vertD2U(int a[][n],int i,int j){
        for(; i>=0; i--)
        if(a[i][j]==0)
        a[i][j]=c++;
}


int main(){

        int x,y;
        
        scanf("%d",&n);
        char wind;getchar();
        scanf("%c",&wind);
        scanf("%d%d",&x,&y);
        
        int a[n][n],i,j,ch;
        
        for(i=0; i<n; i++)
                for(j=0; j<n; j++)
                  a[i][j]=0;
        switch(wind){
        
        case 'e':    if(y==0)
                     {  
                      for(j=0; j<n; j++)
                       { a[x][j]=c++; printf("a[%d][%d]=%d\n",x,j,c-1);}
                        y=n-1; printf("-------");
                     }break;
                        
        case 'w':    if(y==(n-1))
                     {  
                      for(j=n-1; j>=0; j--)
                        a[x][j]=c++;
                        y=0;
                     }break;
                     
        case 'n':    if(x==(n-1))
                     {  
                      for(j=n-1; j>=0; j--)
                        a[j][y]=c++;
                        x=0;
                     }break;             
        
        case 's':    if(x==0)
                     {  
                      for(j=0; j<n; j++)
                        a[j][y]=c++;
                        x=n-1;
                     }break;
        }
        
        printf("x=%d  y=%d\n",x,y);
        if(x==0 && y==0)
          ch=1;
        else              
        if(x==0 && y==(n-1))
          ch=2;
        else
        if(x==(n-1) && y==0)
          ch=3;
        else
        if(x==(n-1) && y==(n-1))
          ch=4;
        printf("ch=%d\n",ch);
      
        i=x;j=y;
        switch(ch){
        
        case 1:
                if(wind=='n' || wind=='s')
                 {         while(i<n){
                             horiL2R(a,i++,0);
                             if(i<n)                 
                             horiR2L(a,i++,n-1);
                        }
                }
                else
                {       while(j<n){
                        vertU2D(a,0,j++);
                        if(j<n)
                        vertD2U(a,n-1,j++);
                        }
                }
                  break;     
        
        case 2:
                if(wind=='n' || wind=='s')
                 {         while(i<n){
                             horiR2L(a,i++,n-1);
                             if(i<n)                 
                             horiL2R(a,i++,0);
                        }
                }
                else
                {       while(j>=0){
                        vertU2D(a,0,j--);
                        if(j<n)
                        vertD2U(a,n-1,j--);
                        }
                }
                  break;     
        
        
        case 3:
                if(wind=='n' || wind=='s')
                 {         while(i>=0){
                             horiL2R(a,i++,0);
                             if(i<n)                 
                             horiR2L(a,i++,n-1);
                        }
                }
                else
                {       while(j<n){
                        vertD2U(a,n-1,j++);
                        if(j<n)
                        vertU2D(a,0,j++);
                        }
                }
                  break;     
        
        case 4:
                if(wind=='n' || wind=='s')
                 {         while(i>=0){
                             horiL2R(a,i--,n-1);
                             if(i<n)                 
                             horiR2L(a,i--,0);
                        }
                }
                else
                {       while(j>=0){
                        vertD2U(a,n-1,j--);
                        if(j<n)
                        vertU2D(a,0,j--);
                        }
                }
                  break;     
        }
 
        for(i=0; i<n; i++){
                for(j=0; j<n; j++)
                printf("%d ",a[i][j]);
              printf("\n");
        }
        return 0;
}
