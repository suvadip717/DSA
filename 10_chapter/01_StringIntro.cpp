#include <iostream>
using namespace std;

void getReverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[]){
    int length=0;
    for(int i=0; name[i]!='\0'; i++){
        length++;
    }
    return length;
}

bool palindrome(char a[], int n){
    int st = 0;
	int e = n - 1;

		while(st<=e){
			if(a[st] != a[e]){
				return false;
			}
			else{
				st++;
				e--;
			}
		}
		return true;
}

int main()
{
    char name[20];

    cout << "Enter your name: ";
    cin >> name;
    int l = getlength(name);
    getReverse(name,l);
    cout<<"Your reverse name is "<<name<<endl;
    cout<<"Word is palindrome "<<palindrome(name,l)<<endl;
    return 0;
}