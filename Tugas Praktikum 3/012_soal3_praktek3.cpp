#include <iostream>
using namespace std;

int main()
{

    int lapisanBenteng;
    cout << "Inputkan lapisan benteng : ";
    cin >> lapisanBenteng;

    for (int i = 0; i < lapisanBenteng; i++)    // 0   0 < 5 
    {

        for (int j = 0; j < lapisanBenteng; j++)
        {
            // 4-0 - 1 = 3
            // 4 - 1 -1 = 2
            // 4 - 2 - 1= 1
            // 4-3-1=0
            // lapisanbenteng-i-1

            if (j < lapisanBenteng - i - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    return 0;
}