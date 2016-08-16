#include "stdio.h"
int a[3000][3000];
struct window{
	int x1;
	int y1;
	int x2;
	int y2;
};

struct window windows[11]; 

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d %d %d %d",&windows[i].x1,&windows[i].y1,&windows[i].x2,&windows[i].y2);
		for(int j=windows[i].x1;j<=windows[i].x2;j++){
			for(int k=windows[i].y1;k<=windows[i].y2;k++)
				a[j][k]=i;
		}
	}
	
	// for(int j=0;j<=20;j++){
		// for(int k=0;k<=20;k++)
			// printf("%d ",a[j][k]);
		// printf("\n");
	// }
	
	for(int i=1;i<=m;i++){
		int x3,y3;
		scanf("%d %d",&x3,&y3);
		if(a[x3][y3]==0){
			printf("IGNORED\n");
			continue;
		}
		int num=a[x3][y3];
		printf("%d\n",num);
		for(int j=windows[num].x1;j<=windows[num].x2;j++){
			for(int k=windows[num].y1;k<=windows[num].y2;k++)
				a[j][k]=num;
		}
		// for(int j=0;j<=20;j++){
			// for(int k=0;k<=20;k++)
				// printf("%d ",a[j][k]);
			// printf("\n");
		// }
	}
	
	return 0;
}
