#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cin >> c;
    for(int i=1;i<=c;i++){
            int a,b,sum=0;
            cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i%2!=0)
             {
                sum+=i;
             }
         }
    cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
