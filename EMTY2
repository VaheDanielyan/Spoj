//DanieV C++
#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
      int t;
      cin >> t;
      char c[120002];
      int p=1;
      while(t--)
      {
              scanf("%s",c);
              vector<int>v;
              int i=0;
              while(c[i]!='\0')
              {
                    v.push_back(c[i]-'0');
                    int u=v.size();
                    if(u>=3)
                    {
                           if(v[u-1]==0 && v[u-2]==0 && v[u-3]==1)
                           {
                                    v.erase(v.begin()+u-1);
                                    v.erase(v.begin()+u-2);
                                    v.erase(v.begin()+u-3);
                           }
                    }
                    i++;
              }
              printf("Case %d: ",p);
              if(v.size()==0)
                 printf("yes\n");
              else
                 printf("no\n");
              p++;
     }
     return 0;
}
