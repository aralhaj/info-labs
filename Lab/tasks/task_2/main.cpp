#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class student
{
    string fullname;
    string group;
    double sco;

public:
    student();
    student(string, string, double);

    student(const student &);
    ~student();

    string getFullName();
    string getGroup();
    float getSco();

    void setFullName(string);
    void setGroup(string);
    void setSco(double);

    void print();
};

student::student()
{
    cout << " Constructor without parameters " << endl;
    fullname = "";
    group = "";
    sco = 0;
}

student::student(string F, string G, double S)
{
    cout << " Constructor with parameters " << endl;

    fullname = F;
    group = G;
    sco = S;
}

student::student(const student &obj)
{
    cout << " Copy Constructor " << endl;

    fullname = obj.fullname;
    group = obj.group;
    sco = obj.sco;
}

student::~student()
{
    cout << " Destructor " << endl;
}

// Get Info
string student::getFullName()
{
    return fullname;
}
string student::getGroup()
{
    return group;
}
float student::getSco()
{
    return sco;
}

// Set Info
void student::setFullName(string fn)
{
    fullname = fn;
}
void student::setGroup(string g)
{
    group = g;
}
void student::setSco(double s)
{
    sco = s;
}

void student::print()
{
    cout << " Fullname " << fullname << "." << endl;
    cout << " Group  " << group << "." << endl;
    cout << " Average Score " << sco << "." << endl;
}

student makeProfile()
{
    student s;
    string fullname;
    string group;
    double sco;

    cout << "Enter Fullname: ";
    cin >> fullname;
    cout << "Enter Group: ";
    cin >> group;
    cout << "Enter average score: ";
    cin >> sco;

    s = student(fullname, group, sco);

    return s;
}

void printStudent(student s)
{
    s.print();
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(0, "");
    // constructor without parameters

    cout << "student A\n";
    student A;
    A.print();

    // constructor with parameters

    cout << "student B\n";
    student B("Bruce Wayen", " RISS-22-1B", 4.51);
    B.print();

    // copy constructor

    cout << "student C\n";
    student C(B);
    C.print();

    cout << "student A\n";
    A.setFullName("Bruce Wayne");
    A.setGroup("RISS-22-2B");
    A.setSco(4.69);

    cout << "student C\n";
    C.setFullName(A.getFullName());
    C.setGroup(A.getGroup());
    C.setSco(A.getSco());
    C.print();

    printStudent(A);

    A = makeProfile();
    A.print();
    return 0;
}