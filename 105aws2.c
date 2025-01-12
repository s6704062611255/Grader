#include <stdio.h>
int main(){
    int mid,test,final;
    scanf ("%d/%d/%d",&mid, &test, &final);
    int all = mid + test + final;
    
    if (all >= 80){
        printf("A \n");
    }
    else if (all >= 70 && all < 80){
        printf("B %d\n",80-all);
    }
    else if (all >= 60 && all < 70){
        printf("C %d\n",80-all);
    }
    else if (all >= 50 && all < 60){
        printf("D %d\n",80-all);
    }
    else{
        printf("F %d\n",80 - all);
    }
    return 0;
}