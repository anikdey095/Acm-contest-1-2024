#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,i=1;
    cin>>c;

    while(c--){
        int d,m,y;
        char ch;
        int d1,m1,y1;
        cin>>d>>ch>>m>>ch>>y;

        cin>>d1>>ch>>m1>>ch>>y1;

        if(d<d1){
           m=m-1;
        }
        if(m<m1){
            y=y-1;
        }
        int year=y-y1;

        if(year<0){
            cout<<"Case " <<"#"<<i<<":"<<" Invalid birth date"<<endl;
        }

        else if(year>130) {
            cout<<"Case " <<"#"<<i<<": "<<"Check birth date"<<endl;
        }
        else if(year>=0){
            cout<<"Case " <<"#"<<i<<": "<<year<<endl;
        }
        i++;
    }
}
