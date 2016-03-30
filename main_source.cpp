#include <iostream>
#include <math.h>
#include "graphics.h"

using namespace std;

double gateEntry( float );            //returns the result from formula
void gatePosition( double, float );        //will control gate position

int main( )
{

	double value = 0;
	float angle = 0; 

	//take value of theeta
	cout << "\nEnter the Value" << endl;
	cin >> angle;

	value = gateEntry( angle );
	gatePosition( value, angle );

	while (!kbhit( ))
	{
		delay( 200 );
	}

	return 0;
}

double gateEntry( float angle ) 
{

	const float PI = 3.14159265; 
	const float num1 = 0.2, num2 = 0.4;
	double formula = 0;

	if (angle == 90)
		return 0;

	//generates value of : M/|T|
	formula = ( num1 * cos( angle * PI / 180.0 ) ) / ( powf( (0.41 - num2 * sin( angle * PI / 180.0 ) ), 0.5 ) );

	cout << formula << endl;  //for debugging

	return formula;

}

void gatePosition( double value, float angle )
{

	initwindow(600, 550, "Gate of Forbidden Palace");

	int x1 = 50, x2 = 450;
	int y1 = 450, y2 = 450;

	setcolor( YELLOW );

	for( y2; y2 >= 150 ; y2-=50, x2-=66.67)
	{

		setlinestyle(0,0xFFFF,1);
		line( 50, 150, 50, 450);
		setlinestyle(1,0xFFFF,3);
		line( x1, y1, x2, y2);
		delay( 500 );

		if(y2 != 150)
		{
			cleardevice();
		}
		else
			break;

	}

}