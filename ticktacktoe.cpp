#include <iostream>
using namespace std;
using std::cout;
using std::cin;
int main()
{
	bool gamecont = true;
	string places[3][3];
	int counter = 1;
	string readiness = "";
	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			places[i][j] = "-";
		}
	}
	cout << "WELCOME TO TICK TACK TOE\n";
	cout << "these are the positions:\n";
	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cout << "(" << i + 1 << "," << j + 1 << ")";
		}
		cout << "\n";
	}
	cout << "give the specific row and column when it is your turn.\n";
	cout << "READY? (y/n)";
	cin >> readiness;
	if (readiness == "y")
	{
		while (gamecont == true)
		{
			if ((counter == 10) && (gamecont == true))
			{
				break;
			}
			else
			{
				if ((counter % 2) != 0)
				{
					for (int i = 0; i < 3; i++)
					{

						for (int j = 0; j < 3; j++)
						{
							cout << places[i][j];
						}
						cout << "\n";
					}
					int row = 0;
					int column = 0;
					cout << "\n-----------player1 turn:----------\n";
					cout << "which position?";
					cout << "enter row:";
					cin >> row;
					cout << "enter column:";
					cin >> column;
					if (places[row - 1][column - 1] == "-")
					{
						places[row - 1][column - 1] = "O";
					}
					else {
						cout << "\nWRONG PLACE!!!\n";
						gamecont = false;
					}


					for (int i = 0; i < 3; i++)
					{
						string val = places[i][0];
						if ((val == "O") || (val == "X"))
						{
							if ((places[i][0] == places[i][1]) && (places[i][1] == places[i][2]))
							{
								cout << "\nplayer1 WON THE GAME!!!\n";
								gamecont = false;
							}
						}

					}
					for (int i = 0; i < 3; i++)
					{
						string val = places[0][i];
						if ((val == "O") || (val == "X"))
						{
							if ((places[0][i] == places[1][i]) && (places[1][i] == places[2][i]))
							{
								if (places[0][i] == "O")
								{

									cout << "\nplayer1 WON THE GAME!!!\n";
									gamecont = false;
								}
							}
						}
					}
					string val = places[0][0];
					string val2 = places[0][2];
					if ((val == "O") || (val == "X"))
					{
						if ((places[0][0] == places[1][1]) && (places[1][1] == places[2][2])) {
							cout << "\nplayer1 WON THE GAME!!!\n";
							gamecont = false;
						}
					}
					if ((val2 == "O") || (val2 == "X"))
					{
						if ((places[0][2] == places[1][1]) && (places[1][1] == places[2][0])) {
							cout << "\nplayer1 WON THE GAME!!!\n";
							gamecont = false;
						}
					}



					counter++;
				}
				else {
					for (int i = 0; i < 3; i++)
					{

						for (int j = 0; j < 3; j++)
						{
							cout << places[i][j];
						}
						cout << "\n";
					}
					int row = 0;
					int column = 0;
					cout << "\n-----------player2 turn:----------\n";
					cout << "which position?";
					cout << "enter row:";
					cin >> row;
					cout << "enter column:";
					cin >> column;
					if (places[row - 1][column - 1] == "-")
					{
						places[row - 1][column - 1] = "X";
					}
					else {
						cout << "\nWRONG PLACE!!!\n";
						gamecont = false;
					}


					for (int i = 0; i < 3; i++)
					{
						string val = places[i][0];
						if ((val == "O") || (val == "X"))
						{
							if ((places[i][0] == places[i][1]) && (places[i][1] == places[i][2]))
							{
								cout << "\nplayer2 WON THE GAME!!!\n";
								gamecont = false;
							}
						}

					}
					for (int i = 0; i < 3; i++)
					{
						string val = places[0][i];
						if ((val == "O") || (val == "X"))
						{
							if ((places[0][i] == places[1][i]) && (places[1][i] == places[2][i]))
							{
								cout << "\nplayer2 WON THE GAME!!!\n";
								gamecont = false;
							}
						}
					}
					string val = places[0][0];
					string val2 = places[0][2];
					if ((val == "O") || (val == "X"))
					{
						if ((places[0][0] == places[1][1]) && (places[1][1] == places[2][2])) {
							cout << "\nplayer2 WON THE GAME!!!\n";
							gamecont = false;
						}
					}
					if ((val2 == "O") || (val2 == "X"))
					{
						if ((places[0][2] == places[1][1]) && (places[1][1] == places[2][0])) {
							cout << "\nplayer2 WON THE GAME!!!\n";
							gamecont = false;
						}
					}

					counter++;
				}
			}



		}
	}


	cout << "\n";
	cout << "--------------GAME OVER---------------------------\n";
	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cout << places[i][j];
		}
		cout << "\n";
	}


	return 0;
}