#include <iostream>
#include <iomanip>
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
		int index = 0;
		stringstream ss(line);
		ss >> index;
		int num = 0;
		vector<int> list;
		while(ss >> num)
		{	
			ss.ignore(1);//ignore comma
			
			list.push_back(num);
		}

		int bigNum = list[index-1];
		int biggerNum =0;
		for(int i = 0; i < list.size(); i++)
		{
			if(list[index] > bigNum)
			{
				biggerNum = list[index];
				break;
			}
			index = (index+1) % (list.size()-1);
		}
		if(biggerNum > bigNum)
		{
			cout << biggerNum << endl;
		}

	}
}
