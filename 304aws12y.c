#include <stdio.h>
int main(void){

    int r,c;
    scanf("%d %d",&r, &c);
    int matrix[r][c];
    int sum_r[r],sum_c[c];
    int total = 0;
    
    for(int i = 0; i<r ; i++){
        for(int j = 0 ; j<c ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

   for(int i = 0 ; i < r ; i++){
       sum_r[i] = 0;
       for(int j = 0 ; j<c ; j++){
           sum_r[i] = sum_r[i] + matrix[i][j];
       }
       total = total + sum_r[i];
   }
    
    for(int j = 0 ; j < c ; j++){
       sum_c[j] = 0;
       for(int i = 0 ; i<r ; i++){
           sum_c[j] = sum_c[j] + matrix[i][j];
       }
   }

   for(int i = 0; i<r ; i++){
      for (int j = 0; j < c; j++) {
            printf("%d ",matrix[i][j]);
       }
       printf("%d\n",sum_r[i]);
    }
    
   for(int i = 0; i<c ; i++){
      printf("%d ",sum_c[i]);
    }
    printf("%d\n",total);
    return 0;
}