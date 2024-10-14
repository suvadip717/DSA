#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotate(vector<int>& nums, int k) {
      vector<int> temp(nums.size());

      for(int i=0; i<nums.size(); i++){
        temp[(i+k)%nums.size()]=nums[i];
      }
      nums = temp; 
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    printArray(v);
    rotate(v,3);
    printArray(v);

}