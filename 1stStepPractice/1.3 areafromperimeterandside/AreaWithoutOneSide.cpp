#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/* initializing variables*/
	double a,P , b;
	/* input variables*/
	cin >> P >> a;
	
	b = (P/2) - a;
	
	/* output*/

	cout << "Krastine a: "<< a << endl;
	cout << "Krastine b: "<< b << endl;
	cout << "Plotas: "<< a * b;
	

	return 0;
}
