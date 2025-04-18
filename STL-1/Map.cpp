#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    //   Insert

    map<int,int> mp;
    // mp.insert({10,20});
    // cout << mp[10];
    mp[10] = 20;
    mp[2] = 12;
    mp[10] = 15;
    mp[8] = 22;
    // mp[8] = 23;
    mp[17] = 7;
    mp[5] = 9;

    //  not working
    // for(auto [key,value] : mp){
    //     cout << key << "->" << value <<endl;
    // }




    //  Erase

    // mp.erase(8);

    //  not working
    // auto it = mp.find(17);
    // if(it != mp.end()){
    //     mp.erase(it);
    // }

    for(auto it : mp){
        int key=it.first , value=it.second;
        cout << key << "->" << value << endl;
    }



    // Find

    // auto it = mp.find(25);
    // // cout << it->first << " " <<  it->second;

    //  if(it == mp.end()){
    //     cout << "Key Not Found";

    //  }  else{
    //     cout << it->first << " " << it->second ;
    //  } 

   


     cout << mp.size() << endl;
    //  mp.clear();

     cout << mp.empty() <<endl;




    //begin and end
     auto it2 = mp.end();
     it2--;
     cout << it2->first << " " << it2 ->second << endl;


    //  auto it = mp.lower_bound(8);
    //  cout << it->first << " " << it->second << endl;


     auto it = mp.upper_bound(8);
     cout << it->first << " " << it->second << endl;


    


}