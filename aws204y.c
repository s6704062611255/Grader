#include <stdio.h>
int main(void){
    
    int N, M;
    scanf("%d", &N);
    
    for(int i = 0 ; i<N ; i++){
        scanf("%d",&M);
        for(int row = 0 ; row < M ; row++){
            for(int col = 0; col < M; col++){
                if(row>=1 && row <=M-2 && col>=1 && col<=M-2){
                    printf("* ");
                }else{
                    printf(". ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
