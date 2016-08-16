#include "stdio.h"
int n;
int a[10000];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<n;j++)
			if(a[j]<a[j+1]){
				int t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
	}
	
	int ans=0;
	for(int i=1;i<n;i++)
		if(a[i]==(a[i+1]+1))
			ans++;
	
	printf("%d",ans);
	return 0;
}