#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class Date {
    int month;
    int day;
public:
    void setMonth(int m) {
        if(m < 1 || m > 12){
            //例外を投げる
            throw out_of_range("月の入力値がおかしい\n");
        }
        month = m;
    }
    void setDay(int d) {
        if(d < 1 || d > 31){
            throw out_of_range("日の入力値がおかしい\n");
        }
        day = d;
    }
    string format() {
        return to_string(month) + "月" + to_string(day) + "日";
    }
};

int main()
{
    Date date;
    int month, day;
    cout << "今月は何月? ";
    cin >> month;
    cout << "今日は何日? ";
    cin >> day;
    try{
        //関数実行時に例外が発生するとcatchへ
        date.setMonth(month);
        date.setDay(day);
    }
    //例外オブジェクトを受け取る
    catch(const exception& err){
        cout << err.what() << endl;
        return -1;
    }
    cout << "今日は" << date.format() << "です。" << endl;
    return 0;
}