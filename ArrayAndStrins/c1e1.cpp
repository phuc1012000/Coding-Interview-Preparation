# include <cstring>
# include <iostream>
using namespace std;

const int MAX_CHAR = 256; // Extended ascii

bool isUnique(string str) // Maintain a boolean array to look up
{
	if (str.length() > MAX_CHAR) return false;

	bool chars[MAX_CHAR] { false };
	for (int i = 0; i < str.length(); i++)
	{
		if (chars[int(str[i])]) return false;
		chars[int(str[i])] = true;
	}
	return true;
}

bool isUniqueBitManipulation(string str)
{
	int checker = 0;
	
	for (int i = 0; i < str.length(); i++)
	{
		int bitAtIndex = str[i] - 'a';

		if (checker & ( 1 << bitAtIndex)) return false;
		checker = checker | ( 1 << bitAtIndex);
	}	
	
	return true;
}

int main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
		cout << argv[i] << " " << isUnique(argv[i]) << "\n";
	return 0;
}
