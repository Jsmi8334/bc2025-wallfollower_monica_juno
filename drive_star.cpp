#include <iostream>
#include <cmath>

#include <wall_follower/robot/robot.h>
#include <wall_follower/common/utils.h>


int main(int argc, const char *argv[])

{
    

    

    /**
     * TODO: (P1.1) Write code to m
     
     ake the robot drive in a square. Then,
     * modify your code so that the robot drives in a square 3 times.
     *
     * HINT: A function to send velocity commands to the robot is provided. To
     * use it, use the following code:
     *
     *      drive(vx, vy, wz);
     *
     * Replace vx, vy, and wz with the velocity in the x direction (vx), y
     * direction (vy), and the angular velocity (wz). You can also use this code:
     *
     *      sleepFor(secs);
     *
     * to sleep for "secs" seconds (replace with desired number of seconds).
     */

    // Stop the robot.
    drive(0, 0, 0);
    //sleepFor(1);
    return 0;
}
