#include "stdio.h"

int main(){
	int n;
	int a[510][510];
	int i,j;
	int state=1;//1 rightup 0 leftdown

	// FILE *fin,*fout;
	// fin=fopen("data.in","rb");
	// fout=fopen("data.out","wb");
	// fscanf(fin,"%d",&n);
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			//fscanf(fin,"%d",&a[i][j]);
			scanf("%d",&a[i][j]);
	
	i=1,j=1;
	while( !(i==n&&j==n) ){
		//fprintf(fout,"%d ",a[i][j]);
		printf("%d ",a[i][j]);
		if((i==1&&state==1)||(i+1>n&&state==0)){
			
			state=1-state;
			if(j==n)
				i++;
			else
				j++;
			continue;
		}
		if((j==1&&state==0)||(j+1>n&&state==1)){
			state=1-state;
			if(i==n)
				j++;
			else
				i++;
			continue;
		}
		
		if(state==1){
			i--;j++;
		}else{
			i++;j--;
		}
	}
	printf("%d",a[n][n]);
	// fprintf(fout,"%d",a[n][n]);
	
	// fclose(fin);
	// fclose(fout);
	
	return 0;
}
