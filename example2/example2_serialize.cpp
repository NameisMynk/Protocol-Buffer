#include <iostream>
#include <fstream>
#include "example2.pb.h"

using namespace std;

void serializeEmployee(const Employee& employee, const string& filename) {
    // Write the employee to a file.
    fstream output(filename, ios::out | ios::trunc | ios::binary);
    if (!employee.SerializeToOstream(&output)) {
        cerr << "Failed to write employee." << endl;
    }
}

int main() {
    // Initialize the Employee message
    Employee employee;
    employee.set_name("John Doe");
    employee.set_company("OpenAI");
    employee.set_age(30);

    // Serialize the message to a file
    serializeEmployee(employee, "employee.dat");

    return 0;
}
