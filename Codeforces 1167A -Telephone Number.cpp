#include <iostream>
#include <string>
using namespace std;
 
    int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
        int found=0;
        for (int i = 0; i <= n - 11; i++) {
            if (s[i] == '8') {
                found ++;
                break;
            }
        }
 
        if (found!=0) {
            cout << "yes" << std::endl;
        } else {
            cout << "no" << std::endl;
        }
    }
 
    return 0;
}
