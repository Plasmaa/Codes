#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    string username;
    cin >> username;

    unordered_set<char> characters;
    for (char c : username)
    {
        characters.insert(c);
    }

    if (characters.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
