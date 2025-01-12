#include <stdio.h>
#define max_anser  100
#define max_std 100
int main(){
	
	int i,j,k;
	scanf("%d",&k);
	char ans[max_anser];
	int n;
	int score[30];
	
	if(1<=k<=50){
		for(i = 0 ;i<k ;i++){
		    scanf(" %c",&ans[i]);
	    }
	    
		if(1<=n<=50){
	    	scanf("%d",&n); //input student
    	    
			char stu[max_anser ][max_std];
			
			for(i=0 ; i<n ; i++){
		        for(j=0 ;j<k; j++){
			        scanf(" %c", &stu[i][j]);
			        if( stu[i][j] == ans[j] ){ //check answer = stu ?
			        	score[i]++;
					}
		        }//j
	        }// i
	        
			for(i = 0 ; i<n ;i++){
	        	printf("std %d => %d\n",i+1,score[i]);
	        	//printf("\n");
			}
			
    	} // if 1<=n<=50
	}//if 1<=k<=50
	else{
		printf("input k agian");
	}
	return 0;
}
