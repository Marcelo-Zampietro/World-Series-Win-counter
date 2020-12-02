#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string teamName;
	string inputName;
	int counter = 0;
	vector<string> v;

	ifstream teamsList("Teams.txt");
	ifstream winnersList("WorldSeriesWinners.txt");

	// Print team names to the console
	while (getline(winnersList, teamName))
	{
		cout << teamName << endl;
	}

	cout << "Please enter a name from the list above " << endl;
	getline(cin, inputName);

	// Put the World Series winners into a vector
	while (getline(winnersList, teamName))
	{
		v.push_back(teamName);
	}

	// check the winners vector to see how many times the inputName appears
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == inputName)
		{
			counter++;
		}
	}

	// cout results
	cout << inputName << " won the World Series " << counter << " times." << endl;
	cin.get();
}