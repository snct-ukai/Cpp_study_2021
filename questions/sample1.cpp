#include <iostream>
using namespace std;

void mul(int& a, int b){
	a *= b;
}

int main(){
	int x = 10;
	cout << x << endl;
	mul(x, 6);
	cout << x << endl;
}
