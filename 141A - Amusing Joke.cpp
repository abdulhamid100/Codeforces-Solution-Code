#include<iostream>
#include<string>

using namespace std;

int main(){
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	string s4 = s1+s2;

	for(int i=0; i<s3.length(); i++){
		for(int j=i+1; j<s3.length(); j++){
			char temp;
			if(s3[i]>s3[j]){
				temp = s3[i];
				s3[i] = s3[j];
				s3[j] = temp;
			}
		}
	}
	for(int i=0; i<s4.length(); i++){
			for(int j=i+1; j<s4.length(); j++){
				char temp;
				if(s4[i]>s4[j]){
					temp = s4[i];
					s4[i] = s4[j];
					s4[j] = temp;
				}
			}
		}
	if(s3.compare(s4) == 0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}
