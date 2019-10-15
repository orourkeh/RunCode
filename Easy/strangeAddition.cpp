#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream inputFile;
	inputFile.open(argv[1]);

	string line;
	while(getline(inputFile, line))
	{
		stringstream ss(line);
		int sum = 0, num = 0;

		while(ss >> num)
		{
			sum += num;
			sum++;
		}
		cout << sum << endl;
	}
}
