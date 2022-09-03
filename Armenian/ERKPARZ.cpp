//You might be using goldbach conjecture but i found a little bug
#include <iostream>
using namespace std;
int i,qanak,c,n;
int main()
{
	cin>>c>>n;
	for(i=c;i<=n;i++)
	{
		if(i>4)
			qanak++;
	}
	cout<<qanak<<endl;
	return 0;
}
