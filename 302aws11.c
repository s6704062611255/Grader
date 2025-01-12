#include <stdio.h>
#include <math.h>
int main(void){
    int n;
    scanf("%d",&n);
    int think[n];  // 3 13 34 4 85 8 17 9

    for(int ind = 0; ind<n ; ind++){
        scanf("%d",&think[ind]);
    }
    
    printf("a) ");
    for(int i = 0 ; i<4 ;i++){
        printf("%d ",think[i]);
    }
    printf("\n");

    printf("b) ");
    for(int i = 0 ; i<n ;i++){
        if(think[i] > think[2]){
            printf("%d ",think[i]);
        }
    }
    printf("\n");

    printf("c) ");
    for(int i = 0 ; i<n ; i++){
        if( think[i]>think[2]){
            printf("%d ",i);
        }
    }
    printf("\n");

    printf("d) ");
   
    think[n] = think[2] + think[3];
    n++;
   
    for(int i = 0 ; i<n ;i++){
        printf("%d ",think[i]);
    }
    printf("\n");

    printf("e) ");
    think[3] = abs(think[2] - think[4]);
    for(int i = 0 ; i<n ;i++){
        printf("%d ",think[i]);
    }
    printf("\n");

    printf("f) ");
    if(think[1] > think[5]){
        printf("2");
    }else{
        printf("6");
    }
    printf("\n");

    printf("g) ");
    int swap = think[1];
    think[1] = think[8];
    think[8] = swap;
    for(int i= 0 ; i<n ;i++){
        printf("%d ",think[i]);
    }
    printf("\n");

    printf("h) ");
    int new[n],new_ind = 0;

    for (int i = 0; i < n; i++){
        if (think[i] % 2 == 0) {  
            //printf("%d ",think[h]);
            new[new_ind] = think[i];
            new_ind++; 
        }
    }
    printf("new=[");
    for(int i= 0 ; i < new_ind ;i++){
        printf("%d",new[i]);
        if(i<new_ind-1){
            printf(" ");
        }
    }
    printf("]\n");
   
    return 0;
}
