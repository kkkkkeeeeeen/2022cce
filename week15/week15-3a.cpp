#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n>0){
		if(n<=1000)break;
		n/=1000;
	}
	cout<<n%10;
}
