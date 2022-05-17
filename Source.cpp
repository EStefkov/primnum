/* дава ти се няколко числа да се определи  коя година е роден човека от сбора на цифрите на простите числа от 1990-2020*/
#include <iostream>
#include <string>
#include <math.h>
	using namespace std;

	int main()
	{
		bool arr[2020];
		bool flag;

		// marking all the elements of array as true
		// initial assumption that all numbers are prime
		for (int i =0 ; i < 2020; i++)
			arr[i] = true;


		cout << "\n Prime Numbers from 1900 to 2020 are : \n";

		// implementation of Sieve of Eratosthenes algorithm

		for (int i = 1900; i < 2020; i++)
		{
			for (int j = i * i; j < 2020; j += i)
			{
				// condition true only if number is not prime
				arr[j - 1] = false;
			}
		}

		for (int i = 1900; i < 2020; i++)
		{
			if (arr[i - 1] == true)
				cout << "  " << i << "  ";
		}

		cout << "\n";
		return 0;
	}