#include <iostream>

using namespace std;

int main(){
	int num,a,b;
	cin>>num;
	for(int i=0; i<num; i++){
		cin>>a>>b;
		a = (23-a)*60;
		b = (60-b);
		cout<<a+b<<endl;
	}
	return 0;
}
