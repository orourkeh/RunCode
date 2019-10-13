#include <iostream>
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
		float low, high = 0;
		stringstream ss(line);
		ss >> low >> high;
		if(low < high && low != 0)
		{
			for(float i = low; i <= high; i+=abs(low))
			{
					cout << i << endl;
			}
			cout << endl;
		}

	}



}