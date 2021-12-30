#include <iostream>
using namespace std;

enum Week{SUN = 0, MON = 1, TUE = 2, WED = 3, THU = 4, FRI = 5, SAT = 6};

int main(){
    Week day = SUN;
    day = static_cast<Week>(6);//int型の値をWeekに型変換することが可能
}