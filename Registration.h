#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "Tree.h"
#include "Patient.h"

using namespace std;

class Registration
{
    private:
        Tree<Patient> _patients;
    public:
        void insert(Patient patient);
        Patient* search(string patientName);
        void print();
};

#endif
