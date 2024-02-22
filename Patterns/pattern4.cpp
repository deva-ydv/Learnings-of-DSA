#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char value = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
    return 0;
}

// output

// A B C D E
// F G H I J
// K L M N O
// P Q R S T
