#include <iostream>
#include <string>

using namespace std;

int main()
{
    // input : (int) N
    // input * N : (string) S

    int N;
    cin >> N;
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;
        int S_length = S.length();
        int count[26] = {0,};
        int flag = 0;
        for (int j=0; j<S_length; j++)
        {
            if (S[j] == S[j+1])
            {
                continue;
            }
            else
            {
                if (count[S[j] - 'a'] == 0)
                {
                    count[S[j] - 'a']++;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            result++;
        }
    }

    cout << result;
    return 0;
}