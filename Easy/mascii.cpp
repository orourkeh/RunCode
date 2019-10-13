#include <iostream>
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
		string num;
		stringstream ss(line);
		while(ss >> num)
		{
			char c = ' ';
			if(num[1] == 'b')
			{
				c = stoi(num.substr(2), NULL, 2);// if binary remove the 0b 
			}
			else
			{
				c = stoi(num, NULL, 0);// stoi auto base
			}

			cout << c;
			
		}
	}


}