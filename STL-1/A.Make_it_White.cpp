#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;

        string s;
        cin >> s;
        int firstPos=s.find('B');
        int lastPos=s.rfind('B');

        int res=lastPos - firstPos + 1;

        cout << res << endl;

    }
}
