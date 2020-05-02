#include <iostream>
#include<string>

using namespace std;

int main(){
	string s;
	int count=0;
	cin>>s;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='a')
			count++;
	}
	if((s.length()/2) < count)
		cout<<s.length()<<endl;
	else
		cout<<(count)+(count-1)<<endl;


	return 0;
}
