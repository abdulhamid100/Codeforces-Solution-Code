#include<iostream>

using namespace std;

bool ternarySearch(int ar[], int left, int right, int num)
{
if (left <= right)
{
		int mid1 = left + right/3;
		int mid2 = mid1 + right/3;

		if (ar[mid1] == num) return true;

		if (ar[mid2] == num) return true;

		if (num < ar[mid1]) return ternarySearch(ar, left, mid1-1, num);

		if (num > ar[mid2]) return ternarySearch(ar, mid2+1, right, num);

		return ternarySearch(ar, mid1+1, mid2-1, num);
}
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

  bool p = ternarySearch(ar,0,array_size-1,search_number_in_array);
	if(p)
	cout<<"Your number is found in the array"<<endl;
	else
	cout<<"Your number is not in the array"<<endl;

	return 0;
}
