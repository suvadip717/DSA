#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(7);
    maxi.push(2);
    maxi.push(5);
    maxi.push(1);

    cout<<"size-> "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(5);
    mini.push(9);
    mini.push(3);
    mini.push(7);
    int m = mini.size();
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"Is empty or not "<<mini.empty()<<endl;
}