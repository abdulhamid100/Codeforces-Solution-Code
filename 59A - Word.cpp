#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string word;
    cin>>word;
    int small=0,big=0;

    for(int i=0; i<word.size(); i++)
    {
    	if(word[i] <= 122 && word[i]>=97)
    	small++;
    	else
    	big++;
	}
	if(small >= big)
	transform(word.begin(),word.end(),word.begin(),::tolower);
	else
	transform(word.begin(),word.end(),word.begin(),::toupper);

	cout<<word<<endl;

	return 0;

}
