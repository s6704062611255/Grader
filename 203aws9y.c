#include <stdio.h>
int main(void){
    int H,M;
    
    for(int u = 1; ; u++){
        if(1<= H <=30 && 1<= M <=30 ){
            scanf("%d %d",&H, &M);
            if(H == 0 && M == 0){
                break;
            }
        }
        for(int i = 1; i<=H ; i++){
           for(int j = 1; j<=M ; j++){
               printf("* ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}