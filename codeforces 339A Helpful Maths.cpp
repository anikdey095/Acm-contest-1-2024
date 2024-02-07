#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;

    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
                if(arr[j]>='0' && arr[j]<='9'){
           if(arr[i]>arr[j]){
            char temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }
    }
    }
        cout<<arr<<endl;
}


