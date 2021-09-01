#include <iostream>

using namespace std;

int hours, fee, salary;

int main() 
{
	hours = 0;
	
	while (hours != -1)
	{
		cout << "worked hours? (input -1 to exit): " << endl;
		cin >> hours;
		if (hours == -1)
		{
			cout << "bye!" << endl;
			break;
		}
		else if (hours <= 40)
		{
			cout << "salary per hour?: " << endl;
			cin >> fee;
			cout << "total salary: " << hours*fee << endl;
		}
		else if (hours > 40)
		{
			cout << "salary per hour?: " << endl;
			cin >> fee;
			salary = (hours - 40) * (fee * 1.5) + (40 * fee);
			cout << "total salary: " << salary << endl;
		}
		
	}
  return 0;
}