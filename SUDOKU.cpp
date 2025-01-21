/*
FARID AFRAKHTE TERM 2 CE
OSTAD FAIZI
PROJEE SUDOKU 
*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void print(int arr[9][9]);                                       //prototype tabe
int mohasebe(int arr[9][9], int x, int y, int value);               //prototype tabe

int main()
{
srand(time(0));
do
{
	cout << "SUDOKU MENU" << endl << "1.Bazi Jadid" << endl << "2.Khoroj" << endl ;
	int A ;
	cin >> A ;
	if (A == 1)
	{
		cout<< "baraye shoro x , y  va meghdar ra vared konid " << endl << "x baraye tol, y baraye arz, x va y az baze 0-8 mojaz ast " << endl << "va mighdar az baze 1-9 mojaz ast" << endl ;
	int jadval[9][9] =
	{
	    {0,0,4 + rand() % 6,0,0,0,1 + rand() % 3,0,0},
        {0,1 + rand() % 3,0,4 + rand() % 6,0,0,0,0,0},
   	    {0,0,0,0,0,1 + rand() % 3,0,0,4 + rand() % 6},
	    {4 + rand() % 6,0,0,0,0,0,0,1 + rand() % 3,0},
	    {0,0,1 + rand() % 3,0,0,4 + rand() % 6,0,0,0},
	    {0,0,0,1 + rand() % 3,0,0,0,4 + rand() % 6,0},
	    {0,4 + rand() % 6,0,0,0,0,0,0,1 + rand() % 3},
        {0,0,0,0,1 + rand() % 3,0,4 + rand() % 6,0,0},
		{1 + rand() % 3,0,0,0,4 + rand() % 6,0,0,0,0},
	};
		print(jadval);
		cout << endl;
			for (int i = 0; i <= 8; i++)
			{
				for (int j = 0; j <= 8; j++)
				{
					while (jadval[i][j] == 0)
					{
						int x, y, value;
						cout << "X, Y va Meghdar ra vared konid:";
						cout << endl;
						cin >> x;
						cin >> y; 
						cin >> value;
						mohasebe(jadval, x, y, value);
						system("cls");
						print(jadval);
					}
				}
			}
			cout << endl << "Sudoku ro hal kardi ;) daskhosh" << endl << endl;
			cout << "Aya mikhaye Kharej shi?   (1.bale / 2.khayr)"<<"\t";
			int q;
			cin >> q;
		}
		else
		{
			return 0;
		}
		system("cls");
	} while ("q=1");
}

void print(int arr[9][9])                   //tabeh shapeee
{
	cout << "*---*---*---*---*---*---*---*---*---*" << endl;
	for (int i = 0; i <= 8; i++)
	{
		cout << "|";

		for (int j = 0; j <= 8; j++)

		cout << " " << arr[i][j] << " " << "|";
		cout << endl;
		cout << "*---*---*---*---*---*---*---*---*---*" << endl;
	}		
}

int mohasebe(int arr[9][9], int x, int y, int value)
{
	if (arr[x][y] == 0 && value <= 9 && value >= 1)
	{
			return arr[x][y] = value;
	}
}
