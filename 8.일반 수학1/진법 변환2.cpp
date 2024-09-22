#include <iostream>
#include <string>

using namespace std;

int main()
{
    // input : (int) B, N

    int B, N;
    cin >> B >> N;
    string result = "";
    while(B > 0)
    {
        int tmp = B % N;
        if (tmp < 10)
        {
            result = (char)(tmp - '0') + result;
        }
        else
        {
            result = (char)(tmp - 10 + 'A') + result;
        }
        B /= N;
    }

    cout << result;
    return 0;

}