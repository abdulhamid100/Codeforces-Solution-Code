#include<bits/stdc++.h>
#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main()
{
    int array_size;
    set <int,greater<int> > l;
    cin>>array_size;
    int array[array_size],num,count=0;
    for(int i=0; i<array_size; i++)
    {
    	cin>>num;
		array[i] = num;
	}
	for(int i=0; i<array_size-1; i++)
    {
    	if(array[i] <= array[i+1])
    	count++;
    	else
    	{
    		l.insert(count);
    		count = 0;
		}
	}
	l.insert(count);
	auto it = l.begin();
	cout<<*it+1<<endl;

	return 0;

}
