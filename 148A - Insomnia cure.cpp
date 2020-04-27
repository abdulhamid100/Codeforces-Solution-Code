#include<iostream>

using namespace std;

int main()
{
    int num1,num2,num3,num4,num;

    cin>>num1>>num2>>num3>>num4>>num;

    int count = 0;
    for(int i = 1; i<=num; i++){

    	if(i%num1 == 0 || i%num2 == 0 || i%num3 == 0 || i%num4 == 0 ){

    		count++;
		}

	}
	cout<<count<<endl;

	return 0;
}
