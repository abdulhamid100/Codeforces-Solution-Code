#include <iostream>

using namespace std;

int main(){
	int num,a,b;
	cin>>num;
	for(int i=0; i<num; i++){
		cin>>a>>b;
		if(a==b)
			cout<<0<<endl;
		else if((a>b && (a-b)%2==0) || (a<b && (b-a)%2==1))
			cout<<1<<endl;
		else
			cout<<2<<endl;
	}
	return 0;
}
