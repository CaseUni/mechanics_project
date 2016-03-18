#include <iostream>
#include <math.h>
#include "graphics.h"

using namespace std;

double gateEntry( );            //returns the result from formula
void gatePosition(double);        //will control gate position

int main( )
{
	
	double value = 0;

	value = gateEntry();
	gatePosition( value );

	while (!kbhit( ))
	{
		delay( 200 );
	}

	return 0;
}

double gateEntry() 
{

	const float PI = 3.14159265; 
	const float num1 = 0.2, num2 = 0.4;
	float value = 0; 
	double formula = 0;


	//take value of theeta
	cout << "\nEnter the Value" << endl;
	cin >> value;

	if (value == 90)
		return 0;

	//generates value of : M/|T|
	formula = ( num1 * cos( value * PI / 180.0 ) ) / ( powf( (0.41 - num2 * sin( value * PI / 180.0 ) ), 0.5 ) );

	cout << formula << endl;  //for debugging

	return formula;
	
}

void gatePosition( double value )
{

	initwindow(600, 550, "Gate of Forbidden Palace");

	setcolor( YELLOW );
	line( 50, 150, 50, 450);
	rectangle( 100, 450, 400, 400);	

}