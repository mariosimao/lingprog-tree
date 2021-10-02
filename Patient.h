#ifndef PATIENT_H
#define PATIENT_H

#include <string>

using namespace std;

class Patient
{
    friend ostream& operator << (ostream& out, Patient& patient);

    protected:
        string _name;
    public:
        Patient() {};
        Patient(string name);
        string getName();
        void print();
        bool operator == (string value);
        bool operator < (Patient value);
        bool operator > (Patient value);
};

#endif
