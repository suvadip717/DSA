#include<iostream>
using namespace std;

int main(){
    int n, t, arr[100];
    cout<<"Enter number of test cases: ";
    cin>>n;
    for(int i =0; i<n; i++){
      cout<<"Enter size of array: ";
      cin>>t;
      int res=0;
      for(int j=0; j<t; j++){
        cin>>arr[j];
        res^=arr[j];
      }
      for(int j=1; j<t; j++){
        res^=j;
      }
      cout<<res<<endl;
    }
    return 0;
}