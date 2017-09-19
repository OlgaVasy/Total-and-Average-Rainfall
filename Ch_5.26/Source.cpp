// Chapter 5 - Programming Challenge 26, Total and Average Rainfall
// This program uses a file to report the total and average rainfall for the period

#include <iostream>
#include <fstream>
#include <string>;
#include <iomanip>
using namespace std;

int main()
{
	ifstream inputFile;
	string startingMonth, endingMonth;
	double monthlyRainfall,
		   averageRainfall,
		   totalRainfall = 0.0;
	int numMonths = 0;

	inputFile.open("Rainfall.txt");
		
	inputFile >> startingMonth;
	inputFile >> endingMonth;	

	while (inputFile >> monthlyRainfall)
	{
		numMonths++;
		totalRainfall += monthlyRainfall;
	}
	averageRainfall = totalRainfall / numMonths;

	cout << fixed << setprecision(2);

	cout << "During the months of " << startingMonth << "-" << endingMonth << ", the total rainfall was " << totalRainfall << " inches and the average monthly rainfall was " << averageRainfall << " inches." << endl;
	inputFile.close();

	system("PAUSE");

	return 0;
}
