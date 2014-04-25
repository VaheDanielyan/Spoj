//simple geometry
#include <iostream>
#include <cmath>
using namespace std;
double a[22],mx,o,f;
int main()
{
	int n,i,j,k;
	cout.setf(ios::fixed);
	cout.precision(6);
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			for(k=j+1;k<=n;k++)
			{
				f=(a[i]+a[j]+a[k])/2;
				o=f*(f-a[i])*(f-a[j])*(f-a[k]);
				if(a[i]+a[j]>a[k] && a[j]+a[k]>a[i] && a[i]+a[k]>a[j] && sqrt(o)>mx)
						mx=sqrt(o);
			}
	if(mx==0)
		cout<<-1<<endl;
	else
		cout<<mx<<endl;
	return 0;
}
