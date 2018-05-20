#include <iostream>
#include <string>
using namespace std;

string solution(string S, int K);
string reverse(string S); // Helper function to reverse a string

int main()
{
	string S = "2-4A0r7-4k";
	cout << "Before formatting: " << S << endl;
	cout << "After formatting: " << solution(S, 3) << endl;
	return 0;
}

string solution(string S, int K)
{
	string formatted;

	for (int i = S.length() - 1; i >= 0; i--)
	{
		if (S[i] != '-')
		{
			if ((formatted.length() % (K + 1)) == K)
				formatted.push_back('-');

			formatted.push_back(toupper(S[i]));
		}
	}

	return reverse(formatted);
}

string reverse(string  S)
{
	for (int i = 0; i < S.length() / 2; i++)
	{
		swap(S[i], S[S.length() - i - 1]);
	}

	return S;
}