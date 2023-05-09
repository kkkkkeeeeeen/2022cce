#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	string n;int a=0,b=0;
  	cin>>n;
 	reverse(n.begin(),n.end());
  	for(int i=0;i<n.size();i++){
 		b+=(n[i]-'0')*pow(2,i);

 	}
 	cout<<b<<endl;
}
