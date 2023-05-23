#include <iostream>
using namespace std;
int main()
{
	int n,max=0,min=10000;
	while(cin>>n){
		if(n==0)break;
		if(n<min)min=n;
		if(n>max)max=n;
	}
	cout<<"["<<min<<","<<max<<"]";
}
