#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,ans=0;
	vector<int>a;
	while(cin>>n){
		if(n==999)break;
		a.push_back(n);
	}
	for(int i=0;i<a.size()+1;i++){
		cout<<"Enter an integer ( 999 to end ): "<<endl;
	}
	for(int i=0;i<a.size();i++){
		ans+=a[i];
	}
	cout<<"The total is: "<<ans;
}
