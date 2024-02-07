#include<bits/stdc++.h>
using namespace std;
int main()
         {
            int n;
            cin>>n;
            int arr[n];
            int freq[1001]={0};
            for(int i=0;i<n;i++){
                cin>>arr[i];
                freq[arr[i]]++;
            }
            int mx=0,count=0;
            for(int i=0;i<1001;i++){
                if(freq[i]>0){
                    mx=max(mx,freq[i]);
                    count++;
                }
            }
            cout<<mx<<" "<<count;;
         }
