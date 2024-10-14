#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> arr, int n){
    int st = n+1, en = arr.size()-1;
    while(st<=en){
        swap(arr[st],arr[en]);
        st++;
        en--;
    }
    return arr;
}

void printArray(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(7);
    v.push_back(9);
    v.push_back(1);
    v.push_back(3);

    printArray(v);
    int n = 2;
    vector<int> arr = reverseArray(v,n);
    printArray(arr);
}