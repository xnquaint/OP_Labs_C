

#include <iostream>
#include <cmath>
using namespace std;

/*
Визначити, скільки повних годин(h) і повних хвилин(m)
пройшло з початку доби до k-ої її секунди
*/


int main()
{
	int s, h, m; // вводимо змінні (секунди, години, хвилини)
	int SecDay = 86400;
	int SecMinute = 60;
	int SecHour = 3600;
	cout << "Enter the number of seconds" << endl;
	cin >> s;
	if (s > SecDay ||  s < 0) 
	{
		cout << "There are only 86400 seconds in a single day" << endl;
		return 0;  
	}
	h = s / SecHour;   // ділимо секунди на їх к-сть в одній годині 
	m = s % SecHour / SecMinute;  // залишок секунд ділимо на їх к-сть в одній хвилині
	cout << "The number of hours is " << h << endl;
	cout << "The number of minutes is " << m << endl;
	return 0;
	
}

	

