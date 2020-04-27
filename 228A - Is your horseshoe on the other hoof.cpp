#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

	int a,b,c,d,count = 0;
	cin>>a>>b>>c>>d;
	if(a==b && b==c && c==d)
	count+=3;
	else if(a==d && b==c)
	count+=2;
	else if(a==b && c==d)
	count+=2;
	else if(a==c && b==d)
	count+=2;
	else if(a==b && b==c)
	count+=2;
	else if(b==c && c==d)
	count+=2;
	else if(a==b && b==d)
	count+=2;
	else if(a==c && c==d)
	count+=2;
	else if(a==b)
	count++;
	else if(a==c)
	count++;
	else if(a==d)
	count++;
	else if(b==c)
	count++;
	else if(b==d)
	count++;
	else if(c==d)
	count++;
	cout<<count;

	return 0;
}
