//https://www.hackerrank.com/challenges/grading
// To make a grade system, to grade the marks of a student if diff b\w the grade and its next multiple is < 3. 


int main(){
    int n,q; 
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        int grade; 
        scanf("%d",&grade);
       
        if(grade > 37)
        { 
           q=grade/5;
           
           if((q+1)*5 - grade < 3)
             grade= (q+1)*5;
        }
       printf("%d\n",grade); 
    }
    return 0;
}

//https://www.hackerrank.com/challenges/apple-and-orange?h_r=next-challenge&h_v=zen
// To calculate the no. of apples and oranges falling on the tree...

int main(){
    int s,                                                      // coordiante of house (starting)
        t,                                                      // coordinate of house (ending) 
        a,                                                      // coordinate of apple tree 
        b,                                                      // coordinate of orange tree
        m,                                                      // no. of apples falling
        n,                                                      // no. of oranges falling
        d=0,                                                    // distance fruit 
        c1=0,                                                   // no. of apples felled on house
        c2=0;                                                   // no. of oranges felled on house
    
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    
   int *apple = malloc(sizeof(int) * m);
    for(int i = 0; i < m; i++)
    {
       scanf("%d",&apple[i]);
       d=apple[i]+a;
       if(d>=s && d<=t)
        c1++;   
    }
    
    int *orange = malloc(sizeof(int) * n);
     for(int i = 0; i < n; i++)
     {
       scanf("%d",&orange[i]);
       d=b+orange[i];
       if(d>=s && d<=t)
        c2++;  
     }
    printf("%d\n%d",c1,c2);
    return 0;
}

