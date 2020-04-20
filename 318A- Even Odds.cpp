#include <iostream>

using namespace std;

int main()
{
    long long num, index;
    cin >> num >> index;
    if (index <= (num + 1) / 2)
    {
        cout << index * 2 - 1 << endl;
    }
    else
    {
        cout << (index - (num + 1) / 2) * 2 << endl;
    }
    return 0;
}
