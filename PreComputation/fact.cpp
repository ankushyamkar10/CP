#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n, 0), fact(n, 0);
    fact[0] = fact[1] = 1;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
        fact[i] = fact[i-1] * i;;

    int t;
    cin >> t;

    while (t--)
    {
        int q;
        cin >> q;

        cout << fact[q] << endl;
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

        int fact = 1;

    for (int i = 2; i < n; ++i)
        {
            fact *= i;
            
        }
        cout<<fact<<endl;
    }
}
// O(N) * O(T) = O(N^2)
