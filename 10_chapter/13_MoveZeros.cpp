#include<iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int> &arr){
    int i = 0;
    for(int j=0; j<arr.size(); j++){
        if(arr[j]!=0){
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

void printArray(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(5);
    v.push_back(6);
    v.push_back(0);
    v.push_back(2);
    v.push_back(7);
    v.push_back(0);

    printArray(v);
    moveZeros(v);
    printArray(v);
}