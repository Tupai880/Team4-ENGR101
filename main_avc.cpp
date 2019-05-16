//Header Files
#include <iostream>
#include <stdio.h>
#include "E101.h"
#include <unistd.h>
#include <time.h>

int main(){
/** Initialise Camera Hardware */  
    int err;
    err = init();
    open_screen_stream();
	take_picture();
	update_screen();

        /** Initialise Values */
    int countRow = 0;
    int countColumn = 0;
    int totalWhiteL = 0;
    //int totalRedL = 0;
    //int totalBlackL = 0;
    int totalWhiteR = 0;
    int totalRedR = 0;
    int totalBlackR = 0;
    float leftWhiteness = 0;
    //float leftBlackness = 0;
    //float leftRedness = 0;
    float rightWhiteness = 0;
    //float rightBlackness = 0;
    //float rightRedness = 0;
    int Maximum = 0;

/** Quadrant 1 */


/** Camera Methods */
    open_screen_stream();
    take_picture();
    update_screen();

    for (countColumn = 0; countColumn < 320; countColumn++) {
		while(countColumn < 130) {
			for (countRow = 0; countRow < 120; countRow++){
				totalRedL = totalRedL + (int)get_pixel(row, count, 0);
				totalBlackL = totalBlackL + (int)get_pixel(countRow, countColumn, #);
				totalWhiteL = totalWhiteL + (int)get_pixel(countRow, countColumn, #);
				totInt = totInt + (int)get_pixel(row, col, 3);
				}
			}	
		while(countColumn > 190) {
			for (countRow = 0; countRow < 120; countRow++){
				totalRedR = totalRedR + (int)get_pixel(row, count, 0);
				totalBlackR = totalBlackR + (int)get_pixel(countRow, countColumn, #);
				totalWhiteR = totalWhiteR + (int)get_pixel(countRow, countColumn, #);
				totInt = totInt + (int)get_pixel(row, col, 3);
				}
			}
}
	//leftRedness = (float)totalRedL/(3.0*(float)totInt);
	leftWhiteness = (float)totalWhiteL/(3.0*(float)totInt);
	//leftBlackness = (float)totalBlackL/(3.0*(float)totInt);
	//RightRedness = (float)totalRedR/(3.0*(float)totInt);
	RightWhiteness = (float)totalWhiteR/(3.0*(float)totInt);
	//RightBlackness = (float)totalBlackR/(3.0*(float)totInt);
}

/** Move Right */
    //Left Motor Forward
class leftMotor{
    void Forward(){
        set_motor(n,40);
    }

}
/** Move Left */
    //Right Motor Forward
class rightMotor{


}

 
