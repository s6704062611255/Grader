#include <stdio.h>
#define max 100
int main(void){
	
	int i,j,row,col,i2;
	int a[max][max]; 
	scanf("%d %d",&row, &col);
    a[row][col];
	
	for(i = 0 ; i<row ; i++){
		for(j = 0; j<col ; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	//a
	printf("a) ");
	for(j = 0 ; j < col ; j++){
		printf("%d ",a[row-1][j]);
	}
	printf("\n");
	
	//b
	printf("b) ");
	for(i = 0; i<row ;i++){
		printf("%d ",a[i][0]);
	}
	printf("\n");
	
	//c
	printf("c) ");
	for(i = 0; i<row ;i++){
		for(j = 0; j<col; j++){
			if(a[i][j]>a[0][2]){
				printf("%d ",a[i][j]);
			}
		}
	}
	printf("\n");
	
	//d
	printf("d)");
	for(i = 0; i<row ;i++){
		for(j = 0; j<col ; j++){
			if(a[i][j]>a[0][2]){
				printf(" %d,%d",i,j);
			}
		}
	}
	printf("\n");
	
	//e 
	printf("e)\n");
	for(i = 0 ; i<row ;i++){
	   a[i][col] = a[i][2] + a[i][3];
    }
    col++;
    for(i=0 ; i<row ; i++){
       for(j =0; j<col ; j++){
		   printf("%d ",a[i][j]);
        }
        printf("\n");
    }
 
	// f
	printf("f)\n");
	for(i = 0;i<row ;i++){
		int swap = a[i][1];
		a[i][1] = a[i][col-1];
		a[i][col-1] = swap;
	} 
	
	for(i=0 ; i<row ; i++){
       for(j =0; j<col ; j++){
		   printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
	// g
	printf("g)\n");
	for(i = 0;i<col ;i++){
		int swap = a[0][i];
		a[0][i] = a[row-1][i];
		a[row-1][i] = swap;
	} 
	
	for(i=0 ; i<row ; i++){
       for(j =0; j<col ; j++){
		   printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    // h
	printf("h) ");
	int new[max],new_ind = 0;
	for(i = 0; i<row ;i++){
		for(j =0 ;j<col ;j++){
			if(a[i][j] % 2 == 0){
				new[new_ind]=a[i][j];
				new_ind++;
			}
		}//for j
	}//for i
	
	printf("new=[");
    for( i= 0 ; i < new_ind ;i++){
	    printf("%d",new[i]);
        if(i<new_ind-1){
           printf(" ");
        }
    }
    printf("]\n");
    
    // i
	printf("i)\n");
	int num;
	scanf("%d",&num);
	for( i=0 ; i<row ; i++){
		for(j=0 ; j<col ; j++){
			if(a[i][j] == num){
				printf("<%d> ",a[i][j]);
			}
			else{
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
    return 0;
}
