// c++ hello world program

//#include <iostream>
#include "pro/Project.h"
#include "tea/Team.h"
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

        switch (inputvalue) {
        case 1:
            TeamTree();
        case 2:
            ProjectTree();
        case 3:
            return 0;
        }        
    }
}