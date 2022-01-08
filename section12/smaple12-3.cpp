#include<iostream>
using namespace std;

class DBL{
    private:
        double d;
    public:
        DBL(int n) : d(n){}
        DBL(double n = 0.0) : d(n){}
        DBL& operator=(int i){
            d = static_cast<double>(i);
            return *this;
        }
        DBL& operator=(double i){
            d = i;
            return *this;
        }

        //変換関数 DBL -> int
        operator int(){
            return static_cast<int>(d);
        }
        //変換関数 DBL -> double
        operator double(){
            return d;
        }
};

int main(void){
    DBL dbl1 = 2;
    DBL dbl2 = 2.0;
    int i1 = dbl1;
    dbl2 = i1;
    double d1 = dbl1;
    dbl2 = d1;
}