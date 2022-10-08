// NAMA		: Mohammad Idris Arif Budiman
// NRP		: 5025221114
// Jurusan	: Teknik Informatika

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int v0, x, n;
    float vtan;
  	cin >> n;
  	if (n >= 1 && n <= 10) {
  		v0 = n - 1;
	  }
	else if (n >= 11 && n <=20) {
	  	v0 = n - 3;
	  }
	else {
	  	v0 = n-5;
	  }
	  
  	vtan = n - 0.1002;
  	x = v0*v0/10;
  	cout << x << " " << vtan;
    return 0;
}
