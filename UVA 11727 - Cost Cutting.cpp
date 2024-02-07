#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int a, b, c, mid;
        cin >> a >> b >> c;

        if ((a < b && b < c) || (c < b && b < a)) {
            mid = b;
        }
        else if ((b < a && a < c) || (c < a && a < b)) {
            mid = a;
        }
        else {
            mid = c;
        }

        cout << "Case " << i << ": " << mid << endl;
    }

    return 0;
}
