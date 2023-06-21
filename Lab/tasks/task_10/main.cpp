#include "time.h"
#include "files.h"
#include <iostream>
#include <fstream>
#include <iostream>

using namespace std;

void main()
{
	setlocale(0, "");

	Time p, p1, p2; int k, c;
	
    char file_name[30]; do
	
    {	//Меню
        cout << "1) Make file";
		cout << "\n2) Print file";
		cout << "\n3) Remove pairs that are lower than this pair";
		cout << "\n4) Add some pairs after given number";
		cout << "\n5) Add number to all pairs";
		cout << "\n0) Exit\n";
		cin >> c;
		switch (c)
		{
		case 1:
			cout << "File name: ";
			cin >> file_name;
			k = makeFile(file_name);
			if (k < 0)cout << "Can't create a file\n";
			break;
		case 2:
			cout << "File name: ";
			cin >> file_name;
			k = printFile(file_name);
			if (k == 0)cout << "Empty file\n";
			if (k < 0)cout << "Can't read file\n";
			break;
		case 3:
			cout << "File name: ";
			cin >> file_name;
			int nom;
			cin >> p1;
			k = removeFile(file_name, p1);
			if (k < 0)cout << "Can't read file"; 
			break;
		case 4:
			cout << "File name: ";
			cin >> file_name;
			cout << "Enter the number after which you want to insert the elements: ";
			cin >> k;
			cout << "Enter the number to add: ";
			cin >> nom;
			k = addFile(file_name, nom,k);
			if (k == -1) cout << "Can't read file";
			if (k == -2) cout << "There is no element with this number. ";
			break;
		case 5:
			cout << "File name: ";
			cin >> file_name;
			cout << "Enter the specified value: ";
			cin >> p2;
			k = changeFile(file_name,p2);
			if (k < 0) cout << "\nCan't read file";
			if (k == 0) cout << "\nNot such record";
			break;
		}
	} while (c != 0);



}