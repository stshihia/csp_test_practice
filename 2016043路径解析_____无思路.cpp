#include "stdio.h"
char s[1001];
char path[1001];
char o[2001];

int main(){
	
	int n;
	scanf("%d",&n);
	scanf("%s",path);
	for(int i=1;i<=n;i++){
		scanf("%s",s);
		for(int j=0;s[j]!='\0';j++){
			if(s[j]!='/'){
				o[k]=s[j];
				j++;k++;
			}else{
				if(s[j+1]=='/')
					j++;
			}
			
		}
		printf("%s",o);
	}
	
	
	return 0;
}