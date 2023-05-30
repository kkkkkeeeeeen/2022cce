#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string a;
	cin>>a;
	string b=a;
	reverse(a.begin(),a.end());
	if(a==b)cout<<"YES";
	else cout<<"NO";
	return 0;
}
