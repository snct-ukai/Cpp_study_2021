#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 100; i++){
        if(i % 2 == 0){
            continue;//iが2で割り切れるなら1回ループで残っている処理をせずにもう一度繰り返される
        }
        if(i < 0){
            break;//iが0より小さい時繰り返し処理を中断
        }
    }

    //for文を用いた並び替えのアルゴリズム(バブルソート)

    int array[] = {61, 14, 42, 51, 1, 25, 23, 7, 23, 56, 27};

    //配列の大きさ取得
    int arraysize = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < arraysize - 1; i++){
        for(int j = i + 1 ; j < arraysize; j++){
            if(array[i] < array[j]){
                continue;
            }
            int tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }
    //実行すると昇順に並び替えられる

    for(int i = 0; i < arraysize; i++){
        cout << array[i] << endl;
    }
}