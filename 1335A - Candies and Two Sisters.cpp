#include <iostream>

using namespace std;

int main()
{
	int test,a,x;
	cin>>test;
	for(int i=0; i<test; i++){
		cin>>a;
		x = (a/2)+1;
		cout<<a-x<<endl;
	}
	return 0;
}
