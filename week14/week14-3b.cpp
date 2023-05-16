#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<=1500)cout<<"100";
	else{
		if((n-1500)%250==0)cout<<100+((n-1500)/250)*5;
		else cout<<105+((n-1500)/250)*5;
	}
	return 0;
}
