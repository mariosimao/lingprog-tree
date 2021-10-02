#include <string>
#include <iostream>
#include "Patient.h"
#include "PatientWithEmail.h"
#include "PatientWithTelephone.h"
#include "Registration.h"
#include "UserInterface.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Registration registration;

    UserInterface ui("Patient Registration", {
        "List all",
        "Search",
        "Insert patient",
        "Insert patient with telephone",
        "Insert patient with e-mail"
    });

    string option;
    do {
        try {

            ui.menu();
            cin >> option;

            if (option == "1") {
                ui.optionTitle(stoi(option));

                registration.print();

                UserInterface::pressEnter();
            } else if (option == "2") {
                ui.optionTitle(stoi(option));

                string searchTerm;

                cout << "\tName:   ";
                cin >> searchTerm;

                auto searchResult = registration.search(searchTerm);

                cout << "\tResult: " << *searchResult << endl;

                UserInterface::pressEnter();
            } else if (option == "3") {
                ui.optionTitle(stoi(option));

                string name;

                cout << "\tName: ";
                cin >> name;

                registration.insert(Patient(name));

                UserInterface::pressEnter();
            } else if (option == "4") {
                ui.optionTitle(stoi(option));

                string name, telephone;

                cout << "\tName:      ";
                cin >> name;
                cout << "\tTelephone: ";
                cin >> telephone;

                registration.insert(PatientWithTelephone(name, telephone));

                UserInterface::pressEnter();
            } else if (option == "5") {
                ui.optionTitle(stoi(option));

                string name, email;

                cout << "\tName:  ";
                cin >> name;
                cout << "\tEmail: ";
                cin >> email;

                registration.insert(PatientWithEmail(name, email));

                UserInterface::pressEnter();
            } else if (option == "0") {
                UserInterface::clear();
            } else {
                UserInterface::clear();
                cout << "Invalid option." << endl;

                UserInterface::pressEnter();
            }
        } catch(const exception& e) {
            cerr << endl << "Error: " << e.what() << endl;

            UserInterface::pressEnter();
        }
    } while (option != "0");
}
