#include <iostream>
#include <conio.h>
#include<iomanip>
#include <math.h>
using namespace std;

    int main()
    {
 
    double avedailybalance;
    double Interest;
    double d1;
    double d2;
    double netbalance;
    float payment;
    float interest;
    
    cout << "Input the bill to be paid \n";
    cin >> netbalance;
    cout << "Input the number of days in the billing cycle \n";
    cin >> d1;
    cout << "Input the payment of the customer \n";
    cin >> payment;
    cout << "Input the days before the cycle ends \n";
    cin >> d2;
    cout << "                                         \n";
  cout << "============================================\n";
   avedailybalance=(netbalance*d1-payment*d2)/d1;
  cout<< setprecision(2)<<fixed;
  cout << "Your balance is:"<<avedailybalance<<"pesos"<<endl;
  cout <<"============================================\n";
  interest=avedailybalance*0.0152;
  cout<< "your interest is:"<<interest<<endl;
cout <<"============================================\n";
    getch();
    return 0;
    }
