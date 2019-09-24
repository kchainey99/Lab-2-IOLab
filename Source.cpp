#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ifstream file;
	file.open("Grades.txt");

	string grade;
	int gradenum;
	string name1, name2, name3, name4, name5;
	file >> grade >> gradenum >> name1;
	float gradeavg1, gradeavg2, gradeavg3, gradeavg4, gradeavg5;
	{
		float tempavg;
		switch (gradenum)
		{
		case 2:
		{
			int g1, g2;
			file >> g1 >> g2;
			tempavg = (g1 + g2) / 2.0;
			break;
		}
		case 3:
		{
			int g1, g2, g3;
			file >> g1 >> g2 >> g3;
			tempavg = (g1 + g2 + g3) / 3.0;
			break;
		}
		case 4:
		{
			int g1, g2, g3, g4;
			file >> g1 >> g2 >> g3 >> g4;
			tempavg = (g1 + g2 + g3 + g4) / 4.0;
			break;
		}
		case 5:
		{
			int g1, g2, g3, g4, g5;
			file >> g1 >> g2 >> g3 >> g4 >> g5;
			tempavg = (g1 + g2 + g3 + g4 + g5) / 5.0;
			break;
		}
		case 6:
		{
			int g1, g2, g3, g4, g5, g6;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6) / 6.0;
			break;
		}
		case 7:
		{
			int g1, g2, g3, g4, g5, g6, g7;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6 + g7) / 7.0;
			break;
		}
		case 8:
		{
			int g1, g2, g3, g4, g5, g6, g7, g8;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7 >> g8;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6 + g7 + g8) / 8.0;
			break;
		}
		}
		gradeavg1 = tempavg;
	}
	file >> name2;
	{
		float tempavg;
		switch (gradenum)
		{
		case 2:
		{
			int g1, g2;
			file >> g1 >> g2;
			tempavg = (g1 + g2) / 2.0;
			break;
		}
		case 3:
		{
			int g1, g2, g3;
			file >> g1 >> g2 >> g3;
			tempavg = (g1 + g2 + g3) / 3.0;
			break;
		}
		case 4:
		{
			int g1, g2, g3, g4;
			file >> g1 >> g2 >> g3 >> g4;
			tempavg = (g1 + g2 + g3 + g4) / 4.0;
			break;
		}
		case 5:
		{
			int g1, g2, g3, g4, g5;
			file >> g1 >> g2 >> g3 >> g4 >> g5;
			tempavg = (g1 + g2 + g3 + g4 + g5) / 5.0;
			break;
		}
		case 6:
		{
			int g1, g2, g3, g4, g5, g6;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6) / 6.0;
			break;
		}
		case 7:
		{
			int g1, g2, g3, g4, g5, g6, g7;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6 + g7) / 7.0;
			break;
		}
		case 8:
		{
			int g1, g2, g3, g4, g5, g6, g7, g8;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7 >> g8;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6 + g7 + g8) / 8.0;
			break;
		}
		}
		gradeavg2 = tempavg;
	}
	file >> name3;
	{
		float tempavg;
		switch (gradenum)
		{
		case 2:
		{
			int g1, g2;
			file >> g1 >> g2;
			tempavg = (g1 + g2) / 2.0;
			break;
		}
		case 3:
		{
			int g1, g2, g3;
			file >> g1 >> g2 >> g3;
			tempavg = (g1 + g2 + g3) / 3.0;
			break;
		}
		case 4:
		{
			int g1, g2, g3, g4;
			file >> g1 >> g2 >> g3 >> g4;
			tempavg = (g1 + g2 + g3 + g4) / 4.0;
			break;
		}
		case 5:
		{
			int g1, g2, g3, g4, g5;
			file >> g1 >> g2 >> g3 >> g4 >> g5;
			tempavg = (g1 + g2 + g3 + g4 + g5) / 5.0;
			break;
		}
		case 6:
		{
			int g1, g2, g3, g4, g5, g6;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6) / 6.0;
			break;
		}
		case 7:
		{
			int g1, g2, g3, g4, g5, g6, g7;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6 + g7) / 7.0;
			break;
		}
		case 8:
		{
			int g1, g2, g3, g4, g5, g6, g7, g8;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7 >> g8;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6 + g7 + g8) / 8.0;
			break;
		}
		}
		gradeavg3 = tempavg;
	}
	file >> name4;
	{
		float tempavg;
		switch (gradenum)
		{
		case 2:
		{
			int g1, g2;
			file >> g1 >> g2;
			tempavg = (g1 + g2) / 2.0;
			break;
		}
		case 3:
		{
			int g1, g2, g3;
			file >> g1 >> g2 >> g3;
			tempavg = (g1 + g2 + g3) / 3.0;
			break;
		}
		case 4:
		{
			int g1, g2, g3, g4;
			file >> g1 >> g2 >> g3 >> g4;
			tempavg = (g1 + g2 + g3 + g4) / 4.0;
			break;
		}
		case 5:
		{
			int g1, g2, g3, g4, g5;
			file >> g1 >> g2 >> g3 >> g4 >> g5;
			tempavg = (g1 + g2 + g3 + g4 + g5) / 5.0;
			break;
		}
		case 6:
		{
			int g1, g2, g3, g4, g5, g6;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6) / 6.0;
			break;
		}
		case 7:
		{
			int g1, g2, g3, g4, g5, g6, g7;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6 + g7) / 7.0;
			break;
		}
		case 8:
		{
			int g1, g2, g3, g4, g5, g6, g7, g8;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7 >> g8;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6 + g7 + g8) / 8.0;
			break;
		}
		}
		gradeavg4 = tempavg;
	}
	file >> name5;
	{
		float tempavg;
		switch (gradenum)
		{
		case 2:
		{
			int g1, g2;
			file >> g1 >> g2;
			tempavg = (g1 + g2) / 2.0;
			break;
		}
		case 3:
		{
			int g1, g2, g3;
			file >> g1 >> g2 >> g3;
			tempavg = (g1 + g2 + g3) / 3.0;
			break;
		}
		case 4:
		{
			int g1, g2, g3, g4;
			file >> g1 >> g2 >> g3 >> g4;
			tempavg = (g1 + g2 + g3 + g4) / 4.0;
			break;
		}
		case 5:
		{
			int g1, g2, g3, g4, g5;
			file >> g1 >> g2 >> g3 >> g4 >> g5;
			tempavg = (g1 + g2 + g3 + g4 + g5) / 5.0;
			break;
		}
		case 6:
		{
			int g1, g2, g3, g4, g5, g6;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6) / 6.0;
			break;
		}
		case 7:
		{
			int g1, g2, g3, g4, g5, g6, g7;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6 + g7) / 7.0;
			break;
		}
		case 8:
		{
			int g1, g2, g3, g4, g5, g6, g7, g8;
			file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7 >> g8;
			tempavg = (g1 + g2 + g3 + g4 + g5 + g6 + g7 + g8) / 8.0;
			break;
		}
		}
		gradeavg5 = tempavg;
	}
	//Ordering grades from greatest to least. Attempted to use an array, but brain isn't big enough for that.
	if (gradeavg1 < gradeavg2)
	{
		swap(gradeavg1, gradeavg2);
		swap(name1, name2); //swap statement swaps values within each variable.
	}						// For ex, if x=1, y=2, swap(x,y) makes x=2 & y=1.
	
	else if (gradeavg1 < gradeavg3)
	{
		swap(gradeavg1, gradeavg3);
		swap(name1, name3);
	}
	else if (gradeavg1 < gradeavg4)
	{
		swap(gradeavg1, gradeavg4);
		swap(name1, name4);
	}
	else if (gradeavg1 < gradeavg5)
	{
		swap(gradeavg1, gradeavg5);
		swap(name1, name5);
	}

	if (gradeavg2 < gradeavg3)
	{
		swap(gradeavg2, gradeavg3);
		swap(name2, name3);
	}
	else if (gradeavg2 < gradeavg4)
	{
		swap(gradeavg2, gradeavg4);
		swap(name2, name4);
	}
	else if (gradeavg2 < gradeavg5)
	{
		swap(gradeavg2, gradeavg5);
		swap(name2, name5);
	}

	if (gradeavg3 < gradeavg4)
	{
		swap(gradeavg3, gradeavg4);
		swap(name3, name4);
	}
	else if (gradeavg3 < gradeavg5)
	{
		swap(gradeavg3, gradeavg5);
		swap(name3, name5);
	}
	if (gradeavg4 < gradeavg5)
	{
		swap(gradeavg4, gradeavg5);
		swap(name4, name5);
	}
	cout << "Name" << "	" << "Rank" << endl;
	cout << endl;
	cout << name1 << "	" << gradeavg1 << " Wow, what a try-hard!" << endl;
	cout << name2 << "	" << gradeavg2 << endl;
	cout << name3 << "	" << gradeavg3 << endl;
	cout << name4 << "	" << gradeavg4 << endl;
	cout << name5 << "	" << gradeavg5 << " ...Wow, what a dummy." << endl;

	system("PAUSE");
	return ('0');
}
