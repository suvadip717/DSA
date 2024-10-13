#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Kolkata");
    q.push("Mumbai");
    q.push("Delhi");

    cout<<"Size before pop "<<q.size()<<endl;
    cout<<"First element "<<q.front()<<endl;
    q.pop();
    cout<<"First element "<<q.front()<<endl;
    cout<<"Size after pop "<<q.size()<<endl;
}