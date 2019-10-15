#include "UI.h"
void drawRecord(string s[], int spacing[], int n) 
{
	for (int i = 0;i < n;i++) 
	{
		cout <<left<< setw(spacing[i]) << s[i];
	}
	cout << endl;
}