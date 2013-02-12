#include "PEDlg.h"

PEDlg::PEDlg(void){}

void PEDlg::run()
{
	int quit = 0, num;
	int choice;

	while(quit == 0)
	{
		cout << "-----------------------------" << endl;
		cout << "## PROJECT EULER PROBLEMS ##" << endl;
		cout << "-----------------------------\n\n";

		cout << "[1] Solve a problem" << endl;
		cout << "[2] Problems list" << endl;
		cout << "[3] Quit\n\n";

		cout << "Your choice ? ";
		cin >> choice;

		switch(choice)
		{
		case 1:
			cout << "-> Enter the number of the problem to solve : ";
			cin >> num;
			cout << endl;
			problems.solve(num);
			break;
		case 2 :
			cout << endl << "## PROBLEMSLIST ## \n\n";
			problems.list();
			cout << endl;
			break;
		case 3:
			quit = 1;
			break;
		}
	}
}
