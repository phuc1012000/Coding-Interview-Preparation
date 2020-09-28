#include <iostream>

using namespace std;

string urlify(char str[])
{
	int i;
	int spaceCount = 0;
	
	for (i = 0; str[i] ;  i++)
	{
		if (str[i] == ' ') spaceCount++;
	}

	while (str[i-1] == ' ')
	{
		spaceCount--;
		i--;
	}

	int length = i + 2 * spaceCount;
	int index = length - 1;

	str[index--] = '\0';
	
	for (int j = i-1; j >= 0; j--)
	{
		if (str[j] == ' ')
		{
			str[index] = '0';
			str[index-1] = '2';
			str[index-2] = '%';

			index -= 3;
		}
		else
		{
			str[index] = str[j];
			index--;
		}
	}
	cout << length;
	return str;
}

int main(int argc, char* argv[])
{
	for (int i = 1; i < argc; i++)
	{
		cout << argv[i] << " : " << urlify(argv[i]) << endl; 
	}

	return 0;
}
