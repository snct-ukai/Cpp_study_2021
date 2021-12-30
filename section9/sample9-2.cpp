#include <iostream>
using namespace std;

int x;

int main(){
    int x;
    if(true){
        static int x;
        while(true){
            int x;
            break;
        }
    }
}

/*****************************************
main関数外に存在するx:プログラム実行時に生成
main関数内のx:7行目実行時に生成
if文の中のx:プログラム実行時に生成
while文の中のx:11行目が実行されるごとに生成
*****************************************/