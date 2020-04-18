#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string first,second;
    cin>>first;
    reverse(first.begin(),first.end());
    cin>>second;
    if(first == second)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

	return 0;

}
