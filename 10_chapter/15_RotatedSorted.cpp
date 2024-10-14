#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool check(vector<int> arr){
    int n = arr.size();
    int count = 0;
    //If array is rotate
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    //If array is not rotate
    if(arr[0]<arr[n-1]){
        count++;
    }

    return count <= 1;
}

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    printArray(v);
    cout<<"Array is sorted and rotated: "<<check(v)<<endl;

}