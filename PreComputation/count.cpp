#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n, 0), pre(1e5 + 7, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int num : arr)
        pre[num]++;

    int t;
    cin >> t;

    while (t--)
    {
        int q;
        cin >> q;

        cout << pre[q] << endl;
    }

    return 0;
}
// O(N) + O(T) = O(N)

void calc()
{
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int t;
    cin >> t;

    while (t--)
    {
        int q;
        cin >> q;

        int count = 0;

        for (int num : arr)
        {
            if(num == q)
            count++;
        }
        cout<<count<<endl;
    }
}

// O(N) * O(T) = O(N^2)