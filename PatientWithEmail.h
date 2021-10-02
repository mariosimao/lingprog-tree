#ifndef PATIENT_WITH_EMAIL_H
#define PATIENT_WITH_EMAIL_H

#include "Patient.h"

class PatientWithEmail: public Patient
{
    private:
        string _email;
    public:
        PatientWithEmail(string name, string email);
        void print();
};

#endif
