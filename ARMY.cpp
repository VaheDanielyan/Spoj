#include <iostream>
using namespace std;
int n,a,b,max1,max2,i,o,p,j,k;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		max1=0;max2=0;
		cin>>a>>b;
		for(j=1;j<=a;j++)
		{
			cin>>o;
			if(o>max1)
				max1=o;
		}
		for(k=1;k<=b;k++)
		{
			cin>>p;
			if(p>max2)
				max2=p;
		}
		if(max1>=max2)
			cout<<"Godzilla"<<endl;
		else
			cout<<"MechaGodzilla"<<endl;
	}
	return 0;
}
