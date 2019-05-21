//Header Files
#include <iostream>
#include <stdio.h>
#include "E101.h"
#include <unistd.h>
#include <time.h>

int Direction = 0;
int main(){
/** Initialise Camera Hardware */  
    //int err;
    //err = init();
    open_screen_stream();
	take_picture();
	update_screen();

        /** Initialise Values */
    int countRow = 0;
    int countColumn = 0;
    int totalWhiteL = 0;
    int totalGreenL = 0;
    //int totalBlackL = 0;
    int totalWhiteR = 0;
    int totalGreenR = 0;
    //int totalBlackR = 0;
    //float leftWhiteness = 0;
    //float leftBlackness = 0;
    float leftGreenness = 0;
    //float rightWhiteness = 0;
    //float rightBlackness = 0;
    float rightGreenness = 0;
    float rightRedness = 0;
    int totalRedR = 0;
    float leftRedness = 0;
    int totalRedL = 0;
    //int Quadrent = 2;
    //int Maximum = 0;
    	
    //0 = left 1 = right
	set_motor(1, 44);
	set_motor(5, 52);
/** Quadrant 1 */


/** Camera Methods */
    open_screen_stream();
    take_picture();
    update_screen();
	
    for (countColumn = 0; countColumn < 320; countColumn++) {
		while(countColumn < 130) {
			for (countRow = 0; countRow < 120; countRow++){
				totalGreenL = totalGreenL + (int)get_pixel(countRow, countColumn, 1);
				//totalBlackL = totalBlackL + (int)get_pixel(countRow, countColumn, #);
				totalWhiteL = totalWhiteL + (int)get_pixel(countRow, countColumn, 3);
				totalRedL = totalRedL + (int)get_pixel(countRow, countColumn, 0);
				}
			}	
		while(countColumn > 190) {
			for (countRow = 0; countRow < 120; countRow++){
				totalGreenR = totalGreenR + (int)get_pixel(countRow, countColumn, 0);
				//totalBlackR = totalBlackR + (int)get_pixel(countRow, countColumn, #);
				totalWhiteR = totalWhiteR + (int)get_pixel(countRow, countColumn, 3);
				totalRedR = totalRedR + (int)get_pixel(countRow, countColumn, 0);
				}
			}
	}
	leftGreenness = (float)totalGreenL/(3.0*(float)totalWhiteL);
	//leftWhiteness = (float)totalWhiteL/(3.0*(float)totInt);
	//leftBlackness = (float)totalBlackL/(3.0*(float)totInt);
	rightGreenness = (float)totalGreenR/(3.0*(float)totalWhiteR);
	//RightWhiteness = (float)totalWhiteR/(3.0*(float)totInt);
	//RightBlackness = (float)totalBlackR/(3.0*(float)totInt);
	leftRedness = (float)totalRedR/(3.0*(float)totalWhiteL);
	rightRedness = (float)totalRedR/(3.0*(float)totalWhiteR);
	printf("Greenness on left %f\n", leftGreenness);
	printf("Greenness on right %f\n", rightGreenness);
	//if (Quadrent = 2) {
		if (leftGreenness > 0.5) {
			//Forward();
			//Backward();
			Direction = 1;
			printf("Go Right \n");
		}
		if (rightGreenness > 0.5) {
			//Forward();
			//Backward();
			Direction = 2;
			printf("Go Left\n");
		}
		if (rightGreenness < 0.5 && leftGreenness < 0.5) {
			Direction = 0;
			printf("Go straight\n");}
		//if ((rightRedness > 0.9) || (leftRedness > 0.9)) {
		//	Quadrent = Quadrent + 1;
		//}
	//}
			if ( Direction == 0) {
				set_motor(1,50);
				hardware_exchange();
				set_motor(5,50);
				hardware_exchange();
			}


/** Move_Right */
    //Left Motor Forward
//class leftMotor{
    //void Forward(){
		
			//if (Quadrent = 2) {
			if (Direction == 1) {
				set_motor(1,42);
				hardware_exchange();
				set_motor(5,54);
				hardware_exchange();
			}
				if (Direction == 2) {
				set_motor(1,54);
				hardware_exchange();
				set_motor(5,42);
				hardware_exchange();
			}		
				//set_motor(1,54);
				//set_motor(5,54)
				//On red board the two grey blocks on # side 
				//labeled M1 and M5 1 is left and 5 is right
				//hardware_exchange();
			//}
			//if (Quadrent = 3) {
				//set_motor(5,48);
				//set_motor(1,48);	
				//hardware_exchange();
				//sleep1(0, 20);
				//set_motor(5,54);
				//set_motor(1,54);
				//hardware_exchange();
			//}
		//}
    //}
//}

/** Move_Left */
    //Right Motor Forward
//class rightMotor{
	//void Backward(){
		
			//if (Quadrent = 2) {
			//if (Direction == 1) {
			//}
			//	if (Direction == 2) {
				
			//
				
			//}
			//if (Quadrent = 3) {
				//set_motor(5,48);
				//set_motor(1,48);
				//hardware_exchange();
				//sleep1(0, 20);
				//set_motor(5,42);
				//set_motor(1,42);
				//hardware_exchange();
			//}
		//}
	//}
}
