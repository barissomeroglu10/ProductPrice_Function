/*
In this code, we will calculate last price according to profit/loss ratio

Developer: Barış Soemroğlu
Date: 10.04.2024 - 10:00 pm
*/



#include <iostream>

using namespace std;

// prototype declaration for functions
double PriceCalculator(double, double);
void Result(double, double);

// Globale variable
double Ratio, Price, LastPrice;

int main()
{
	// double Ratio, Price, LastPrice;
	// if we define the variable like this we will get identifer error for functions

	cout << "Please Enter the Ratio = ";
	cin >> Ratio;

	cout << "Please Enter the Price = ";
	cin >> Price;

	// Call the function
	Result(Ratio, Price);

	return 0;
}

// Function definition
double PriceCalculator(double Ratio, double Price)
{
	if (Ratio > 0)
	{
		LastPrice = Price + ((Price * Ratio) / 100);

		return LastPrice;
	}

	else if (Ratio < 0)
	{
		LastPrice = Price + ((Price * Ratio) / 100); // pay attention that the mathematical operation is same with if condition

		return LastPrice;


	}

	else
		return Price;

}

// Function definition
void Result(double Ratio, double Price)
{
	cout << "Price according to the Ratio = " << PriceCalculator(Ratio, Price) << endl;
}