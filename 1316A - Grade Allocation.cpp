#include <iostream>
#include<string>

using namespace std;

int main(){
	int test,num,max,student;
	cin>>test;
	for(int i=0; i<test; i++){
		cin>>student>>max;
		int total_num = 0;
		for(int j=0; j<student; j++){
			cin>>num;
		    total_num+=num;
		}
		if(total_num >= max)
		cout<<max<<endl;
		else
			cout<<total_num<<endl;

	}

	return 0;
}
