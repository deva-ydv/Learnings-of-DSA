#include <iostream>
using namespace std;

int factorail(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{

    int num = factorail(n);
    int denom = factorail(r) * factorail(n - r);
    int ans = num / denom;
    return ans;
}

int main()
{

    int n, r;
    cin >> n >> r;

    cout << "answer is " << nCr(n, r) << endl;

    return 0;
}