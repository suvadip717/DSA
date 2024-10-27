#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int sumOfRow(int arr[][4],int row, int col){
    int max = 0;
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
        }
        // cout<<"Row "<<i<<" sum is "<<sum<<endl;
        if(sum>max){
            max=sum;
        }
    }
    return max;
}

int main(){
    int arr[3][4] ={{4,7,8,2},{5,8,9,1},{3,7,5,2}};
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<"Enter number for "<<"arr["<<i<<"]["<<j<<"]"<<" ";
    //         cin>>arr[i][j];
    //     }
    // }

    cout<<"The array is: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<num<<" is present "<<isPresent(arr,3,4,num)<<endl;
    cout<<"Maximum sum is: "<<sumOfRow(arr,3,4)<<endl;
}