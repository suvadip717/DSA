#include<iostream>
using namespace std;

int FirstPostion(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == key){
            ans=mid;
            end=mid-1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int LastPostion(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == key){
            ans=mid;
            start=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }else{
            end=mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int main(){
    int test1[5]={1,2,3,3,3};
    int test2[6]={1,2,3,3,3,3};

    int index1 = FirstPostion(test1,5,3);
    int index2 = LastPostion(test1,5,3);
    cout<<"First index is "<<index1<<endl;
    cout<<"Last index is "<<index2<<endl;

    int index3 = FirstPostion(test2,6,3);
    int index4 = LastPostion(test2,6,3);
    cout<<"First index is "<<index3<<endl;
    cout<<"Last index is "<<index4<<endl;

    return 0;
}