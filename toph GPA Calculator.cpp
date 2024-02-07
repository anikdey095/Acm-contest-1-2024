#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,i=1;
    cin>>c;
    while(c--){
    int n;
    cin>>n;
    float arr[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    std::cout << std::fixed << std::setprecision(3) << "Case " <<i<<": "<< sum/n << std::endl;
    i++;

}
}
