#include <iostream>
#include <string.h>
using namespace std;
int n,t,res,i;
bool valid[1000];
int main()
{
    cin >> t;
    while(t--)
    {
         memset(valid,false,sizeof(valid));
         cin >> n;
         for(i = 0;i < n;i++)
         {
             cin >> res;
             if(res == n-1 && !valid[0])
                 valid[0] = 1;
             else if(!valid[res])
                 valid[res] = 1;
             else if(valid[res] && !valid[n-res-1])
                 valid[n-res-1] = 1;
         }
         bool print = true;
         for(i = 0;i < n;i++)
         {
             if(!valid[i])
             {
                 print = false;
                 break;
             }
         }
         if(!print)
             cout << "NO\n";
         else
             cout << "YES\n";
    }
    return 0;
}

