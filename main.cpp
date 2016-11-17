#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float income, rent, car, totalrent, totalcar, left, leftprecent;
    
    //Get monthly Income.
    cout << "What is your monthly income? ";
    cin >> income;
    
    //Get monthly Rent.
    cout << "What is your monthly rent? ";
    cin >> rent;
    
    //Get monthly Car Payment.
    cout << "What is your monthly car payment? ";
    cin >> car;
    
    //Calculate Total Rent.
    totalrent = (rent / income) * 100;
    
    //Display Total Rent.
    cout << "You spent " << totalrent << "% of your income on your rent. " << endl;
    
    //Calculate Total Car Payment.
    totalcar = (car / income) * 100;
    
    //Display Total Car Payment.
    cout << "You spent " << totalcar << "% of your income on your car payment. "<< endl;
    
    //Calculate money left over.
    left = income - (car + rent);
    leftprecent = (left / income) * 100;
    
    //Display money left over.
    cout << "You have $" << left << " left. Which means that " << leftprecent << "% of your income remains." << endl;
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
