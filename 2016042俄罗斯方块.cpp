#include "stdio.h"
int a[16][10];
int b[4][4];
int c;
int d[15][10];

int main(){
	for(int i=0;i<10;i++)
		a[15][i]=1;
	int k;
	for(int i=0;i<15;i++){
		for(int j=0;j<10;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&b[i][j]);
		}
	}
	scanf("%d",&c);

	
	for(k=0;k<=15;k++){
		int flag=0;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(b[i][j]+a[k+i][c-1+j]==2){
					flag=1;
					break;
				}
			}
			if(flag==1)break;
		}
		if(flag==1)break;
	}
	
	k--;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			a[k+i][c-1+j]=a[k+i][c-1+j]+b[i][j];
		}
	}
	
	// for(int i=0;i<15;i++){
		// for(int j=0;j<10;j++){
			// printf("%d ",a[i][j]);
		// }
		// printf("\n");
	// }
	// for(int i=0;i<4;i++){
		// for(int j=0;j<4;j++){
			// printf("%d ",b[i][j]);
		// }
		// printf("\n");
	// }
	
	
	
	
	for(int i=0;i<15;i++){
		for(int j=0;j<10;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	
	return 0;
}
