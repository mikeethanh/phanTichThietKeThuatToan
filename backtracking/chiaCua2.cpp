#include <bits/stdc++.h>
using namespace std;

int n, a[25];
double t = 0, res = 1e9;
void TRY(int k, int x, int y)
{
    cout << "Buoc k: " << k << " " << x << " " << y << endl;
    if (k - 1 == n)
    {
        cout << "ans: " << k << " " << x << " " << y << endl;
        res = min(res, 1.0 * (y - x));
        cout << endl;
    }
    else
    {
        // xet nua dau
        if (x + a[k] <= t)
        {
             cout << "TRY: " <<k + 1 << " "<<x + a[k]<< " " <<y<<endl;
            TRY(k + 1, x + a[k], y);
        }
        // xet nua sau
        if (y + a[k] <= t + res / 2)
        {
             cout << "TRY: " <<k + 1 << " "<<x<< " " <<y+ a[k]<<endl;
            TRY(k + 1, x, y + a[k]);
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        t += a[i];
    }
    t /= 2;
    TRY(1, 0, 0);
    cout << "\n"
         << res << "\n";
}