#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int num = 10; 

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << num;
            num--;
        }
        cout << endl;
    }
    
    return 0;
}
