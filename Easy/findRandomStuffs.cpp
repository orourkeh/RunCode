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
		int low, high = 0;
		vector<int> list;
		stringstream ss(line);
		ss >> low >> high;

		if (low > high)
		{
			int tmp = low;
			low = high;
			high = tmp;
		}

		for(int i = low; i <= high; i++)
		{
			if(i % 7 == 0 && i % 5 != 0)
			{
				list.push_back(i);
			}
		}
		for(int i = 0; i < list.size()-1; i++)
		{
			cout << list[i] << ",";
		}
		cout << list[list.size()-1] << endl;
	}



}