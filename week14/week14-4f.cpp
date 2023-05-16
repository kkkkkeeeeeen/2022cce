#include <iostream>
using namespace std;
int main()
{
	char c;
	cin>>c;
	if(islower(c))cout<<"L";
	else if(isupper(c))cout<<"U";
	else if(isalnum(c))cout<<"D";
	else cout<<"O";
	return 0;
}
