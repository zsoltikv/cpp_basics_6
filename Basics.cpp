#include <iostream> // include the input-output stream library for cin and cout

using namespace std; // use the standard namespace to avoid writing std constantly

int main()
{
	// set the locale to support Hungarian characters in the console output
	setlocale(LC_ALL, "hu_HU.UTF-8");

	// -------------------------------------------------------------------------------
	// --- 1. SIMULATING 30 DICE ROLLS AND DISPLAYING VALUES ---
	// -------------------------------------------------------------------------------

	// declare an integer array to store the outcomes of 30 rolls
	int toss[30];

	// seed the pseudo-random number generator using current system time
	srand(time(NULL));

	// iterate 30 times to generate a random number between 2 and 12 for each roll
	for (int i = 0; i < 30; i++) {
		toss[i] = rand() % 11 + 2; // rand() % 11 gives 0-10, adding 2 shifts range to 2-12
	}

	// display header for roll values
	cout << "Value of tosses: ";

	// iterate through the array to print each generated toss value
	for (int i = 0; i < 30; i++) {
		cout << toss[i] << " ";
	}

	cout << endl; // print a newline for clean formatting

	// -------------------------------------------------------------------------------
	// --- 2. CALCULATING THE AVERAGE VALUE OF TOSSES ---
	// -------------------------------------------------------------------------------

	// declare a double variable to accumulate the sum and store the calculated average
	double average = 0;

	cout << "\nAverage of tosses: ";

	// loop through all elements to accumulate the total sum of tosses
	for (int i = 0; i < 30; i++) {
		average += toss[i]; // add current toss value to average accumulator
	}

	// divide total sum by the total number of tosses to get the average
	average /= 30;

	// print the calculated average value
	cout << average << endl;

	// -------------------------------------------------------------------------------
	// --- 3. COUNTING TOSSES GREATER THAN OR EQUAL TO 10 ---
	// -------------------------------------------------------------------------------

	cout << "\nNumber of tosses greater than 10: ";

	// declare a counter variable initialized to 0
	int counter = 0;

	// iterate through the array to check each roll value
	for (int i = 0; i < 30; i++)
	{
		// check if the roll value is greater than or equal to 10
		if (toss[i] >= 10)
		{
			counter++; // increment counter when condition is met
		}
	}

	// print total count of tosses greater than or equal to 10
	cout << counter << endl;

	// -------------------------------------------------------------------------------
	// --- 4. LINEAR SEARCH FOR FIRST OCCURRENCE OF VALUE 12 ---
	// -------------------------------------------------------------------------------

	cout << "\nIndex of first number 12: ";

	// loop through the array from index 0 to find the first occurrence of 12
	for (int i = 0; i < 30; i++)
	{
		// check if current element equals 12
		if (toss[i] == 12)
		{
			cout << i << endl; // print index where 12 was found
			break;             // exit loop immediately after finding first match
		}
	}

	// -------------------------------------------------------------------------------
	// --- 5. LINEAR SEARCH FOR FIRST OCCURRENCE OF VALUE 2 ---
	// -------------------------------------------------------------------------------

	cout << "\nIndex of first nunmber 2: ";

	// loop through the array from index 0 to find the first occurrence of 2
	for (int i = 0; i < 30; i++)
	{
		// check if current element equals 2
		if (toss[i] == 2)
		{
			cout << i << endl; // print index where 2 was found
			break;             // exit loop immediately after finding first match
		}
	}

	// -------------------------------------------------------------------------------
	// --- 6. COMPARING EVEN AND ODD TOSS COUNT ---
	// -------------------------------------------------------------------------------

	cout << "\nWere there more even or odd tosses: ";

	// declare counter variable to count even numbers
	int evenCounter = 0;

	// iterate through the array to check divisibility by 2
	for (int i = 0; i < 30; i++)
	{
		// check if current toss value is even using modulo operator
		if (toss[i] % 2 == 0)
		{
			evenCounter++; // increment counter if number is even
		}
	}

	// compare count of even tosses against half of total rolls (15)
	if (evenCounter > 15)
	{
		// print message if strictly more than half are even
		cout << "More even tosses." << endl;
	}
	else if (evenCounter < 15)
	{
		// print message if strictly less than half are even (meaning more odd tosses)
		cout << "More odd tosses." << endl;
	}
	else
	{
		// print message if even and odd counts are exactly equal (15 each)
		cout << "Equal number of even and odd tosses." << endl;
	}

	// return 0 to indicate program executed successfully
	return 0;

}