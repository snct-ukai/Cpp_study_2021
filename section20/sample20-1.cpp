#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    const char* str = "Pull up if I pull up";
    vector<char> palin;//STL vectorオブジェクト

    for(size_t i = 0; i < strlen(str); i++){
        palin.push_back(str[i]);//strを一文字ずつpalinの末尾に追加
    }

    reverse(palin.begin(), palin.end());//STL algorithm 逆順にする
    
    for(vector<char>::iterator it = palin.begin(); it != palin.end(); it++){
        cout << *it << " ";//iteratorを用いて要素を表示
    }
}