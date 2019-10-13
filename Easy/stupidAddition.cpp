#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream inputFile;
	inputFile.open(argv[1]);

	string line;

	while(getline(inputFile, line))
	{
		float first, second = 0;

		stringstream ss(line);
		ss >> first >> second;
		if(first != NULL && second != NULL)
		{
			cout << first + second << endl;
			//cout << first << ", " << second << endl;
		}


	}

}