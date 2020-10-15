#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	system("cls");
	int h=0,m=0,s=0;
	cout<<"\n\t\t\t*****STOPWATCH*****\n";
	cout<<"\n\t\t\t    HH : MM : SS";
	cout<<"\n\t\t\t     "<<h<<" : "<<m<<" : "<<s;
	cout<<"\n\t\t      Press Any Key To Start...";
	_getch();
	
	while(!_kbhit())
	{
		s++;
		Sleep(1000);
		if(s>59)
		{
			m++;
			s=0;
		}
		if(m>59)
		{
			h++;
			m=0;
			
		}
		system("cls");
	cout<<"\n\t\t\t*****STOPWATCH*****\n";
	cout<<"\n\t\t\t    HH : MM : SS";
	cout<<"\n\t\t\t     "<<h<<" : "<<m<<" : "<<s;
	cout<<"\n\t\t      Press Any Key To Stop...\n\n";
	}
	
	_getch();
	cout<<"\n\t\t\t Time Of Pausing: ";
	cout<<"\n\t\t\t     "<<h<<" : "<<m<<" : "<<s<<endl<<endl;
	_getch();
	return 0;
	
}
