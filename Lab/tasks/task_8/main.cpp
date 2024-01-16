#include <iostream>
#include "object.h"
#include "student.h"
#include "person.h"
#include "vector.h"
#include "windows.h"
#include "dialog.h"
#include "event.h"

using namespace std;

void main() {
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Create a group (command format : m number of group elements)." <<endl;
	cout << "Add an item to a group (command format : +)" << endl;
	cout << "Remove an item from a group(command format - )" << endl;
	cout << "Output information about the group elements (command format : s)" << endl;
	cout << "Output information about the group element(command format : ? the number of the object in the group)" << endl;
	cout << "End of work(command format : q)" << endl;
	
    Dialog D;
	D.Execute();
}