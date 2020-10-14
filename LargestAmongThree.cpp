#include <iostream>
using namespace std;

int main (){
	int n1, n2, n3;
		
		cout << "======================\n"
				"ENTER THREE(3) INTEGERS\n"
				"======================" << endl;
		cout << "Enter 1st integer: ";
		cin >> n1;
		cout << "Enter 2nd integer: ";
		cin >> n2;
		cout << "Enter 3rd integer: ";
		cin >> n3;
	 
	if (n1 >= n2 && n1 >= n3)
		cout << endl << n1<< " IS THE LARGEST NUMBER." << endl;
		
	else if (n2 >= n1 && n2 >= n3)
		cout << endl << n2<< " IS THE LARGEST NUMBER." << endl;
		
	else
		cout<< endl << n3<< " IS THE LARGEST NUMBER." << endl;
		
	cout << endl << "Programmed by: Flonie Mae P. Romulo";	
	return 0;
}	
