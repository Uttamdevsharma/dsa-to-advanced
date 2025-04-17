#include<bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
//    int n;
//    cin >> n;
//    vector<int> v;

//    for (int i = 0; i < n; i++)
//    {
//     int x;
//     cin >> x;
//     v.push_back(x);      
//    }
//    v.pop_back();

//    for (int i = 0; i < v.size(); i++)
//    {
//      cout << v[i] << " ";
//    }

//    cout << endl;
//    cout << v.front();
//    cout << v.back();

 
//    cout << v.empty();


// int n;
// cin >> n;
// vector<int> v(n,5);

// for (int i = 0; i < n; i++)
// {
//     cout << v[i];
    
// }



// int n;
// cin >> n;
// vector<int>v;
// v.assign(n,5);
// for (int i = 0; i < n; i++)
// {
//     cout << v[i];
// }




// vector<int>v;
// v.resize(4);
// cout << v.size() << endl;


// for (int i = 0; i < v.size(); i++)
// {
//     cin >> v[i];
// }

// for (int i = 0; i < v.size(); i++)
// {
//     cout << v[i];
// }



// int n;
// cin >> n;
// vector<int>v;

// for (int i = 0; i < n; i++)
// {
//     int x;
//     cin >> x;

//     v.push_back(x);

// }

// for (auto it = v.begin(); it != v.end(); it++)
// {
//     cout << *it << " ";
// }



// int n;
// cin >> n;
// vector<int>v;

// for (int i = 0; i < n; i++)
// {
//     int x;
//     cin >> x;

//     v.push_back(x);

// }

// for (auto it = v.rbegin(); it != v.rend(); it++)
// {
//     cout << *it << " ";
// }






//reverse4

// int n;
// cin >> n;
// vector<int>v;

// for (int i = 0; i < n; i++)
// {
//     int x;
//     cin >> x;

//     v.push_back(x);

// }
// reverse(v.begin(),v.end());

// for(int value : v){
//     cout << value << " ";
// }





//sort

// int n;
// cin >> n;
// vector<int>v;

// for (int i = 0; i < n; i++)
// {
//     int x;
//     cin >> x;

//     v.push_back(x);

// }
// sort(v.begin(),v.end(),greater<int>());

// for(auto value : v){
//     cout << value << " ";
// }  
// }



//minelement
//maxelement and their position

int n;
cin >> n;
vector<int>v;

for (int i = 0; i < n; i++)
{
    int x;
    cin >> x;

    v.push_back(x);

}

for(auto value : v){

    cout << value << " " ;
}
cout << endl;


auto mx = max_element(v.begin(),v.end());
int maxelementPosition = mx - v.begin();
cout << maxelementPosition;


}



