#include "stdio.h"
int n,temp,ans;
int a[100000];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&temp);
		a[temp]++;
	}
	temp=a[0];
	for(int i=0;i<=10000;i++){
		if(a[i]>temp){
			ans=i;
			temp=a[i];
		}
	}
		
	printf("%d",ans);
	return 0;
}