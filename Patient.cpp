#include <iostream>
#include "Patient.h"

ostream& operator << (ostream& out, Patient& patient)
{
    patient.print();

    return out;
}

Patient::Patient(string name)
{
    this->_name = name;
}

string Patient::getName()
{
    return this->_name;
}

void Patient::print()
{
    cout << this->_name;
}

bool Patient::operator == (string value)
{
    return this->_name == value;
}

bool Patient::operator < (Patient value)
{
    return this->_name < value._name;
}

bool Patient::operator > (Patient value)
{
    return this->_name > value._name;
}
