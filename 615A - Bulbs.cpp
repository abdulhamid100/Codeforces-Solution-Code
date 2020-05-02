#include <bits/stdc++.h>

using namespace std;

int main(){

	set <int> s;
	int n,m,a,b;
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>a;
		for(int j=0; j<a; j++){
			cin>>b;
			s.insert(b);
		}
	}
	if(m == s.size())
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
