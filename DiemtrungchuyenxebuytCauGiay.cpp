#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int busStation(int t, int d, vector<int> a)
{
    sort(a.begin(), a.end(), greater<int>());
    int n, Max = 0, T = 0, count = 0, c = 1;
    while (a.size())
    {
        n = a.size();
        for (int i = 0; i < n; ++i)
        {
            if (a[i] <= t) count++;
        }
        if (Max < count) 
        {
            Max = count;
            T = c;
        }
        for (int i = 1; i <= count; ++i) a.pop_back();
        t += d; count = 0; c++;
    }
    return T;
}

int main() {
    int t, d, n, x;
    vector<int> a;

    cin >> t >> d >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        a.push_back(x);
    }

    cout << busStation(t, d, a);

    return 0;
}