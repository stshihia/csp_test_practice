#include "stdio.h"
int n,temp;
int a[10001];

struct number{
	int n;
	int c;
};
struct number numbers[10001],t;

int main(){

	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&temp);
		a[temp]++;
	}
	
	int j=1;
	
	for(int i=0;i<=10000;i++){
		if(a[i]!=0){
			numbers[j].n=i;
			numbers[j].c=a[i];
			j++;
		}
	}
	j--;
	
	//1-j
	for(int k=1;k<=j-1;k++){
		for(int i=1;i<=j-k;i++){
			if(numbers[i].c<numbers[i+1].c){
				t=numbers[i];numbers[i]=numbers[i+1];numbers[i+1]=t;
			}
		}
	}
	
	for(int i=1;i<=j;i++)
		printf("%d %d\n",numbers[i].n,numbers[i].c);
	return 0;
}
