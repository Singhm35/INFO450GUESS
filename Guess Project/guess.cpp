
#include <iostream>
#include <time.h>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	{
		cout << " ***************************************\n";
		cout << " **             Find MORE Gold!       **\n";
		cout << " **                                   **\n";
		cout << " **        You have 5 guesses        **\n";
		cout << " **         5 pieces of gold          **\n";
		cout << " **             and 1 bomb           **\n";
		cout << " **                                   **\n";
		cout << " **            Good Luck             **\n";
		cout << " ***************************************\n\n";

		cout << "Do you want to play? (Y)";
		//string toPlay;
		//cin >> toPlay;
		string play;
		cin >> play;

		bool toPlay;

		if (play == "Y") {
			toPlay = true;
		}
		else {
			exit(EXIT_FAILURE);
		}

		while (toPlay == true);
		{
			int response1;
			int response2;
			int count = 4;

			bool redo = true;
			int arr[8][8];

			int re1 = rand() * int(10);
			cout << (re1);
			int re2 = rand() * int(10);

			int re3 = rand() * int(10);
			int re4 = rand() * int(10);

			int re5 = rand() * int(10);
			int re6 = rand() * int(10);

			int re7 = rand() * int(10);
			int re8 = rand() * int(10);

			int re9 = rand() * int(10);
			int re10 = rand() * int(10);

			int bombx = rand() * int(10);
			int bomby = rand() * int(10);

			while (count >= 0)
			{
				cout << "Enter X Coordinate";
				cin >> response1;

				cout << ("Enter Y Coordinate");
				cin >> response2;

				cout << ("You have " + count);
				count--;
				if (response1 == re1 && response2 == re2)
				{
					arr[re1][re2] = 1;
					cout << ("GOLD!");
					redo = true;
				}
				else if (response1 == re3 && response2 == re4) {
					arr[re3][re4] = 1;
					cout << ("GOLD");
					redo = true;
				}
				else if (response1 == re5 && response2 == re6) {
					arr[re5][re6] = 2;
					cout << ("GOLD");
					redo = true;
				}
				else if (response1 == re7 && response2 == re8) {
					arr[re7][re8] = 2;
					cout << ("GOLD");
					redo = true;
				}
				else if (response1 == re9 && response2 == re10) {
					arr[re9][re10] = 2;
					cout << ("GOLD");
					redo = true;
				}
				else if (response1 == bombx && response2 == bomby) {
					arr[bombx][bomby] = 2;
					cout << ("BOMB. You Died");
					break;
				}
			}

			for (int i = 0; i < sizeof(arr); i++) {
				for (int j = 0; j < sizeof(arr); j++) {
					cout << (arr[i][j] + " ");
				}
				cout << ("");
			}

			cout << (re1 + " " + re2);
			cout << (re3 + " " + re4);
			cout << (re5 + " " + re6);
			cout << (re7 + " " + re8);
			cout << (re9 + " " + re10);
		}
	}
	cout << "Do you want to play? (Y)";
	string toPlay;
	cin >> toPlay;
}
