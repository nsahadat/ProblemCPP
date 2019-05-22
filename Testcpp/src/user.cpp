#include "user.h"
#include <iostream>

user::user(char *First, char *Last)
{
    first = First;
    last = Last;
    //ctor
}
user:: getDetail()
{
    using namespace std;
    char Sex[10];
    int Age, Salary;

    cout << "Sex : ";
    cin >> Sex;
    cout << "Age : ";
    cin >> Age;
    cout << "Salary : ";
    cin >> Salary;

    sex = Sex;
    age = Age;
    salary = Salary;

}

user::printDetail()
{
    using namespace std;
    cout << "User: " << first << " " << last << "\n";
    cout << "Sex: " << sex << "\n";
    cout << "Age: " << age << "\n";
    cout << "Salary : " << salary << "\n";
}

user::~user()
{
    //dtor
}
