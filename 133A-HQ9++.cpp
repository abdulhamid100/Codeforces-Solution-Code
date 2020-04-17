#include<bits/stdc++.h>

using namespace std;

int main()
{
	string x;
	cin>>x;
	int count=0;
	for(int i=0; i<x.size(); i++)
	{
		if(x[i] == 'H' || x[i] == 'Q' || x[i] == '9')
		{
		    count++;
		    break;
	    }

	}
	if(count>0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;

	return 0;

}
