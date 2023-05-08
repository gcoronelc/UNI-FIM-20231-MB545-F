#include <iostream>
using namespace std;

bool f() { cout << 'F'; return true; }
char g() { cout << 'G'; return 'G'; }
char h() { cout << 'H'; return 'H'; }

int main04() {
    char result = f() ? g() : h();
    cout << result;
    return 0;
}

