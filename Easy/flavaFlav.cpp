#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream inputFile;
	inputFile.open(argv[1]);

	string line;
	while(getline(inputFile, line))
	{
		double deg, hour;
		int h, m=0, s = 0;
		string word;
		stringstream ss(line);
		if(line.size() < 6){continue;}
		ss >> deg >> word >> hour;
		h = hour;
		hour = (12- hour) * 30.0;
		double target = deg - hour;
		double secondsToLineup = 0;
		
		if(word == "after")
		{
			if(target <= 0)
			{
				target+=360;
			}
			secondsToLineup = round((target)/(11.0/120.0));
		}
		else
		{  
			if(target >= 0)
			{
				target-=360;
			}
			secondsToLineup = round((120.0/11.0)*(target));

		}
		if(secondsToLineup>0)
		{
			for(int i = 0; i < secondsToLineup; i++)
			{
				s++;
				if(s == 60)
				{
					m++;
					s = 0;
				}
				if(m == 60)
				{
					h++;
					m = 0;
				}
				if(h == 13)
				{
					h = 1;
				}
			}
		}
		else
		{
			for(int i = 0; i > secondsToLineup; i--)
			{
				if(h == 0)
				{
					h = 12;
				}
				s--;
				if(s == -1)
				{
					m--;
					s = 59;
				}
				if(m == -1)
				{
					h--;
					m = 59;
				}
				if(h == 0)
				{
					h = 12;
				}
			}
		}
		cout /*<< secondsToLineup << " ::  "*/ << h << ":" << setfill('0') << setw(2) << m << ":" << setfill('0') << setw(2) << s << endl;

	}
}
