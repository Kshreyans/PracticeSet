#include <iostream>
using namespace std;

void reflect(int px,int py,int qx,int qy)
    { printf("%d %d",2*qx-px,2*qy-py);
    }

int main() {
    int n,i,qx,qy,px,py;
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d%d",&px,&py,&qx,&qy);
        reflect(px,py,qx,qy);
        printf("\n");
    }     
    return 0;
}
