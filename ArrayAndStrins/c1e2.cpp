#include <iostream>
#define MAX_CHARS 256 

using namespace std;

bool arePermutation(string str1, string str2)
{
	int countTable[MAX_CHARS] {0};

	for (int i = 0; str1[i] && str2[i]; i++)
	{
		countTable[str1[i]]++;
		countTable[str2[i]]--;
	}

	if (int i = 0; str1[i] || str2[i]) return false;

	for (i = 0; i < MAX_CHARS; i++)
	{
		if (countTable[i]) return false;
	}

	return true;
}

int main(int argc, char* argv[])
{
	if (argc != 3) return 1;

	string str1 = argv[1];
	string str2 = argv[2];

	cout << str1 << ' ' <<str2 << ' ' << arePermutation(str1, str2);
	cout << endl;

	return 0;
}
