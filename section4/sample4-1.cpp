#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    //if文による条件分岐
    if(a == 20){
        //aが20のときに実行されるブロック
    }
    else if(a == 10){
        //aが」10のときに実行されるブロック
    }
    else{
        //aが20または10のとき以外に実行されるブロック
    }

    //if文のネストも可
    if(a == 10){
        //aが10のとき

        if(a != 0){
            //aが0じゃないとき
        }
    }
}