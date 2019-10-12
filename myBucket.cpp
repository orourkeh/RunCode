#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream inputFile;
	inputFile.open(argv[1]);

	string line;
	vector<int> numbers;

	int maxSet= 0;
	while(getline(inputFile, line))
	{
		int num = stoi(line) / 10;
		numbers.push_back(num);
		if(num > maxSet)
		{
			maxSet = num;
		}
		
	}


	int sets[maxSet+1] = {0};
	for(int i = 0; i < numbers.size(); i++)
	{
		sets[numbers[i]]++;
	}
		
	

	for(int i = 0; i < maxSet+1; i++)
	{
		cout << sets[i];
	}

}