#include<stdio.h>
#include<stdlib.h>

 struct node
{ int c,
      s,
      e,
      p;	
};

 struct node a[5],b[5],sol[10]; 
 void display( int k);

 void combjob()
{ int k=1,j,i,ov,prv,sel;
  
   for(i=1; i<=4; i++)
    { prv=sel=-1;
       
         for(j=1; j<=4; j++)
          {  
               if(a[i].e > b[j].s && b[j].c==0)
                 {
                
                        if(a[i].e > b[j].e)
                        { 
                          if(b[j].s < a[i].s)
                           ov=b[j].e - a[i].s;
                           else
                           ov=b[j].e - b[j].s;
                        }
                        
                         if(a[i].e < b[j].e)
                         { 
                           if(a[i].s > b[j].s)
                           ov= a[i].s - a[i].e; 
                            else
                            ov=a[i].e - b[j].s;
                         }
                         if(ov > prv)
                         { prv=ov;
                           sel=j;
                         } 
                   }
           
           }
        
                    if(sel!=-1)
                     {  a[i].c=k;
                        b[sel].c=k;
                        sol[k].s=a[i].s;
                        sol[k].e= (a[i].e > b[sel].e) ? a[i].e : b[sel].e;
                        sol[k].p=a[i].p + b[sel].p;
                           k++;
                       }


    }
    
    printf("\nb----------------\n");
    for(i=1; i<=4; i++)
    printf("(%d  %d  %d  %d )\n",b[i].c,b[i].s,b[i].e,b[i].p);
    
    printf("\na----------------\n");
    for(i=1; i<=4; i++)
    printf("(%d  %d  %d  %d )\n",a[i].c,a[i].s,a[i].e,a[i].p);
  
    for(i=1;i<=4;i++)
    { 
      if(a[i].c==0)
      {       a[i].c=1;
             
              sol[k].s=a[i].s;
              sol[k].e=a[i].e;
              sol[k].p=a[i].p;
              k++;
      }
      
       if(b[i].c==0)
        {       b[i].c=1;
             
              sol[k].s=b[i].s;
              sol[k].e=b[i].e;
              sol[k].p=b[i].p;
              k++;
        }
    }
  
  
    printf("\n----------------\n");
    for(i=1; i<k; i++)
    printf("(%d  %d  %d )\n",sol[i].s,sol[i].e,sol[i].p);
    
  
} 



 int main()
{ int i;
  
 int s1[5]={0,1,2,4,6};
 int e1[5]={0,3,7,7,9};
 int p1[5]={0,20,30,25,40};

 int s2[5]={0,3,5,6,9};
 int e2[5]={0,5,8,10,11};
 int p2[5]={0,10,40,20,30};

 for(i=1; i<=4; i++)
 { a[i].c=0;
   a[i].s=s1[i];
   a[i].e=e1[i];
   a[i].p=p1[i];
 
   b[i].c=0;
   b[i].s=s2[i];
   b[i].e=e2[i];
   b[i].p=p2[i];
   
 }
 
  for(i=1;i<=9;i++)
  { sol[i].c=0;
    sol[i].s=0;
    sol[i].e=0;
    sol[i].p=0;
  }
 
 
 for(i=1;i<=4;i++)
 { printf("(%d  %d  %d)\n",a[i].s,a[i].e,a[i].p);
 }
  printf("\n-----------\n");
 for(i=1;i<=4;i++)
 { printf("(%d  %d  %d)\n",b[i].s,b[i].e,b[i].p);
 }
 
 
 combjob();
 
 
 return 0;
}
