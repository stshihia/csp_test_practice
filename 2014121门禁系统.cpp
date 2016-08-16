#include "stdio.h"
int n,temp;
int a[10000];
int b[10000];

int main(){
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&temp);
		a[temp]++;
		b[i]=a[temp];
	}
	
	for(int i=1;i<=n;i++)
		printf("%d ",b[i]);
	
	return 0;
}