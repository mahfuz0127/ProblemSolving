//https://codeforces.com/problemset/problem/2181/M

#include <bits/stdc++.h>
using namespace std;

int solve(string x, string y, bool flip){
    int parityX = 0;
    int answer = 0;

    for(int c=0;c<x.length();c++){
        parityX ^= (x[c]-'0');
        if(parityX != (y[c]-'0')){
            answer++;
            if(flip) parityX ^= 1;
        }
    }
    return answer;
}

int main(){
    int test;
    cin >> test ;
    vector<int> answers(test);
    for(int t=0;t<test;t++){
        string x,y;
        cin >> x >> y;

        answers[t] = min(solve(x,y,false),solve(x,y,true));
    }
    for(int t=0;t<test;t++){
        cout << answers[t] << endl;
    }
}