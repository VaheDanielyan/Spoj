//C++ DanieV
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
int binaryReverse(int toReverse)
{ 
         int reversed = 0;
         while(toReverse > 0) 
		 {
                 reversed *= 2;
                 reversed += toReverse % 2;
                 toReverse /= 2;
         }
 
         return reversed;
}
int main() 
{
	int t,n;
	cin >> t;
	while(t--)
	{
		cin>>n;
		if(!(n%2) )
			cout<<binaryReverse(n)<<endl;
		else
			cout<<n<<endl;
	}
	return 0;
}
