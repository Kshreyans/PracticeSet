#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void insertionSort2(int n, int* arr) {
    
    int i,j,e;
    
    for( i=1; i<n; i++ ){
        e=arr[i];
        for(j=i-1; j>=0; j--){
            if( e < arr[j] )
                arr[j+1]=arr[j];
            else
            break;
            
        }
        arr[j+1]=e;
        for( j=0; j<n; j++ )
            printf("%d ",arr[j]);
        printf("\n");
    }
}

int main() {
    int n; 
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    insertionSort2(n, arr);
    return 0;
}

