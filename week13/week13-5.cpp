#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int v;
	vector<int>a;
	while(cin>>v)a.push_back(v);
	for(int i=0;i<a.size();i++)cin>>a[i];
	for(int i=0;i<a.size();i++){
		cout<<a[i]*a[i]<<",";
	}
	cout<<endl;
}
