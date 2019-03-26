#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    double payRate, grossIncome, netIncome, schoolAmount, bondsAmount;
    double clothesAmount, parentsBondsAmount, hoursWorked;
    
    const double TAXRATE = 0.14;
    const double CLOTHESPERCENTAGEOFINCOME = 0.10;
    const double SCHOOLPERCENTAGEOFINCOME = 0.01;
    const double SAVINGSBONDSPERCENTAGEOFINCOME = 0.25;
    const double PARENTSCOCONTRIBUTIONAMOUNT = 0.50;
    
    cout << "Please input the number of hours worked: ";
    cin >> hoursWorked;
    
    cout << "Please input your hourly rate: $";
    cin >> payRate;
    
    grossIncome = hoursWorked * payRate;
    netIncome = grossIncome *= TAXRATE;
    schoolAmount = netIncome * SCHOOLPERCENTAGEOFINCOME;
    netIncome -= (clothesAmount + schoolAmount); 
	clothesAmount = netIncome * CLOTHESPERCENTAGEOFINCOME;
    bondsAmount = netIncome * SAVINGSBONDSPERCENTAGEOFINCOME;
    parentsBondsAmount = bondsAmount * PARENTSCOCONTRIBUTIONAMOUNT;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << netIncome << endl;
    cout << "Clothes & Accessories: $" << clothesAmount << endl;
    cout << "School Supplies: $" << schoolAmount << endl;
    cout << "Savings Bonds: $" << bondsAmount << endl;
    cout << "Parents Bonds Co-Contribution: $" <<parentsBondsAmount << endl;
    
    getch();
    return 0;
}

