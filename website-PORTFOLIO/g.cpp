#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int,greater<int>> m;
      m.insert(40);
    m.insert(30);
    m.insert(60);
    m.insert(20);
    m.insert(50);
    for(auto value:m){
        cout<<value<<endl;
    }
    return 0;
}