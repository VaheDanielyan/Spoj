#include <iostream>
using namespace std;
int n;
int main()
{
	cin>>n;
	if(n==1)
	{
		cout<<"1"<<endl;
		return 0;
	}
	if(n==2)
	{
		cout<<"2"<<" "<<"2"<<endl;
		return 0;
	
	}
	for(int i=1;i<=n-2;i++)
		cout<<"1"<<" ";
	cout<<"2"<<" "<<n<<endl;
	return 0;
}



