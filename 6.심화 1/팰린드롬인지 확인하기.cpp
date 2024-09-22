#include <iostream>
#include <string>

using namespace std;

int main()
{
    // input : (string) S

    string S;
    cin >> S;
    int S_length = S.length();
    for (int i = 0; i < S_length / 2; i++)
    {
        if (S[i] != S[S_length - 1 - i])
        {
            cout << 0;
            return 0;
        }
    }

    cout << 1;
    return 0;
}