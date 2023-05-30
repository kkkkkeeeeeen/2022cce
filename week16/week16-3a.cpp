#include <iostream>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(s1.size()>s2.size())cout<<1;
	else if(s1.size()==s2.size())cout<<0;
	else  cout<<"-1";
}
