#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int a[10000][10000];

int main(){
	//FILE *fin,*fout;
	FILE *fout;
	//fin=fopen("data.in","rb");
	fout=fopen("data.in","wb");
	
	srand(time(0));
	
	int n;
	scanf("%d",&n);
	fprintf(fout,"%d\n",n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++)
			fprintf(fout,"%d ",rand()%10);
		fprintf(fout,"%d\n",rand()%10);
	}
	
	fclose(fout);
}
