#include <stdio.h>>
int main(){
    int h , m;
    scanf("%d:%d",&h, &m);
    
    if(h==7 && m>=10 && m<=59 || h==8 && m<=59 || h==9 && m<=30 ){
        printf("Y\n");
    }
    else{
        printf("N\n");
    }
    return 0;
}