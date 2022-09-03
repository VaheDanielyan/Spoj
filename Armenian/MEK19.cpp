#include <iostream>
using namespace std;
int Max(int a,int b)
{ 
	return (a>b)?a:b;
}
int a[5][5],ans;
int dr[]={0,0,1,-1};
int dc[]={-1,1,0,0};
bool mark[10];
void dfs(int row,int col,int S)
{
	mark[a[row][col]]=true;
	ans=Max(S,ans);
	int i,tr,tc;
	for(i=0;i<4;i++)
	{
		tr=row+dr[i];
		tc=col+dc[i];
		if(tr<1 || tc<1 || tr>3 || tc>3) continue;
		if(!mark[a[tr][tc]])
		{
			dfs(tr,tc,S*10+a[tr][tc]);
		}
	}
	mark[a[row][col]]=false;
}
int main()
{
	int i,j;
	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
			cin>>a[i][j];
	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
			dfs(i,j,a[i][j]);
	cout<<ans<<endl;
	return 0;
}
