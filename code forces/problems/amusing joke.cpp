#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool canFormNames(const string& guest, const string& host, const string& pile)
{
    unordered_map<char, int> charCount;

    // Count the occurrences of each letter in the guest's name
    for (char c : guest)
        charCount[c]++;

    // Count the occurrences of each letter in the host's name
    for (char c : host)
        charCount[c]++;

    // Decrement the count for each letter found in the pile
    for (char c : pile)
        charCount[c]--;

    // Check if any count is not zero, indicating extra letters or missing letters
    for (const auto& pair : charCount)
    {
        if (pair.second != 0)
            return false;
    }

    return true;
}

int main()
{
    string guest, host, pile;
    cin >> guest >> host >> pile;

    if (canFormNames(guest, host, pile))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
