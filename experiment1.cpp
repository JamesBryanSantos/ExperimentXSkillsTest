
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    	int price;
    	int ticketssold;
    	int total;
    	int numBox;
    	int numSide;
    	int numPre;
    	int numGen;

	const double BOX = 250;
	const double SIDELINE = 100;
	const double PREMIUM = 50;
	const double GENAD = 25;
	
	cout << "Input the number of Box ticket sold\n";
	cin >> numBox;
	
	cout << "Input the number of Sideline ticket sold\n";
	cin >> numSide;
	
	cout << "Input the number of Premium ticket sold\n";
	cin >> numPre;
	
	cout << "Input the number of General Admission ticket sold\n";
	cin >> numGen;
	
	ticketssold = numBox + numSide + numPre + numGen;
	total=(numBox*BOX+numSide*SIDELINE+numPre*PREMIUM+numGen*GENAD);
	cout<< "================================================= \n";
	cout << "The total number of tickets sold is: "<<ticketssold<<"pcs"<<endl;
	cout << "The total price is:"<<"$"<<total<<endl;
        getch;
        return 0;
    }

