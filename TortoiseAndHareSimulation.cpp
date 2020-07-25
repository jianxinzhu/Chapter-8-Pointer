/*  name: jianxin zhu
    date: july/24/2020
*/

#include<iostream>
#include<iomanip>
#include<random>
#include<ctime>

using namespace std;

void moveTortoise(int*, int*);
void moveHare(int*, int*);
void displayMove(int*, int*);

int const finalMove = 40;

int main()
{
	default_random_engine engine{ static_cast<unsigned int>(time(0)) };
	uniform_int_distribution <unsigned int> randomInt{ 1,10 };

	int random_Tortoise = 0, random_Hare = 0;
	int countTime = 0;
	int tortoise_Move =0;
	int hare_Move =0;

	cout << "BANG!!!!!!!!!!!!!!!!\nAND THEY'RE OFF !!!!!!!!!!" << endl;
	while (tortoise_Move <= finalMove && hare_Move <= finalMove )
	{
		random_Tortoise = randomInt(engine);
		random_Hare = randomInt(engine);

		moveTortoise(&random_Tortoise, &tortoise_Move);
		moveHare(&random_Hare, &hare_Move);

		displayMove(&tortoise_Move, &hare_Move);

		countTime++;
	}
}
void moveTortoise(int* randomPtr, int* turtlePtr)
{
	
	if (*randomPtr >= 1 && *randomPtr <= 5)
	{
		*turtlePtr += 3;
	}
	else if (*randomPtr >= 6 && *randomPtr <= 7)
	{
		*turtlePtr -= 6;
		if (*turtlePtr <= 0)
		{
			*turtlePtr = 0;
		}
	}
	else
	{
		*turtlePtr += 1;
	}
}
void moveHare(int* randomPtr, int* rabbitPtr)
{
	if (*randomPtr >= 1 && *randomPtr <= 2)
	{
		*rabbitPtr = *rabbitPtr;
	}
	else if (*randomPtr >= 3 && *randomPtr <= 4)
	{
		*rabbitPtr += 9;
	}
	else if (*randomPtr == 5)
	{
		*rabbitPtr -= 12;

		if (*rabbitPtr <= 0)
		{
			*rabbitPtr = 0;
		}
	}
	else if (*randomPtr >= 6 && *randomPtr <= 8)
	{
		*rabbitPtr += 1;
	}
	else
	{
		*rabbitPtr -= 2;
		if (*rabbitPtr <= 0)
		{
			*rabbitPtr = 0;
		}
	}
}
void displayMove(int* turtlePtr, int* rabbitPtr)
{
	cout << setw(*turtlePtr) << 'T' << endl;
	cout << setw(*rabbitPtr) << 'H' << endl;

	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;

	if (*turtlePtr > finalMove)
	{
		cout << "THE Tortise WON THE GAME!!!!!!!!!!!!!!" << endl;
	}
	if (*rabbitPtr > finalMove)
	{
		cout << "THE Hare WON THE GAME!!!!!!!!!!!!!!" << endl;
	}
}
