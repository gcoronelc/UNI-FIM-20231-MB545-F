#include<iostream>
using namespace std;

void magia(int &a, int &b) {
	cout << b;
	a += 1;
	cout << b;
}

int main05() {
	int x = 1;
	magia(x, x);
	return 0;
}




