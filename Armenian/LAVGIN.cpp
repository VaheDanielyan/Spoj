#include <iostream>
using namespace std;
int a,b,t,h[10],f,qan,j,mx,mx2;
int main()
{
	cin>>a>>b;
	for(int i = a;i <= b;i++)
	{
		f = 0;qan = 0;
		t = i;
		while(t)
		{
			h[f++] = t%10;
			t/=10;
		}
		j = 0;
		while(h[j]==9)
		{
			qan++;
			j++;
		}
		if(i>mx && qan>=mx2)
		{
			mx = i;
			mx2 = qan;
		}
		
	}
	cout<<mx<<endl;
	return 0;
}
