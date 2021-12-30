#include <iostream>
using namespace std;

int x = 0;

int main(){
    int x = 10;
    if(true){
        int x = 20;
        while(true){
            int x = 30;
            cout << x << endl;//while文の中のx
            break;
        }
        cout << x << endl;//if文の中のx
    }
    cout << x << endl;//main関数の中のx
}

/**********
実行結果：
30
20
10
**********/