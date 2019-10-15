#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
	ifstream inputFile;
	inputFile.open(argv[1]);

	string line;
	while(getline(inputFile, line))
	{
		stringstream ss(line);
		float a,b,c,d;
		ss >> a >> b >> c >> d;
		float sum = a + b + c +d;
		if(a == b && b == c && c == d)
		{
			sum *= 4;
		}
		if((floor(a) != a || floor(b) != b || floor(c) != c || floor(d) != d) && floor(sum) == sum)//if there is a decimal && the decimal is 0
		{
			cout << sum << ".0" << endl;
		}
		else
		{
			cout << sum << endl;
		}

	}
}
