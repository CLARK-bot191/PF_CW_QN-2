#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printDivisors(int num) 
{
    vector<int> divisors;
    // Finding all divisors
    for (int i = 1; i <= num; ++i) 
	{
        if (num % i == 0) 
		{
            divisors.push_back(i);
        }
    }
     //Here we reverse the order to print in decreasing order
	 reverse(divisors.begin(), divisors.end());
	 // Print divisors
     for (size_t i = 0; i < divisors.size(); ++i) 
    {
        cout << divisors[i] << endl; 
    }
}

int main() 
{
    int number;
    char response;
    
    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you.\n";
    cout << "The program will repeatedly prompt you to enter a positive integer.\n";
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order.\n";
    
    do {
        cout << "Please enter a positive integer: ";
        cin >> number;
        
        if (number <= 0)
		 {
            if (number == 0) 
			{
                cout << "0 is not a positive integer.\n";
            } else {
                cout << number << " is not a positive integer.\n";
            }
            continue;  
        }
        
        printDivisors(number);
        
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> response;
        
        while (response != 'Y' && response != 'N' && response != 'y' && response != 'n')
		{
            cout << "Please respond with Y (or y) for yes and N (or n) for no.\n";
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> response;
        }
        
    } while (response == 'Y' || response == 'y');
    
    return 0;
}


