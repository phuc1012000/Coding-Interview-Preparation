#include <iostream>
#define MAX_CHARS 256

bool isPalindromePermuation(std::string str)
{
	int countTable[MAX_CHARS] {0};
	bool oddCounter {false};
	
	for (int i = 0; str[i]; i++)
	{
		countTable[str[i]]++;
	}

	for (int i = 0; i < MAX_CHARS; i++)
	{
		if (countTable[i] % 2 == 1)
		{
			if (oddCounter) return false;
			else oddCounter = true;
		}
	}

	return true;
}

int main(int argc, char* argv[])
{
	for (int i =1; i < argc; i++)
	{
		std::string st = argv[i];
		std::cout << st << " " <<isPalindromePermuation(st) << std::endl; 
	}
}
