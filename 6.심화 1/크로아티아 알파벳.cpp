#include <iostream>
#include <string>

using namespace std;

int main()
{
    // input : (string) S

    string S;
    cin >> S;
    int S_length = S.length();
    int result = 0;
    for (int i = 0; i < S_length; i++)
    {
        if (S[i] == 'c' && S[i + 1] == '=')
        {
            i++;
        }
        else if (S[i] == 'c' && S[i + 1] == '-')
        {
            i++;
        }
        else if (S[i] == 'd' && S[i + 1] == 'z' && S[i + 2] == '=')
        {
            i += 2;
        }
        else if (S[i] == 'd' && S[i + 1] == '-')
        {
            i++;
        }
        else if (S[i] == 'l' && S[i + 1] == 'j')
        {
            i++;
        }
        else if (S[i] == 'n' && S[i + 1] == 'j')
        {
            i++;
        }
        else if (S[i] == 's' && S[i + 1] == '=')
        {
            i++;
        }
        else if (S[i] == 'z' && S[i + 1] == '=')
        {
            i++;
        }
        result++;
    }

    cout << result;
    return 0;
}