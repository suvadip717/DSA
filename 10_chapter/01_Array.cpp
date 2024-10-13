#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int, 4> a = {2,9,1,8};

    int sum = 0;
    for(int i=0; i<a.size(); i++){
        sum+=a[i];
    }
    cout<< sum<<endl;

}