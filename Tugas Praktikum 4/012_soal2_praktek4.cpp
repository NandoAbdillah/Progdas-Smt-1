#include <iostream>
using namespace std;

int main()
{
    int num[7];

    for (int i = 0; i < 7; i++)
        cin >> num[i];

    cout << "Urutan asli : ";

    for (int m = 0; m < 7; m++)
        cout << num[m] << " ";

    cout << endl;

    cout << "Urutan terbalik : ";
    for (int n = 6; n >= 0; n--)
        cout << num[n] << " ";

    return 0;
}