//C++ 11 Vahe Danielyan
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iterator>
#include <set>
#include <vector>
#include <queue>
#include <list>
#include <string>
#include <iomanip>
#include <cassert>
using namespace std;
int res[1000];
void transform(string source,string& dest)
{
	int i,depth,next = 0;
	for(i = 0;i < (int)source.length();i++)
	{
		next = 0;
		depth = 1;
		while(source[i]==source[i+1])
		{
			depth++;
			i++;
		}
		while(depth)
		{
			res[next++] = depth%10;
			depth/=10;
		}
		for(int j = next-1;j >= 0;j--)
		{
			dest.push_back(res[j]+'0');
		}
		dest.push_back(source[i]);
	}
}
int main()
{
	int t;
	cin >> t;
	string s;
	cin >> s;
	while(t--)
	{
		string dest;
		transform(s,dest);
		s = dest;
		//cerr<<s<<endl;
	}
	cout << s <<endl;
	return 0;
}
