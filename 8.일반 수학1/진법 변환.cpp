#include <iostream>
#include <string>

using namespace std;

int main()
{
    // input : (string) B
    // input : (int) N

    string B;
    int N;
    cin >> B >> N;
    int B_length = B.length();
    long int result = 0;

    for (int i = 0; i < B_length; i++)
    {
        long int tmp;
        if (B[i] >= '0' && B[i] <= '9')
        {
            tmp = B[i] - '0';
        }
        else
        {
            tmp = B[i] - 'A' + 10;
        }
        for (int j = 0; j < i; j++)
        {
            tmp *= N;
        }

        result += tmp;
    }

    cout << result;
    return 0;

}