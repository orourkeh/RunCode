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
		bool flag = true;
		for(int i = 0; i < line.size() / 2; i++)
		{
			if(line[i] != line[line.size()-i-1])
			{
				flag = false;
				break;
			}
		}
		if(flag == true)
		{
			cout << "True" << endl;
		}
		else 
		{
			cout << "False" << endl;
		}
	}



}