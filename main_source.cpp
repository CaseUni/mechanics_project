#include <iostream>
#include <math.h>
#include "graphics.h"

using namespace std;

double gateEntry( int );            //returns the result from formula
void gatePosition( double, int );        //will control gate position

int main( )
{

	double value = 0;
	int angle = 0; 

	//take value of theeta
	cout << "\nEnter the Value" << endl;
	cin >> angle;

	value = gateEntry( angle );
	if(angle>0&&angle<=10)
		{
			angle=10;
	    }
	if(angle>=11&&angle<=30)
		{
			angle=30;
	    }
	if(angle>=31&&angle<=50)
		{
			angle=50;
	    }
	if(angle>=51&&angle<=70)
		{
			angle=70;
	    }
	if(angle>=71&&angle<=89)
		{
			angle=85;
	    }

	gatePosition( value, angle );

	while (!kbhit( ))
	{
		delay( 200 );
	}

	return 0;
}

double gateEntry( int angle ) 
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

void gatePosition( double value, int angle )
{

	initwindow(600, 550, "Gate of Forbidden Palace");

	setcolor( WHITE );
	

	switch(angle)
	{
		

	case 10:
		{

		outtextxy(350,450,"angle 10");
		getch();
		exit(0);
		}// case 1 ends
		
		
		
	case 30:
		{
			outtextxy(450,350,"angle 30");
			getch();	
			exit(0);
		
		
		}// case 2 ends
		
	
	case 50:
		{
			outtextxy(250,350,"angle 50");
		getch();
			exit(0);
		}// case 3 ends
		
	
	case 70:
		{
			outtextxy(250,350,"angle 70");
			getch();
			exit(0);
		
		}// case 4 ends
	
	case 85:
		{
			outtextxy(250,350,"angle 85");
			getch();
			exit(0);
		
		}// case 5 ends
		
		
		

	
	case 90:
		{
		
		
		
		
		}
	
	
	}




	
	} // switch ends
	
	
	


