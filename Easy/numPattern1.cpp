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
		int start = 0;
		ss >> start;

		cout << start + 3 << ' ';
		cout << start + 4 << ' ';
		cout << start + 7 << ' ';
		cout << start + 10 << ' ';
		cout << start + 17 << ' ';
	}
}
