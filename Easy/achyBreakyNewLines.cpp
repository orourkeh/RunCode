#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream inputFile;
	inputFile.open(argv[1]);

	string line;

	while(getline(inputFile, line))
	{
		if(!line.empty())
		{
			cout << line << endl;
		}
	}


}