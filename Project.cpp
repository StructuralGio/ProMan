#include "Project.h"

void  ProjectTree() {
	int inputvalue;

		while (1) {
			cout << "Project management" << endl << endl;
			cout << "1 Add Project" << endl;
			cout << "2 Modify Project" << endl;
			cout << "3 Remove Project" << endl;
			cout << "4 Show Project list" << endl;
			cout << "5 Go back" << endl;
			cin >> inputvalue;
			
			if (inputvalue == 1) {
				cout << "You selected 1" << endl;
				system("PAUSE");
			}
			else if (inputvalue == 2) {
				cout << "You selected 2" << endl;
				system("PAUSE");
			}
			else if (inputvalue == 5) {
				cout << "You selected 5" << endl;
				break;
			}
			system("CLS");
		}
		system("CLS");

}

void AddP() {}
void ModP() {}
void RemP() {}
void ShoP() {}