#include <stdio.h>
int main(void){
    int num,i;
    for(i = 1 ; ; i++){
    	scanf("%d",&num);
        if(num == -1){
            break;
        }
		printf("%d\n",100-num);  
    }
    return 0;
}
