#include <iostream>
using namespace std;

int main () {
	int product, num, n;
	
	cout << "==================================================================\n"
				"\tWELCOME TO FLONIE'S MILKTEA INFINI'TEA'\n"
			"==================================================================" << endl;
	cout << "FLAVORS\t\t\t\t\t\t\t (Php)PRICE" << endl;
	cout << "[1] DARK CHOCO COOKIE ROCK SALT CHEESE\t\t\t Php 90.00 " << endl;
	cout << "[2] WINTERMELON\t\t\t\t\t\t Php 85.00 " << endl;
	cout << "[3] MATCHAMALT CREAM PUFF\t\t\t\t Php 80.00 " << endl;
	cout << "[4] COFFEE CHOCO PUFF\t\t\t\t\t Php 75.00 " << endl;
	cout << ("====================================================================\n") << endl;
	
	cout << "Choose a number(Flavor): ";
	cin >> num;
	
	switch (num){
		case 1:
			do{
			cout << "Enter your payment: Php ";
			cin >> n;
			if (n>=90){
				product = n - 90;
			cout << "Change: Php " <<product;
			}else
			cout << "Your payment is not enough. " << endl<< endl;
			}while (n<90);
			cout << endl << endl << "THANK YOU. COME AGAIN!";
		break;
		case 2:
			do{
			cout << "Enter your payment: Php ";
			cin >> n;
			if (n>=85){
				product = n - 85;
			cout << "Change: Php " <<product;
			}else
			cout << "Your payment is not enough. " << endl<< endl;
			}while (n<85);
			cout << endl << endl << "THANK YOU. COME AGAIN!";
		break;
		case 3:
			do{
			cout << "Enter your payment: Php ";
			cin >> n;
			if (n>=80){
				product = n - 80;
			cout << "Change: Php " <<product;
			}else
			cout << "Your payment is not enough. " << endl<< endl;
			}while (n<80);
			cout << endl << endl << "THANK YOU. COME AGAIN!";
		break;
	case 4:
			do{
			cout << "Enter your payment: Php ";
			cin >> n;
			if (n>=75){
				product = n - 75;
			cout << "Change: Php " <<product;
			}else
			cout << "Your payment is not enough. " << endl<< endl;
			}while (n<75);
			cout << endl << endl << "THANK YOU. COME AGAIN!";
		break;
	}
	
	cout <<endl << endl << "Owner: Ms. Flonie Mae P. Romulo";
	cout << endl << "Programmed by the Owner";
	return 0;
}
