#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
using namespace std;

int main(void){
    ofstream file;
    file.open("data.txt");
    string s;
    while(true){
        getline(cin,s);//stringを使用した場合のgetline関数(この書き方のほうが簡単)
        if(s.length()){
            file << stod(s) << endl;
            continue;
        }
        break;
    }
    file.close();
}