#include <iostream>
using namespace std;

bool isSubsequence(const string &s) {
    string target = "geek";
    int targetIndex = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == target[targetIndex]) {
            targetIndex++;
        }

        if (targetIndex == target.length()) {
            return true;
        }
    }

    return false;
}

int main() {
    string s1 = "abcgeheaskd";
    string s2 = "abcgreed";

    cout << (isSubsequence(s1) ? "true" : "false") << endl; // Output: true
    cout << (isSubsequence(s2) ? "true" : "false") << endl; // Output: false

    return 0;
}
