#include<iostream>

using namespace std;

int main()
{
    int num1,num;

    cin>>num1;

    int ar[num1],p;
    for(int i = 1; i<=num1; i++){

       cin>>num;
       ar[i] = num;

	}
	for(int i = 1; i<=num1-2; i++){

      int a = ar[i];
      int b = ar[i+1];
      int c = ar[i+2];
      int x = b - a;
      int y = c - b;

      if(x%2!=0 && y%2!=0){
      	p = i+1;
      	break;
	  }
	  else if(x%2!=0){
      	p = i;
      	break;
	  }
	  else if(y%2!=0 ){
	  	p = i+2;
      	break;
	  }

	}
	cout<<p<<endl;


	return 0;
}
