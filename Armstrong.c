#include <stdio.h>
#include<math.h>
int main()
{
    int num,c,n,r,sum;
        num=c=sum=0;
        n=0;
    scanf("%d",&num);
    c=num;
    while(c!=0)
    {  n++;
        c=c/10;
    }
    printf("%d",n);
    c=num;
    while(c!=0)
    { r=c%10;
     // sum=sum + pow(r,n);
      c=c/10;
    }
    
    if(sum==num)
    printf("True");
    else
    printf("False");
    return 0;
}

