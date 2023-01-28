// c++ hello world program

#include <iostream>
using namespace std;
int main() {
    int inputvalue, inputvalue2;
    cout << "Welcome to ProMan" << endl << endl;
    cout << "What do you want to do?" << endl;
    cout << "1 Team management" << endl;
    cout << "2 Project management" << endl;

    cin >> inputvalue;

    if (inputvalue == 1 ) {
        cout << "Team management" << endl << endl;
        cout << "1 Add TeamMate" << endl;
        cout << "2 Modify TeamMate" << endl;
        cout << "3 Remove TeamMate" << endl;
        cout << "4 Show TeamMate list" << endl;
        cout << "5 Go back" << endl;
    }
    else if (inputvalue == 2) {
        cout << "Project management" << endl << endl;
        cout << "1 Add Project" << endl;
        cout << "2 Modify Project" << endl;
        cout << "3 Remove Project" << endl;
        cout << "4 Show Project list" << endl;
        cout << "5 Go back" << endl;
    }

    cin >> inputvalue2;

    cout << "Selection" << inputvalue << "," << inputvalue2;


    return 0;

}