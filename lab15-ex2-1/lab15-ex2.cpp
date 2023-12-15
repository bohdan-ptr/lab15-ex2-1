#include <stdio.h>
#include <iostream>
#include <limits.h>
#include <algorithm>

using namespace std;

int main() {
	int choice;

		printf("oberit zavdanya: \n1. zavdanya 1\n2. zavdanya 2\n3. zavdanya 3\n4. zavdanya 4\n5. zavdanya 5\n6. zavdanya 6\n");
		scanf_s("%d", &choice);
		switch (choice)
		{

		case 1:
			int a, b;
			printf("vvedit pershe chislo:");
			scanf_s("%d", &a);
			printf("vvedit druhe chislo:");
			scanf_s("%d", &b);

			if (a > b) {
				printf("vidpovid: %d", a);
			}
			else
			{
				printf("vidpovid: %d, %d", a, b);
			}
			break;
		case 2:
			int x, y, z;
			printf("vvedit pershe chislo:");
			scanf_s("%d", &x);
			printf("vvedit druhe chislo:");
			scanf_s("%d", &y);
			printf("vvedit trete chislo:");
			scanf_s("%d", &z);

			double minNumber;

			if (x <= y && x <= z) {
				minNumber = x;
			}
			else if (y <= x && y <= z) {
				minNumber = y;
			}
			else {
				minNumber = z;
			}
			printf("minimalne chislo: %lf", minNumber);
			break;
		case 3: {
			int size;
			cout << "Enter the size of the array: ";
			cin >> size;

			int* myArray = new int[size];

			cout << "Enter the elements of the array:" << endl;
			for (int i = 0; i < size; ++i) {
				cin >> myArray[i];
			}

			// Zero out even elements
			for (int i = 0; i < size; ++i) {
				if (myArray[i] % 2 == 0) {
					myArray[i] = 0;
				}
			}

			// Print odd elements
			cout << "Odd elements of the array: ";
			for (int i = 0; i < size; ++i) {
				if (myArray[i] % 2 != 0) {
					cout << myArray[i] << " ";
				}
			}

			// Free allocated memory
			delete[] myArray;

			// Exit switch statement
			break;
		}
		case 4: {
			
			int size;
			cout << "Enter the size of the array: ";
			cin >> size;

			int* myArray = new int[size];

			cout << "Enter the elements of the array:" << endl;
			for (int i = 0; i < size; ++i) {
				cin >> myArray[i];
			}

			// Calculate the sum of all elements
			int sum = 0;
			for (int i = 0; i < size; ++i) {
				sum += myArray[i];
			}

			// Print the sum of array elements
			cout << "Sum of array elements: " << sum << endl;

			// Exit switch statement
			break;
		}
		case 5: {
			int size;
			cout << "Enter the size of the array: ";
			cin >> size;

			int* myArray = new int[size];

			cout << "Enter the elements of the array:" << endl;
			for (int i = 0; i < size; ++i) {
				cin >> myArray[i];
			}

			// Print array elements in reverse order
			cout << "Array elements in reverse order: ";
			for (int i = size - 1; i >= 0; --i) {
				cout << myArray[i] << " ";
			}
			cout << endl;

			// Exit switch statement
			break;
		}

		case 6: {
			int size;
			cout << "Enter the size of the array: ";
			cin >> size;

			int* myArray = new int[size];

			cout << "Enter the elements of the array:" << endl;
			for (int i = 0; i < size; ++i) {
				cin >> myArray[i];
			}

			// Find the minimum and maximum values
			int minValue = INT_MAX;
			int maxValue = INT_MIN;

			for (int i = 0; i < size; ++i) {
				if (myArray[i] < minValue) {
					minValue = myArray[i];
				}
				if (myArray[i] > maxValue) {
					maxValue = myArray[i];
				}
			}

			// Print the minimum and maximum values
			cout << "Minimum value: " << minValue << endl;
			cout << "Maximum value: " << maxValue << endl;

			// Exit switch statement
			break;
		}

		default:
			printf("Invalid choice\n");
			break;
		}

		return 0;
}