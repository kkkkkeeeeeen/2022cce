#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,ans=0;
	vector<int>a;
	while(cin>>n){
		if(n==0)break;
		a.push_back(n);
	}
	//for(int i=0;i<a.size();i++)cin>>a[i];
	int v;
	cin>>v;
	for(int i=0;i<a.size();i++){
		if(a[i]==v)ans++;
	}
	cout<<ans<<endl;
}
