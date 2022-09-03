#include <iostream>
#include <cmath>
using namespace std;
int n,a,b,c;
long S(long x)
{
   long y = 0;
   while(x)
   {
       y = y*10 + x%10;
       x /= 10;
   }
   return y;
}
int main()
{
    cin>>n;
    for(int p=1;p<=n;p++)
    {
        cin>>a>>b;
        a=S(a);
        b=S(b);
        c=a+b;
        c=S(c);
        cout<<c<<endl;
    }
    return 0;
}
