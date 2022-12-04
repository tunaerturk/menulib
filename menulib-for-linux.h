#include <iostream>
#include <string>
using namespace std;

class Menu {
private:
	int process;
public:
	int operation;

	void mmenu(string appname, string menu1, string menu2) {
		cout << "Welcome to the " + appname << endl;
		cout << "1 - " + menu1 << endl;
		cout << "2 - " + menu2 << endl;
		cout << "Select a operation: ";
		cin >> process;
		switch (process)
		{
		case 1:
			system("clear");
			operation = 1;
			break;
		case 2:
			system("clear");
			operation = 2;
			break;
		default:
			cout << "Wrong operation";
			break;
		}
	}
};
