#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    // pair<string,int> student= { "Uttam",100};

    // cout << student.first <<" " << student.second;



    // int n;
    // cin >> n;
    // pair<string, int> student[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> student[i].first >> student[i].second;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout <<student[i].first << " " << student[i].second <<endl;
    // }
    



    // Not working
    // for (auto [x, y] : student)
    // {
    //     cout << x << " " << y <<endl;
    // }
    





    // tuple<string,int,string> t= { "karim",10,"0191"};
    // auto [name,roll,phone] = t;
    // cout << name << " "<< roll << " " << phone;

    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t);

    pair<string,pair<int,string> > p ={"uttam",{7,"013"}};
    string name=p.first;
    int roll=p.second.first;
    string phone=p.second.second;

    cout << name << " " << roll << " " << phone ;

    
    

    return 0;
    









}