#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string a;
	cin>>a;
	string b=a;
	reverse(b.begin(), b.end());
	cout<<b<<endl;
}
