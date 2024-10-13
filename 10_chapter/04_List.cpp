#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> n(5,100);
    cout<<"Printing n"<<endl;
    for(int i : n){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> l;

    l.push_back(4);
    l.push_back(2);
    l.push_back(8);
    l.push_back(9);

    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"size of list "<<l.size()<<endl;
}