#include <iostream>
#include<string>

using namespace std;

int main(){
	string s;
	int test;
	cin>>test;
	for(int i=0; i<test; i++){
		cin>>s;
		if(s[s.length()-1] == 'u')
			cout<<"JAPANESE"<<endl;
		else if(s[s.length()-1] == 'o')
			    cout<<"FILIPINO"<<endl;
		else if(s[s.length()-1] == 'a')
					cout<<"KOREAN"<<endl;
	}


	return 0;
}
