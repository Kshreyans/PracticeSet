
//To calculate and check the maximum seating capacity in boat trips.
//https://www.hackerrank.com/contests/w28/challenges/boat-trip
#include<iostream.h>
using namespace std;


int main(){
    int n;                                                              //no. of trips
    int c;                                                              // maximum seating capacity
    int m;                                                              // no. of boats
    int f=0;                                                            // flag variable
    cin >> n >> c >> m;
    int p[n];
    
    for(int i = 0; i < n; i++)
    {
       cin >> p[i];                                                     // no. of people going per trip.

        if(p[i]> c*m)
         f=1; 
    }
    
    if(f==1)
     cout<<"No";
    else
      cout<<"Yes";
    
    return 0;
}

