#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,ans=1;
	cin>>n;
	int v;
	vector<int>a;
	while(cin>>v)a.push_back(v);
	cout<<"Enter the number of values to be processed: ";
	for(int i=0;i<n;i++){
		cout<<"Enter a value: ";
	}
	for(int i=0;i<a.size();i++){
		ans*=a[i];
	}
	cout<<"Product of the "<<n<<" values is "<<ans;
}
