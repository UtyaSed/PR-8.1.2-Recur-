// Lab_8_1-2.cpp
// ������ ³����
// ����������� ������ � 8.1
// ����� �� ����� ������� � �������� �����
// ������ 7

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

char* Change(char* dest, const char* s, char* t, int i)
{
	if (s[i + 1] != 0)
	{
		if ((s[i] == 'w' && s[i + 1] == 'h' && s[i + 2] == 'i' && s[i + 3] == 'l' && s[i + 4] == 'e'))
		{
			strcat(t, "***");
			return Change(dest, s, t + 3, i + 2);
		}
		else
		{
			*t++ = s[i++];
			*t = '\0';
			return Change(dest, s, t, i);
		}
	}
	else
	{
		*t++ = s[i++];
		*t++ = s[i++];
		*t = '\0';
		return dest;
	}
}
int main()
{
	char s[101]; //���������� �������� �����


	cout << "Enter string:" << endl;
	cin.getline(s, 100);

	char* dest1 = new char[151];
	dest1[0] = '\0';

	char* dest2;
	dest2 = Change(dest1, s, dest1, 0);

	cout << endl;
	cout << "string : " << s << endl;
	cout << "Modified string : " << dest2 << endl;

	return 0;
}