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
		string word, code;
		stringstream ss(line);
		bool codeFlag = true;
		while(ss >> word)
		{
			if(codeFlag)
			{
				code += word + ' ';
				codeFlag = false;
			}
			if(word.back() == '.')
			{
				codeFlag = true;
			}
		}
		cout << code << endl;
	}


}