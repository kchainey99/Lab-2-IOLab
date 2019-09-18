#include <iostream>
#include <fstream>

using namespace std;
int main()
  {
	ifstream file;
	file.open("Person.txt");
	int min, max, days;
	file >> min >> max;
	file >> days;
	switch (days)
	{
	case 1:
		{int hours
			file >> hours;
		if (hours > max)
			cout << "OVERTIME" << " " << (hours - max) << endl;
		else if (hours < min)
			cout << "DOCK" << (min - hours) << endl;
		else
			cout << "NORMAL" << endl;
		break;
		}

	case 2:
		{
		int h1, h2
		file >> h1 >> h2;
		int hours = h1 + h2
		}

	break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
		cout << min << " " << max << endl;
	}
}
