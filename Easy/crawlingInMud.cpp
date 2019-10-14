#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream inputFile;
	inputFile.open(argv[1]);

	int floor = 0;
	char key;
	while(inputFile >> key)
	{
		switch(key)
		{
			case 'u': floor += 1;break;
			case 'U': floor += 2;break;
			case 'd': floor -= 1;break;
			case 'D': floor -= 2;break;
			case 'M':inputFile >> key; 
			if(key == 'H')
			{
				floor += 6;
			}break;	
			case 'm':inputFile >> key; 
			if(key == 'h')
			{
				floor += 3;
			}break;	
			case 'S':inputFile >> key; 
				if(key == 'L')
				{
					floor -= 6;
				}break;
			case 's':inputFile >> key; 
				if(key == 'l')
				{
					floor -= 3;
				}break;
		}
	}
	cout << floor << endl;


}