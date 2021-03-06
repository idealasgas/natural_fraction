// fraction.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Natural_Fraction.h"
#include <iostream>
#include <conio.h>

using namespace std;

void print_menu() {
	cout << "Choose an option:\n";
	cout << "1 - addition\n";
	cout << "2 - subtraction\n";
	cout << "3 - multiplication\n";
	cout << "4 - division\n";
	cout << "5 - comparison\n";b4cgx
	cout << "6 - increment\n";
	cout << "7 - decrement\n";
	cout << "8 - to double" << endl;
	cout << "0 - exit" << endl;
}

int main()
{
	int n, s;
	cout << "Input numerator and denominator:" << endl;
	cin >> n >> s;
	natural_fraction my_fraction(n, s);
	bool exit = false;
	char option;
	my_fraction.chznz();
	print_menu();

	while (!exit) {
		my_fraction.show();
		option = _getch();
		switch (option)
		{
		case '1': {
			int option;
			cout << "Integer or fraction?(1/2)" << endl;
			cin >> option;
			switch (option) {
			case 1: {
				int number;
				cout << "Input integer: ";
				cin >> number;
				natural_fraction result(number);
				my_fraction += result;
				break;
			}
			case 2: {
				int n, s;
				cout << "Input numerator and denominator:" << endl;
				cin >> n >> s;
				natural_fraction nf(n, s);
				my_fraction += nf;
				break;
			}
			}
			break;
		}
		case '2': {
			int option;
			cout << "Integer or fraction?(1/2)" << endl;
			cin >> option;
			switch (option) {
			case 1: {
				int number;
				cout << "Input integer: ";
				cin >> number;
				natural_fraction result(number);
				my_fraction -= number;
				break;
			}
			case 2: {
				int n, s;
				cout << "Input numerator and denominator:" << endl;
				cin >> n >> s;
				natural_fraction nf(n, s);
				my_fraction -= nf;
				break;
			}
			}
			break;
		}
		case '3': {
			int option;
			cout << "Integer or fraction?(1/2)" << endl;
			cin >> option;
			switch (option) {
			case 1: {
				int num;
				cout << "Input integer: ";
				cin >> num;
				my_fraction *= num;
				break;
			}
			case 2: {
				int n, s;
				cout << "Input numerator and denominator:" << endl;
				cin >> n >> s;
				natural_fraction nf(n, s);
				my_fraction *= nf;
				break;
			}
			}
			break;
		}
		case '4': {
			int option;
			cout << "Integer or fraction?(1/2)" << endl;
			cin >> option;
			switch (option) {
			case 1: {
				int number;
				cout << "Input integer: ";
				cin >> number;
				my_fraction /= number;
				break;
			}
			case 2: {
				int n, s;
				cout << "Input numerator and denominator:" << endl;
				cin >> n >> s;
				natural_fraction nf(n, s);
				my_fraction /= nf;
				break;
			}
			}
			break;
		}
		case '5': {
			int s;
			cout << "Integer or fraction?(1/2)" << endl;
			int option;
			cin >> option;
			switch (option) {
			case 1: {
				int t;
				cout << "1 - first bigger than second\n 2 - first smaller than second\n " << endl;
				cin >> t;
				int number;
				cout << "Input integer: ";
				cin >> number;
				natural_fraction result(number);
				switch (t) {
				case 1: {
					cout << "Is the first number bigger than second?" << endl;
					if (my_fraction.max(result))
						cout << "Yes, it's bigger" << endl;
					else cout << "No, it's smaller" << endl;
					break;
				}
				case 2: {
					cout << "Is the first number smaller than second?" << endl;
					if (!my_fraction.max(result))
						cout << "Yes, it's smaller" << endl;
					else cout << "No, it's bigger" << endl;
					break;
				}
				}
				break;
			}
			case 2: {
				cout << "1 - first bigger than second\n 2 - first smaller than second\n";
				cin >> s;
				int t, t1;
				cout << "Input numerator and denominator:" << endl;
				cin >> t >> t1;
				natural_fraction my_fraction2(t, t1);
				switch (s) {
				case 1: {
					cout << "Is the first number bigger than second?" << endl;
					if (my_fraction.max(my_fraction2))
						cout << "Yes, it's bigger" << endl;
					else cout << "No, it's smaller" << endl;
					break;
				}
				case 2: {
					cout << "Is the first number smaller than second?" << endl;
					if (!my_fraction.max(my_fraction2))
						cout << "Yes, it's smaller" << endl;
					else cout << "No, it's bigger" << endl;
					break;
				}
				}
				break;
			}
			}
			break;
		}
		case '6':
			my_fraction++;
			break;
		case '7':
			my_fraction--;
			break;
		case '8':
			my_fraction.to_double();
			break;
		default:
			cout << "wrong input\n";
			break;
		case '0':
			exit = true;
			break;
		}
	}
	_getch();
	return 0;
}

