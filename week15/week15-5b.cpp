#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		cin>>b[i];
		cout<<a[i]+b[i]<<" ";
	}
}
