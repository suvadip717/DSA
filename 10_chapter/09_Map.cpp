#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

    m[1] = "Mumbai";
    m[8] = "Kolkata";
    m[4] = "Delhi";
    m[6] = "Bhutan";

    m.insert({5,"Ranchi"});

    cout<<"Before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 3 -> "<<m.count(3)<<endl;

    m.erase(1);

    cout<<"After erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
}