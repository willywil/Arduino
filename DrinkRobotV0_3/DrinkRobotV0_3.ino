/*
	Name:		DrinkRobotV0.3.ino
	Created:	8/18/18 
	Author:		jon
	Note:		Timer interrupt for drink robot	
*/
/*
	*******Need to Change Notes***********
	-Create a header file for the defines of pins and recipe values
	-Possibly change everything to 2 structures for the 2 possible button presses
	-Better organize the code
	*********** Goals ***************
	Determine the ratio of the recipe and determine the time for the pumps to run
	Divide that recipe by some amount and only dispence that amount in a given timer interrupt interval
	Loop this sequence of steps until the button is no longer pressed
	In the loop compare timer count to recipe values and turn off motors when timer counter value is greater than
	When the button is released stop the pumps when the ratio has been met
	The timer will be cleared of the counter value every time the master count has been met
*/

#include <TimerThree.h>
#include <TimerOne.h>
#include <TimeLib.h>
#include <Time.h>

IntervalTimer myTimer;
#define ingTime1 = 100;
#define ingTime2 = 100;
#define ingTime3 = 100;
#define ingTime4 = 100;
#define ingTime5 = 100;


#define ledPin 13
unsigned int drink1[2] = { 100, 100 };
unsigned int drink2[3] = { 100, 100, 100};
unsigned int pumpPin[5] = {39,38,37,36,35};
unsigned int blinkCopy;  // holds a copy of the blinkCount
int butt1 = 34;
int butt2 = 33;
bool recipe1 = true;
bool recipe2 = true;
bool recipeButton1 = false;
bool recipeButton2 = false;



void pumps(unsigned int blinkCopy);

void setup()
{
	pinMode(ledPin, OUTPUT);
	pinMode(butt1, INPUT);
	pinMode(butt2, INPUT);

	for(int i=0; i < 5; i++)//***change 5 to have the length of the array****
	{
		pinMode(i, OUTPUT);
	}
	Serial.begin(115200);
	
}

int ledState = LOW;
volatile unsigned long masterCount = 0;
volatile unsigned long masterTimeReset = 100;

void blinkLED() {
	if (masterCount != masterTimeReset)
	{
		masterCount++;
	}
	else
	{
		masterCount = 0;
	}


}

void loop()
{
	recipeButton1 = digitalRead(butt1);
	recipeButton2 = digitalRead(butt2);

	if (!recipeButton1 != !recipeButton2) //Prevent 2 buttons being pressed at the same time
	{
		myTimer.begin(blinkLED, 100000); //Turn on the timer for the counter
		
		if (recipeButton1 != HIGH)
		{
			recipe1 = false;
			Serial.println(recipeButton1);
			digitalWrite(ledPin, HIGH);
		}
		

		if (recipeButton2)recipe2 = false;
	}else
		{
			digitalWrite(ledPin, LOW);
		}
	

	noInterrupts();
	blinkCopy = masterCount;
	interrupts();
	pumps(blinkCopy);
	Serial.print("blinkCount = ");
	Serial.println(blinkCopy);
	delay(100);
}

void pumps(unsigned int blinkCopy)
{
	if(blinkCopy != drink1[0])
	{
		//Serial.println("hello");
		digitalWrite(pumpPin[0], HIGH);
	}
	if (blinkCopy != drink1[1])
	{
		//Serial.println("hello");
		digitalWrite(pumpPin[1], HIGH);
	}

}
