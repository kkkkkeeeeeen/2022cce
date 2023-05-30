#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	printf("%02d:%02d:%02d",n/(60*60),n/60%60,n%60);
}
