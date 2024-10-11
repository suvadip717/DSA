#include<iostream>
using namespace std;

void printArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int smallest = i;
        for(int j=i+1; j<n; j++){
            if( arr[j]<arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[smallest], arr[i]);
    }
}

int main(){
    int arr[6] = {4,7,2,9,1,5};
    printArray(arr,6);
    selectionSort(arr,6);
    printArray(arr,6);
    return 0;
}