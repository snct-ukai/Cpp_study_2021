#include<iostream>
//例外オブジェクトをinclude
#include<stdexcept>
using namespace std;

int main(void){
    int month, day;
    cout << "今日は何月？";
    cin >> month;
    cout << "今日は何日？";
    cin >> day;
    try{
        if(month < 1 || month > 12){
            //例外オブジェクトを投げる
            throw out_of_range("月の入力値がおかしい\n");
        }
        if(day < 1 || day > 31){
            throw out_of_range("日の入力値がおかしい\n");
        }
    }
    //引数は例外オブジェクトの基本クラス
    catch(const exception& err){
        //例外の詳細を表示
        cout << err.what() << endl;
        return -1;
    }
    cout << "今日は" << month << "月" << day << "日です" << endl;
}