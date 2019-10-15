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
		double sum = 0.0, num = 0.0;
		stringstream ss(line);

		while(ss >> num)
		{
			ss.ignore(1); //ignore comma
			sum += num;
		}
		cout << setprecision(8) << sum << endl;
	}
}
