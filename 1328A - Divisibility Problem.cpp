#include <iostream>

using namespace std;

int main()
{
	int test,a,b,x,y;
	cin>>test;
	for(int i=0; i<test; i++){
		cin>>a>>b;
		if(a%b==0){
			cout<<0<<endl;
		}
		else{
			x = (a/b)+1;
			y = x*b;
			cout<<y-a<<endl;
		}
	}
	return 0;
}
