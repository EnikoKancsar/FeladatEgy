#include <iostream>
#include <vector>

using namespace std;

double OddsAverage(vector<int> &numbers);

int main()
{
    vector<int> numbers;
    cout << "To exit push a non-number character. Input: \n";
    int tmp;
    do
    {
        cin >> tmp;
        if(!cin.fail()) // Needed, otherwise the non-number character gets into the vector as a 0 element.
            numbers.push_back(tmp);

    }while(!cin.fail());

    cout << "Average value of the odd numbers: " << OddsAverage(numbers);

    return 0;
}

double OddsAverage(vector<int> &numbers)
{
    double sum = 0; // The sum of the odd numbers.
    double oddNumbers = 0; // How many odd numbers are in the vector.
    for(unsigned int i = 0; i < numbers.size(); i++) // size() unsigned
    {
        if (numbers.at(i)%2 == 1 || numbers.at(i)%2 == -1)
        {
            sum += numbers.at(i);
            oddNumbers++;
        }
    }
    return sum/oddNumbers;
}
