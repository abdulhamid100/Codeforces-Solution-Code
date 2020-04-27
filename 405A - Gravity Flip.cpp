#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num,size;
	cin>>size;
	int array[size];
	for(int i=0; i<size; i++){
		cin>>num;
		array[i] = num;
	}
	sort(array,array+size);
	for(int i=0; i<size-1; i++){
		cout<<array[i]<<" ";
	}
	cout<<array[size-1]<<endl;
	return 0;
}
