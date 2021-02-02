#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define forn(i, n) for (int i = 0; i < (int)n; ++i)
#define all(v) v.begin(), v.end()
#define allgreater(v) v.begin(), v.end(), greater<int>()
#define formap(map) for (const auto &[key, value] : map)
#define ms(ar, val) memset(ar, val, sizeof ar)
typedef long long ll;
typedef long double ld;

using namespace std;

int main()
{
    int n, copy, key, ma = 0;

    cin >> n;

    unordered_map<int, int> m;
    copy = n;
    while (n)
    {
        cin >> key;
        m[key]++;
        ma = max(ma, m[key]);
        n--;
    }

    cout << (copy - ma) << endl;
}