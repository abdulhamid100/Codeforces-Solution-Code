#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int num;
	cin>>num;
	if(num%2==1){
		cout<<-((num+1)/2)<<endl;
	}
	else
	{
		cout<<(num+1)/2<<endl;
	}
	return 0;
}
