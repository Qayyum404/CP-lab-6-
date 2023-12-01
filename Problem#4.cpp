#include<iostream>
using namespace std;
int hour(int h)
{
	cin >> h;
	return h;
}
float charges(float charge)
{
	int h = 0;
	int d = hour(h);
	charge = 0;
	
	cout << "Hours";


	
	
		if (d > 0 && d <= 3)
		{
			charge = 2.00;
			
		}
		else if (d > 3 && d <= 19)
		{
			float a = (d - 3) * 0.5;
			charge = 2.00 + a;
			
		}
		else if(d>19 && d <= 24)
		{
			charge = 10.00;
		}
		else
		{
			cout<<"Maximum hours in a day is 24, so keep your mind fresh.";
		}
		
		
	
	return charge;
}
int cars(int i)
{
	cout << "Cars\n";
	for (int i = 1; i <= 3; i++)
	{
		cout << i << "\n";
	}
	return i;
}



int main()
{
	const int car = 3;
	float charge = 0;
	int i = 1;
	cout<< cars(i);
	int d = 0;
	cout << "Hours\tCharges\t";
	for (int i = 0; i < car; i++)
	{
		int hours = hour(d);
		float charge = charges(hours);
		cout << hours << "\t" << charge << "\n";
	}
	


	return 0;
}