#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
    if (argc >= 2) {
        char* program_name = argv[1];

        string command = "powershell -Command \"Measure-Command { .\\" + string(program_name) + " }\"";

        system(command.c_str());
        
    } else {
        cout << "Missing params." << endl;
        return 0;
    }

    return 0;
}
