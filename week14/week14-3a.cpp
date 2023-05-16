#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a50= n/50;
	int a10= n%50/10;
	int a5= n%10/5;
	int a1= n%5/1;
	cout<<n<<"="<<"50*"<<a50<<"+10*"<<a10<<"+5*"<<a5<<"+1*"<<a1;
}
