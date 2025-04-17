#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


int n;
cin >> n;
deque<int>d;

for (int i = 0; i < n; i++)
{
    int x;
    cin >> x;

    d.push_back(x);

}

d.push_front(1);
d.push_front(10);
d.pop_front();



for(auto value : d){

    cout << value << " " ;
}
cout << endl;
}