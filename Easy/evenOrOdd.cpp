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

	int num = 0;
	while(inputFile >> num)
	{
		if(num % 2 == 0)
		{
			cout << num << ' ' << "True" << endl;
		}
		else
		{
			cout << num << ' ' << "False" << endl;
		}
	}
}
