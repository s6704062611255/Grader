#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
int n,i;
int think[100];
scanf("%d",&n);
if(n<=20){
    for ( i=0; i < n; i++){
        scanf("%d",&think[i]);
    }
    //A
    printf("a) ");
    for (i=0; i < 4; i++){
        printf("%d ",think[i]);
    }
    printf("\n");

    //B
    printf("b) ");
    for (i=0; i<n; i++){
        if(think[i]>think[2]){
            printf("%d ",think[i]);
        }
    }
    printf("\n");

    //C
    printf("c) ");
    for (i=0; i<n; i++){
        if(think[i]>think[2]){
            printf("%d ",i);
        }
    }
    printf("\n");

    //D
    printf("d) ");
    think[n]=think[2]+think[3];
    n++;
    for (i=0; i < n; i++){
        printf("%d ",think[i]);
    }
    printf("\n");

    //E
    printf("e) ");
    think[3]=abs(think[2]-think[4]);
    for (i=0; i < n; i++){
        printf("%d ",think[i]);
    }
    printf("\n");

    //F
    printf("f) ");
    if(think[1]>think[5]){
        printf("2");
    }else{printf("6");}
    printf("\n");
    
    //G
    printf("g) ");
    int s=think[1];
    think[1]=think[n-1];
    think[n-1]=s;
     for (i=0; i < n; i++){
        printf("%d ",think[i]);
    }
    printf("\n");

    //H
    printf("h) ");
    int new[n];
	int j=0; 
    for(i=0; i < n; i++){
        if (think[i] % 2 == 0){
            new[j]=think[i];
            j++;
        }
    }
    printf("new=[");
    for (int i = 0; i < j; i++) {
        printf("%d", new[i]);
        if (i < j - 1) {
            printf(" ");
        }
    }
    printf("]\n");


}else{
    printf("num > 20");
}
}
