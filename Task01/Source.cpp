#include <iostream>
#include <chrono>
#include <thread>
#include "point.h"

using namespace std;

void draw_field(int aX, int aY, int bX, int bY, int cX, int cY)
{
	for (int i = 1; i <= 20; i++)
	{
		for (int j = 1; j <= 40; j++)
		{
			if (i == aY && j == aX)
			{
				cout << "A";
			}
			else if (i == cY && j == cX)
			{
				cout << "X";
			}
			else if (i == bY && j == bX)
			{
				cout << "B";
			}
			else
			{
				cout << "-";
			}
		}
		cout << endl;
	}
}

int main()
{
	point a, b, c;

	cout << "AX: ";
	cin >> a.x;
	cout << "AY: ";
	cin >> a.y;
	cout << "BX: ";
	cin >> b.x;
	cout << "BY: ";
	cin >> b.y;

	c.x = a.x;
	c.y = a.y;

	bool point_check = true;
	
	while (point_check)
	{
		system("CLS");
		draw_field(a.x, a.y, b.x, b.y, c.x, c.y);
		c.move(b.x, b.y, point_check);
		this_thread::sleep_for(chrono::milliseconds(100));
	}

	return 0;
}