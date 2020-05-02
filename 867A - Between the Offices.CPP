#include <iostream>
#include<string>

using namespace std;

int main(){
	int char_array_size;
	cin>>char_array_size;
	char word[char_array_size];
	int yes=0,no=0;
	for(int i=0; i<char_array_size; i++){
		cin>>word[i];
	}
	for(int i = 0; i<char_array_size-1; i++){
		if(word[i]=='S' && word[i+1]=='F')
			yes++;
		else if(word[i]=='F' && word[i+1]=='S')
			no++;
	}
	if(yes>no)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
