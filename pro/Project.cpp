#include "Project.h"

void  ProjectTree() {	

		while (1) {
			cout << "Project management" << endl << endl;
			cout << "1 Add Project" << endl;
			cout << "2 Modify Project" << endl;
			cout << "3 Remove Project" << endl;
			cout << "4 Show Project list" << endl;
			cout << "5 Go back" << endl;
			int inputvalue;
			cin >> inputvalue;
			//Initialize project object
			Proj Myproject;
			switch (inputvalue) {
			case 1:
				cout << "You selected 1" << endl;
				Myproject.AddP();
				system("PAUSE");
			case 2:
				cout << "You selected 2" << endl;
				Myproject.ModP();
				system("PAUSE");
			case 3:
				cout << "You selected 3" << endl;
				Myproject.RemP();
				system("PAUSE");
			case 4:
				cout << "You selected 3" << endl;
				Myproject.ShoP();
				system("PAUSE");
			case 5:
				cout << "You selected 5" << endl;
				break;
			}
			system("CLS");
		}
		system("CLS");

}


class Proj {
public:
void AddP() {}
void ModP() {}
void RemP() {}
void ShoP() {}
};