#include <iostream>
using namespace std;

int main(){
    //while文
    int a = 0;
    while(a < 20){
        //aが20より小さいときに繰り返される
        a++;
    }

    //for文
    for(int i = 0; i < 20; i++){
        /*
        初期値i = 0
        i < 20の間
        このブロックが繰り返されi++される
        という意味
        */
    }

    //do~while文
    int b = 0;
    do{
        //1回目は条件式が評価される前に実行され、2回目以降はwhile文と同じ挙動をする
    }while(b != 0);
}