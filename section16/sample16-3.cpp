#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
using namespace std;

int main(void){
    ofstream file;
    file.open("data.txt");//出力先ファイル
    string s;
    while(true){
        getline(cin,s);//cinからstring型変数sに入力
        if(s.length()){//1文字異常の場合に実行
            file << stod(s) << endl;//double型に変換してfileに出力
            continue;
        }
        break;
    }
    file.close();
}