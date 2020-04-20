#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;

    set <int,greater<int> > get;

    get.insert(num1*num2+num3);
    get.insert(num1+num2*num3);
    get.insert(num1*(num2+num3));
    get.insert((num1+num2)*num3);
    get.insert(num1*num2*num3);
    get.insert(num1+num2+num3);

    auto it = get.begin();
    int p = *it;
    cout<<p<<endl;

	return 0;

}
