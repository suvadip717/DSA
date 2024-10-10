#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pagesCount = 0;

    for(int i=0; i<n; i++){
      if(pagesCount+arr[i] <= mid){
        pagesCount += arr[i];
      }
      else{
        studentCount++;
        if(studentCount > m || arr[i]>mid){
            return false;
        }
        pagesCount = arr[i];
      }
    }
    return true;
}

int findPages(int arr[], int n, int m){
    int start =0;
    int sum = 0;

    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end-start)/2;

    while (start<=end && m<=n)
    {
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int array[4]= {12, 34, 67, 90};
    cout<<"Maximum count of pages is: "<<findPages(array,4,2)<<endl;
}