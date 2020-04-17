#include <iostream>
#include<set>
using namespace std;
int main() {
	 int n;
	 cin>>n;
	 set<int>levels;
	  int x,y;
	  cin>>x;
	  for(int i=0;i<x;i++){
		  int m;
		  cin>>m;
		  levels.insert(m);
	  }
	  cin>>y;
	  for(int i=0;i<y;i++){
		  int w;
		  cin>>w;
		  levels.insert(w);
	  }
	  if(levels.size()==n)
		  cout<<"I become the guy.";
	  else
		  cout<<"Oh, my keyboard!";
	return 0;
}
