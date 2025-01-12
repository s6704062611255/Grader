#include <stdio.h>
#define max 100
int main(){
	
	int i,j;
	int k = 20;
	char ans[max];
	int n,sum;
	int score[50];
	
	for(i = 0 ;i<k ;i++){
        scanf(" %c", &ans[i]); // input anser
    }
    
	scanf("%d",&n); //input student
    if(1<=n<=100){
    	
		char astd[max][max];
 	
		for(i = 0; i<n ; i++){
    		for(j=0 ; j<k ; j++){
    			scanf(" %c", &astd[i][j]);
    			if(ans[j] == astd[i][j]){
    				if(j>17){
    					score[i]+=3;
					}
					else if(j>14){
						score[i]+=2;
					}
					else{
						score[i]+=1;
					}	
				} //if  ans[j] == astd[i][j]
			}//for j//if(ans[j] >=
		}//for i
		
		for(i = 0; i<n ;i++){
		    printf("std %d => %d\n",i+1,score[i]);
	    }
	}
	else{
		printf("input n again");
	}
	return 0;
}
