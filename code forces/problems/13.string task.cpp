#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string input;
    cin >> input;

    string result;
    for (char c : input)
    {
        c = tolower(c);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            result += '.';
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}
