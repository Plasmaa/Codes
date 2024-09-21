#include <iostream>

using namespace std;

int main()
{
    int a[5][5];
    int row = 0, col = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    int moves = 0;

    moves += abs(row - 2);

    moves += abs(col - 2);

    cout << moves << endl;
    return 0;
}
