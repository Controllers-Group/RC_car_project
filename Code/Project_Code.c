//define 4 pins for output
#define M1 2
#define M2 3
#define M3 4
#define M4 5

//define a variable to take a order from user 
char t; 

void setup()
{
	//Make 4 pins as output
	pinMode( M1 , OUTPUT ) ;
	pinMode( M2 , OUTPUT ) ;
	pinMode( M3 , OUTPUT ) ;
	pinMode( M4 , OUTPUT ) ;
	Serial.begin(9600); 
}


/*
we make a function to use it to move the car
inputs --> 4 parameters 
each parameter for each wheel
out --> car movement 
*/
void move(int m1,int m2,int m3,int m4)
{ 
	digitalWrite ( M1 , m1 ) ;
	digitalWrite ( M2 , m2 ) ;
	digitalWrite ( M3 , m3 ) ;
	digitalWrite ( M4 , m4 ) ;
}

/*
Target --> move the car forward
way -->
	make the M2 , M4 ==> High 
	make the M1 , M3 ==> Low
*/
void forward()      
{
	move( 0 , 1 , 0 , 1 ) ; 
}

/*
Target --> move the car right
way -->
	make the M2 , M3 ==> High 
	make the M1 , M4 ==> Low
*/
void right()        
{
	move( 0 , 1 , 1 , 0 ) ; 
}

/*
Target --> move the car left
way -->
	make the M1 , M4 ==> High 
	make the M2 , M3 ==> Low
*/
void left()         
{ 
	move( 1 , 0 , 0 , 1 ) ; 
}

/*
Target --> move the car backward
way -->
	make the M1 , M3 ==> High 
	make the M2 , M4 ==> Low
*/
void back()         
{
	move( 1 , 0 , 1 , 0 ) ; 
}

/*
Target --> stop the car
way -->
	make all wheels as low to stop car
	M1 , M2 , M3 , M4 ==> Low
*/
void Stop()         
{
	move( 0 , 0 , 0 , 0 ) ; 
}

void loop() 
{
	//read order from user
	t = Serial.read();


	// we make a Switch Case to see the input order from user
	switch(t)
	{
		//forward case
		case 'F':
		forward();
		break;
		
		//right case
		case 'R': 
		right();	
		break;
		
		//left case
		case 'L':
		left();	
		break;
		
		//backward case
		case 'B':
		back();	
		break;
		
		//stop case
		case 'S':
		Stop();
		break;
	}
}