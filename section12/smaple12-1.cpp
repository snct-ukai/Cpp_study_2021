#include<iostream>
using namespace std;

//複素数クラス
class Complex{
    private:
        //実部
        double re;
        //虚部
        double im;
    public:
        //コンストラクタ(デフォルト引数あり)
        Complex(double re = 0, double im = 0) : re(re), im(im){}
        //コピーコンストラクタ
        Complex(const Complex& C) : re(C.re), im(C.im){}

        void show(){
            cout << re << "+" << im << "i" << endl;
        }

        //演算子関数
        Complex operator+(const Complex& C){
            return Complex(re + C.re, im + C.im);
        }
        Complex operator+(const double& d){
            return Complex(re + d, im);
        }
        Complex operator-(const Complex& C){
            return Complex(re - C.re, im - C.im);
        }
        Complex operator-(const double& d){
            return Complex(re - d, im);
        }
        Complex operator*(const Complex& C){
            return Complex(re * C.re - im * C.im, re * C.im + im * C.re);
        }
        Complex operator*(const double& d){
            return Complex(re * d, im * d);
        }
        Complex operator/(const Complex& C){
            return Complex((re * C.re + im * C.im) / (C.re * C.re + C.im * C.im) , (im * C.re - re * C.im) / (C.re * C.re + C.im * C.im));
        }
        Complex operator/(const double& d){
            return Complex(re / d, im / d);
        }
        Complex operator-(){
            Complex c(-re, -im);
            return c;
        }
        Complex operator+(){
            return *this;
        }

        //friend関数
        friend Complex operator+(const double& d, const Complex& C);
        friend Complex operator-(const double& d, const Complex& C);
        friend Complex operator*(const double& d, const Complex& C);
        friend Complex operator/(const double& d, const Complex& C);

        //代入演算子
        void operator=(const Complex& C){
            re = C.re;
            im = C.im;
        }
};

//friend関数の定義
Complex operator+(const double& d, const Complex& C){
    return Complex(C.re + d, C.im);
}

Complex operator-(const double& d, const Complex& C){
    return Complex(C.re - d, C.im);
}

Complex operator*(const double& d, const Complex& C){
    return Complex(C.re * d, C.im * d);
}

Complex operator/(const double& d, const Complex& C){
    return Complex(C.re / d, C.im / d);
}

int main(void){
    Complex c1(1.1,2.2);
    Complex c2(-4.0, 0.5);
    Complex c;

    c = 1.2 + c1 * 3.4 - 0.1 * c1 * c2 / c1 + (-c2 / 5.6 + 7.8);
    c.show();
}