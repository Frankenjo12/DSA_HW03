#pragma once
struct point
{
	int x, y;
	void move(int bX, int bY, bool& point_check)
	{
		if (x != bX)
		{
			if (bX - x < 0)
			{
				x--;
			}
			else
			{
				x++;
			}
		}
		else if (y != bY)
		{
			if (bY - y < 0)
			{
				y--;
			}
			else
			{
				y++;
			}
		}
		else
		{
			point_check = false;
		}
	}
};