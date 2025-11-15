#include <iostream>
#include <string>
using namespace std;

string toVaporwave(string str)
{
    string vaporwaveStr = "";

    for (char c : str)
    {
        if (c != ' ')
        {
            c = toupper(c);
            vaporwaveStr += c;
        }

        vaporwaveStr += ' ';
    }

    return vaporwaveStr;
}

int main()
{

    string str;
    getline(cin, str);

    cout << toVaporwave(str) << endl;

    return 0;
}