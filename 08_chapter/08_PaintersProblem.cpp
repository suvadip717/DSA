#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &boards, int k, int mid)
{
    int totalArea = 0;
    int countPainters = 1;
    for(int i=0; i<boards.size(); i++){
        if(totalArea+boards[i]<=mid){
            totalArea+=boards[i];
        }
        else{
            countPainters++;
            if(countPainters>k || mid<boards[i]){
                return false;
            }
            totalArea=boards[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
   int st = 0;
   int sum = 0;
   for(int i =0; i< boards.size(); i++){
       sum+=boards[i];
   }
   int en = sum;
   int mid = st+(en-st)/2;
   int ans = -1;

   while(st<=en){
       if(isPossible(boards, k, mid)){
           ans=mid;
           en=mid-1;
       }
       else{
           st=mid+1;
       }
       mid=st+(en-st)/2;
   }
   return ans;
}

int main(){
    vector<int> arr = {6 ,5 ,6 ,10 ,9 ,2 ,3 ,5};
    cout<<"The maximum area is: "<<findLargestMinDistance(arr, 2)<<endl;
}
