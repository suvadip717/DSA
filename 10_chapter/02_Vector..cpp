#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

     v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;
    cout<<"Element at 2nd index is-> "<<v[2]<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size "<<v.size()<<endl;

    vector<int> a(5,1);
    for(int i : a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> b(a);
    for(int i : b){
        cout<<i<<" ";
    }
    cout<<endl;
}