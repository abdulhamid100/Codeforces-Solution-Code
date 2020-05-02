#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int test, permutation;
    cin >> test;
    vector<int> arr(test+1);
    for (int i = 1; i <= test; ++i)
    {
        cin >> permutation;
        arr[permutation] = i;
    }
    cout << arr[1];
    for (int i = 2; i <= test; ++i)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    return 0;
}
