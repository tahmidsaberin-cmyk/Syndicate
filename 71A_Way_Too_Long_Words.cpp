#include <bits/stdc++.h>
using namespace std;

int main() {

    list <string> mylist;
    int n;
    
    cin >> n;

    for(int i=0; i<n; i++){
        string word;
        cin >> word;
        mylist.push_back(word);
    }
    
    cout << endl;

    for (auto it = mylist.begin(); it != mylist.end(); it++) {
        if (size(*it) > 10) {
            *it = (*it)[0] + to_string(size(*it) - 2) + (*it)[size(*it) -1];
        }
        cout << *it << endl;
    }
    cout << endl;
    return 0;
}
