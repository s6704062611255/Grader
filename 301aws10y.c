#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int array[n];

    //input
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&array[i]);
    }

    //output
    for(int j = n-1 ; j>=0 ; j--){
        printf("%d ",array[j]);
    }
    
    return 0;
}