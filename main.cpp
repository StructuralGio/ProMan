// c++ hello world program

#include <iostream>
#include "Project.h"
#include "Team.h"
using namespace std;

int main() {
    system("CLS");

    while (1){
        int inputvalue;
        cout << "Welcome to ProMan" << endl << endl;
        cout << "What do you want to do?" << endl;
        cout << "1 Team management" << endl;
        cout << "2 Project management" << endl;
        cout << "3 Exit program" << endl;
        cout << "Enter your choice: ";
        cin >> inputvalue;
        system("CLS");
        if (inputvalue == 1) {
            TeamTree();
        }
        else if (inputvalue == 2) {
            
            ProjectTree();
        }
        else if (inputvalue == 3) {

            return 0;
        }
        
    }
}