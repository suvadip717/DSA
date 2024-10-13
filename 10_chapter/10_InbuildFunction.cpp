#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(5);
    v.push_back(2);
    v.push_back(7);
    v.push_back(3);
    v.push_back(9);

    cout<<"Find 6->"<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower bound "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<"Upper bound "<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;

    int a = 5;
    int b = 10;

    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a-> "<<a<<" b-> "<<b<<endl;

    string abc = "abcd";
    reverse(abc.begin(),abc.end());
    cout<<abc<<endl;

    cout<<"Before rotate"<<endl;
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;

    rotate(v.begin(), v.begin()+3,v.end());
    cout<<"After rotate"<<endl;
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}