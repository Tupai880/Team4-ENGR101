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
    int totalWhite = 0;
    //int totalRed = 0;
    int totalBlack = 0;

/** Quadrant 1 */


/** Camera Methods */
    open_screen_stream();
    take_picture();
    update_screen();

    //for (int row = //startofright*)
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

 