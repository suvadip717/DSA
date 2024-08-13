#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start =0;
    int end = size-1;

    // int mid = (start+end)/2;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        // Go to right side
        if(key>arr[mid]){
            start = mid+1;
        }
        else{ //otherwise go to left side
            end = mid-1;
        }
        // mid = (start+end)/2;
         mid = start+(end-start)/2;
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int even_index = binarySearch(even,6,6);
    cout<<"Index of 6 is "<<even_index<<endl;

    int odd_index = binarySearch(odd,5,14);
    cout<<"Index of 14 is "<<odd_index<<endl;

    return 0;
}