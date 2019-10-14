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
		string num;
		int sum = 0;
		while(ss >> num)
		{
			sum += stoi(num, NULL, 0);
		}

		cout << sum << endl;
	}
}
