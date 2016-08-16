#include <stdio.h>

char a[120][120];
int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int m,n,q;
FILE *fin,*fout;

struct node{
	int x;
	int y;
};

int max(int a,int b){
	return a>b?a:b;
}

int min(int a,int b){
	return a<b?a:b;
}

void fill(int x,int y,char c){
	int head=1;
	int tail=1;
	struct node nodes[1000];
	
	nodes[tail].x=x;
	nodes[tail].y=y;
	tail++;
	//a[nodes[tail].x][nodes[tail].y]=c;
	//fprintf(fout,"%d %d\n",x,y);
	
	while(head<tail){
		for(int i=0;i<=3;i++){
			int tx,ty;
			tx=nodes[head].x+next[i][0];
			ty=nodes[head].y+next[i][1];
			if(tx<0||tx>=m||ty<0||ty>=n)
				continue;
			if(a[tx][ty]!='|'&&a[tx][ty]!='-'&&a[tx][ty]!='+'&&a[tx][ty]!=c){
				a[tx][ty]=c;
				nodes[tail].x=tx;
				nodes[tail].y=ty;
				tail++;
				fprintf(fout,"%d %d\n",tx,ty);
				
				
				for(int j=n-1;j>=0;j--){
					for(int i=0;i<=m-1;i++){
						//printf("%c ",a[i][j]);
						fprintf(fout,"%c ",a[i][j]);
					}
					//printf("\n");
					fprintf(fout,"\n");
				}
			}
		}
		head++;
	}
	
	
}

int main(){
	//FILE *fin,*fout;
	fin=fopen("data1.in","rb");
	fout=fopen("data.out","wb");

	for(int i=0;i<=110;i++){
		for(int j=0;j<=110;j++)
			a[i][j]='.';
	}
	

	//fprintf(fout,"hello");
	//scanf("%d %d %d",&m,&n,&q);
	fscanf(fin,"%d %d %d",&m,&n,&q);

	for(int j=n-1;j>=0;j--){
		for(int i=0;i<=m-1;i++){
			//printf("%c ",a[i][j]);
			fprintf(fout,"%c ",a[i][j]);
		}
		//printf("\n");
		fprintf(fout,"\n");
	}
	
	for(int i=1;i<=q;i++){
		int temp;
		//scanf("%d",&temp);
		fscanf(fin,"%d",&temp);
		if(temp==0){
			int x1,y1,x2,y2;
			//scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
			fscanf(fin,"%d %d %d %d",&x1,&y1,&x2,&y2);
			if(x1==x2){
				for(int j=min(y1,y2);j<=max(y1,y2);j++){
					if(a[x1][j]=='-')
						a[x1][j]='+';
					else
						a[x1][j]='|';
				}
			}
			else{
				for(int j=min(x1,x2);j<=max(x1,x2);j++){
					if(a[j][y1]=='|')
						a[j][y1]='+';
					else
						a[j][y1]='-';
				}
			}
		}
		else{
			int x,y;
			char c;
			//scanf("%d %d %c",&x,&y,&c);
			fscanf(fin,"%d %d %c",&x,&y,&c);
			fill(x,y,c);
		}
	}
	
	for(int j=n-1;j>=0;j--){
		for(int i=0;i<=m-1;i++){
			//printf("%c ",a[i][j]);
			fprintf(fout,"%c ",a[i][j]);
		}
		//printf("\n");
		fprintf(fout,"\n");
	}
	//fprintf(fout,"hello");
	return 0;
}
