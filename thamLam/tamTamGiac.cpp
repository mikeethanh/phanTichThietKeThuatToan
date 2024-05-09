int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1, i <= n ; i++)
        cin >> a[i];
    sort(a, a + n);
    int res = 1, l = 1;
    for (int r = 2; r < n; r++)
    {
        while (a[l] + a[l + 1] <= a[r]) 
            l++;
        res = max(res, r - l + 1);
    }
    if (res < 3)
        cout << "Khong the tao ra day thoa man";
    else
        cout << res;
}