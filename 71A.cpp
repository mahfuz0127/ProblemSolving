#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> answers(n);
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(s.length()>10)answers[i] = s[0]+to_string(s.length()-2)+s[s.length()-1];
        else answers[i] = s;
    }

    for(int i=0;i<n;i++){
        cout << answers[i] << endl;
    }

    return 0;
}