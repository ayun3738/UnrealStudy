#include <iostream>
#include <string>

using namespace std;

int main()
{
    // input : (string) arr[5][?] (0 <= ? <= 15)

    string arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];    

}