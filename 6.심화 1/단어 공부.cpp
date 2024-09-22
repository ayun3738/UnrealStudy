#include <iostream>
#include <string>

using namespace std;

int main()
{
    // input : (string) S

    string S;
    cin >> S;
    int S_length = S.length();
    int count[26] = {0,};

    for (int i = 0; i < S_length; i++)
    {
        char tmp = S[i];
        if (tmp >= 'a' && tmp <= 'z')
            count[S[i] - 'a']++;
        else
            count[S[i] - 'A']++;
    }
    
    int max_num = 0;
    int max_index = 0;
    int dual_check = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > max_num)
        {
            max_num = count[i];
            max_index = i;
            dual_check = 0;
        }
        else if (count[i] == max_num)
        {
            dual_check = 1;
        }
    }

    if (dual_check == 1)
    {
        cout << "?";
    }
    else
    {
        cout << (char)(max_index + 'A');
    }

    return 0;
}