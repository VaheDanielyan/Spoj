// its too long to understand C++ DanieV
#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
const int N=100005;
int n,m;
vector<int> graph1[N],graph2[N];
queue<int> q;
bool mark1[N],mark2[N],mark3[N];
void f()
{
	int i;
	for(i=1;i<=n;i++)
		mark1[i]=false;
}
void BFS1(int x)
{
	int b,c,d,i;
	q.push(x);
	mark1[x]=true;
	while(!q.empty())
	{
		b=q.front();
		q.pop();
		for(i=0;i<graph2[b].size();i++)
		{
			c=graph2[b][i];
			if(mark1[c]==false)
			{
				mark1[c]=true;
				q.push(c);
			}
		}
	}
}
void BFS2(int x)
{
	
	int b,c,d;
	int i;
	q.push(x);
	mark1[x]=true;
	while(!q.empty())
	{
		b=q.front();
		q.pop();
		for(i=0;i<graph1[b].size();i++)
		{
			c=graph1[b][i];
			if(mark1[c]==false)
			{
				mark1[c]=true;
				q.push(c);
			}
		}
	}
}
int main()
{
	int i,j,b,c,d,e;
	bool check;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&b,&c);
		graph1[b].push_back(c);
		graph2[c].push_back(b);
	}
	for(i=1;i<=n;i++)
	{
		if(mark2[i]==false)
		{
			f();
			BFS1(i);
			check=true;
			for(j=1;j<=n;j++)
			{
				if(mark1[j]==false)
				{
					check=false;
					break;
				}
			}
			if(check==true)
			{
				f();
				BFS2(i);
				for(i=1;i<=n;i++)
					if(mark1[i]==true)
					{
						mark2[i]=true;
					}
			}
		}
	}
	int ans,num;
	num=0;
	for(i=1;i<=n;i++)
		if(mark2[i]==true)
		{
			num++;
		}
	printf("%d\n",num);
	for(i=1;i<=n;i++)
		if(mark2[i]==true)
		{
			printf("%d ",i);
		}
	return 0;
}
