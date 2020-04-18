#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name,p;

    cin>>name;

    int a=0 ,b=0 , c=0,d=0,e=0;

    for(int i=0; i<name.size(); i++)
    {
    	if(name[i] >= 65 && name[i] <= 90)
		a++;
	}
	if(a == name.size())
	b++;

	if(name[0] >= 97 && name[0] <=122)
	c++;
	for(int i=1; i<name.size(); i++)
    {
    	if(name[i] >= 65 && name[i] <= 90)
		d++;
	}
	if(name.size() == d+1)
	e++;

	if(b == 1)
	{
		for(int i=0; i<name.size(); i++)
        {
        	name[i] = name[i]+32;

        }
        cout<<name<<endl;
	}
	else if(c == 1 && e == 1)
	{
		name[0] = name[0]-32;
		for(int i=1; i<name.size(); i++)
           name[i] = name[i] + 32;

           cout<<name<<endl;
	}
	else
	{
	   cout<<name<<endl;
	}
	return 0;

}
