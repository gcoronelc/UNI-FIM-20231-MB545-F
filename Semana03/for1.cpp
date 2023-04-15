#include <iostream>
#include <sstream>
using namespace std;
int main() {
	
	int m = 3;
	int n = 7;
	
	for(int i=m; i <= n; i++){
		
		cout << i << "\t";
	}
	
	cout << "\n";
	
	for(int i=m; i <= n; i += 2){
		
		cout << i << "\t";
	}
	
}
