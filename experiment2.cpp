
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    
    	double mass;
    	double volume;
    	double density;
    
	cout << "Please input the mass of the object in kg\n";
	cin >> mass;
	
	cout<< "Please input the volume of the object in m^3 \n";
	cin>> volume;
	
	density=mass/volume;
	
	cout<< setprecision(2)<<fixed;
	cout<< "================================================== \n";
	cout << "The density of the object is "<<density<<"kg/m^3"<<endl;
        getch;
        return 0;
    }

