#include <iostream>
#include <string>

using namespace std;

int main()
{
    // input : (string) S
    
    string S;
    int result = 1;

    getline(cin, S);

    if (S.length() == 1 && S[0] == ' ')
    {
        cout << 0;
        return 0;
    }

    for (int i =1; i< S.length() - 1; i++){
        if (S[i] == ' ')
        {
            result++;
        }
    }

    cout << result;
    return 0;
}