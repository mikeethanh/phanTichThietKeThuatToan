#include <bits/stdc++.h>
using namespace std;

map<int, int> C, P, A;

int n, d = 0;
void TRY(int k)
{
    if (k - 1 == n)
    {
        d++;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (A[i] == 0 && C[k - i] == 0 && P[k + i] == 0)
        {
            A[i] = C[k - i] = P[k + i] = 1;
            TRY(k + 1);
            A[i] = C[k - i] = P[k + i] = 0;
        }
    }
}

int main()
{
    cin >> n;
    TRY(1);
    cout << d;
}
