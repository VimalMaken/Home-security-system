/**
CS 3307 Security Project
Date: 2020-11-11
@author: Group53
@brief: main.cpp file that runs the acceptence tests for integrating the camera
**/

#include"camera.h"

using namespace std;
/** 
@brief: Runs the hardware camera on the raspberry pi will not work virtually.
@param: None
@return: None
**/
int main()
{
    //Instatiating a camera object
    camera test;

    //Runs the camera indefinitely
    test.start("0");

    //Takes a screen shot and saves a jpg file
    test.screenShot();

    //Turns the camera off and ends execution
    test.off();

    return 0;
}
