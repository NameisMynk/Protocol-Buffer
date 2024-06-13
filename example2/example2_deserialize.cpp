#include <iostream>
#include <fstream>
#include "example2.pb.h"

using namespace std;

Employee deserializeEmployee(const string& filename) {
    // Read the employee from a file.
    Employee employee;
    fstream input(filename, ios::in | ios::binary);
    if (!employee.ParseFromIstream(&input)) {
        cerr << "Failed to parse employee." << endl;
    }
    return employee;
}

int main() {
    // Deserialize the message from a file
    Employee employee = deserializeEmployee("employee.dat");

    // Print the deserialized employee
    cout << "Name: " << employee.name() << endl;
    cout << "Company: " << employee.company() << endl;
    cout << "Age: " << employee.age() << endl;

    return 0;
}
