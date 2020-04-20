#include<iostream>

using namespace std;

bool binary_search(int array[],int array_size,int num)
{
	int left = 0, right = array_size-1, mid = 0;

	while(left<=right){

		mid = (left+right)/2;

	if(num <= array[mid])
	  {
	  	right = mid - 1;
	  }
	else
	   {
	    	left = mid + 1;
     }
}
       if(array[mid] == num)
       return true;
       else
       return false;
}

int main()
{
	int array_size,num,search_number_in_array;
	cout<<"Enter the Array size: ";
	cin>>array_size;
	int ar[array_size];
	cout<<endl<<"Enter the Array Element: ";
	for(int i=0; i<array_size; i++)
	{
		cin>>num;
		ar[i] = num;
	}
	cout<<endl<<"Which number you want to search in the array: ";
	cin>>search_number_in_array;

  bool p = binary_search(ar,array_size,search_number_in_array);
	if(p)
	cout<<"Your number is found in the array"<<endl;
	else
	cout<<"Your number is not in the array"<<endl;

	return 0;
}
