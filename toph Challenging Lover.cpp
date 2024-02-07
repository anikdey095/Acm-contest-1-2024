#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,sum=0;
        cin >> n;
        for (int i = 1; i <= n;i++)
        {
            if (n%i==0){
                sum += i;
            }
        }
         if(sum==1)
        {
            cout<<"No"<<endl;
        }
        else if(sum==2)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
        int count = 0;
        for (int i = 2; i < sum;i++){
            if(sum%i==0){
                count = 1;
            }
        }
        if (count == 1) {
                cout << "No" << endl;
            }
            else{
                cout << "Yes" << endl;
            }
    }
    }
}

