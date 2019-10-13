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
		int low, high, sum = 0;
		stringstream ss(line);
		ss >> low >> high;

		if (low > high)
		{
			int tmp = low;
			low = high;
			high = tmp;
		}

		for(int i = low; i <= high; i++)
		{
			sum += i;
		}
		cout << sum << endl;
	}



}