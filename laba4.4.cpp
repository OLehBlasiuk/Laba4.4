#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{

	double y, x, R, xp, dx, xk;

	cout << "R = "; cin >> R;//радіус
	cout << "dx = "; cin >> dx;// з dx
	cout << "xp = "; cin >> xp;// ЦЕ "Х"
	cout << "xk = "; cin >> xk;//До xk

	cout << fixed;
	cout << "----------------" << endl;
	cout << "| " << setw(3) << "x" << setw(5) << "| " << setw(3) << "y" << setw(3) << "|" << endl;
	cout << "----------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if  (x <= -2 )
			y = 3 + x;
		else
			if (-2 < x && x <= 4)
				y = (-R * x - 2 * R - x + 4) / 6;
			else
				if (4 < x && x <= 8 - R)
					y = -R;
				else
					if (8 - R < x && x <= 8 + R)
						y = sqrt(R * R - x * x + 16 * x - 64) - R;
					 else
						y = -R;
		cout << "| " << setw(6) << setprecision(2) << x << "|" << setw(6) << setprecision(2) << y << "|" << endl;
		x += dx;
	}
	cout << "----------------" << endl;
	system("pause");
	return 0;
}
