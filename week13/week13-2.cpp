#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string a;
	cin>>a;
	string b=a;
	reverse(b.begin(),b.end());
	if(a==b)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
