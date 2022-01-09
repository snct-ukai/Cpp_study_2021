#include <iostream>
using namespace std;

namespace exam {
    namespace japanese {
        void question() {cout << "あなたは日本語が好きですか?" << endl;}
        int score;
    }
    namespace english {
        void question() {cout << "Do you like English?" << endl;}
        int score;
    }
}

int main() {
    exam::japanese::score = 90;
    exam::english::score = 10;
    exam::japanese::question();
    {
        using namespace exam;
        cout << japanese::score << endl;
    }
    {
        using namespace exam::english;
        question();
        cout << score << endl;
    }
}