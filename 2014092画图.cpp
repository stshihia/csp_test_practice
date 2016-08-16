#include "stdio.h"
int graph[101][101];

int max(int a,int b){
	return a>b?a:b;
}

int min(int a,int b){
	return a<b?a:b;
}

int main(){
	int n;
	int x1,x2,y1,y2;
	int g[101][101];
	int ans=0;
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		for(int j=min(x1,x2);j<max(x1,x2);j++){
			for(int k=min(y1,y2);k<max(y1,y2);k++)
				graph[j][k]=1;
		}
	}
		
	for(int i=0;i<=100;i++){
		for(int j=0;j<=100;j++)
			if(graph[i][j]==1)ans++;
	}
	
	printf("%d",ans);
	
	
	
	return 0;
}