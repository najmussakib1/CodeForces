#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            int n;
            cin >> n;

            vector<int> a(n);
            bool has_duplicate = false;
            vector<int> freq(101, 0);

            for (int i = 0; i < n; ++i)
            {
                cin >> a[i];
                if (freq[a[i]] > 0)
                {
                    has_duplicate = true;
                }
                freq[a[i]]++;
            }

            if (has_duplicate)
            {
                cout << -1 << endl;
            }
            else
            {

                sort(a.rbegin(), a.rend());
                for (int i = 0; i < n; ++i)
                {
                    cout << a[i] << (i == n - 1 ? "" : " ");
                }
                cout << endl;
            }
        }
    }
    return 0;
}
