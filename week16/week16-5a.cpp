#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<0)n=-n;
	while((n/10)>0){
		n/=10;
	}
	cout<<n<<endl;
}
