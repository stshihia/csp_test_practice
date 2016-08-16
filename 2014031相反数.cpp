#include "stdio.h"
int a[501];
int b[501];
int n;
int ans;
int main(){
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++)
			if(a[i]==(-a[j])&&b[j]==0){
				b[j]=1;
				ans++;
			}
	}
	printf("%d",ans);
	
	return 0;
}