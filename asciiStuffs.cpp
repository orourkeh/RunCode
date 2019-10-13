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
	vector<int> numbers;

	
	while(getline(inputFile, line))
	{
		int num;
		stringstream ss(line);

		while(ss >> hex >> num)
		{
			char ascii = num;

			cout << ascii;
		}
		

		
	}


}