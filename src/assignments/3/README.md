# Inf-1100 Problem set 3

## Overview

In this assignment you will try to formulate an algorithm to draw a line on a computer screen. Note that this assignment is not mandatory. You are not supposed to hand in anything.

## Description

An image shown on a computer screen is a collection of colored dots/squares (pixels). The computer screen itself is organized as a two-dimensional coordinate system with a number of pixels in the horizontal (x) and vertical (y) direction. The more pixels a screen can handle, the more detailed can be displayed in an image. For example, a high definition screen (HD) has 1920 pixels in the x direction and 1080 pixels in the y direction. In contrast, a screen only capable of showing DVD quality images will have 720 pixels in the x direction, and 576 in the y direction.

This assignment is divided into four steps:

1. Given the start and end coordinates of a horizontal line, formulate an algorithm to compute the coordinates of the pixels along the line. Example coordinates: (10,10), (100,10) or (200,100),(100,100).

2. Given the start and end coordinates of a vertical line, formulate an algorithm to compute the coordinates of the pixels along the line. Example coordinates: (100,10), (100,200) or (200,50),(200,250).

3. Given the start and end coordinates of a line with a 45 degree slope, formulate an algorithm to compute the coordinates of the pixels along the line. Example coordinates: (0,0), (100,100) or (100,100),(200,0).

4. Given the start and end coordinates of a line, formulate an algorithm to compute the coordinates of the pixels along the line.

We encourage you to try to implement the algorithm in C code. To this end we provide you with code to open a window on the computer screen and code to set a pixel in the window. In the provided code the window is set up with 1024 pixels horizontally (the x-axis) and 768 pixels vertically (the y-axis). The point 0,0 is in the upper left corner of the window. 0, 767 is in the lower left corner, 1023,0 is in the upper right corner, and 1023,767 is in the lower right corner. Each pixel is represented as a 32 bit value encoding the color of the pixel (in RBG format, see [RGB](http://en.wikipedia.org/wiki/RGB)).

To open a window on the screen we use a library called Simple Directmedia Layer (SDL). More information on SDL can be found [here](http://libsdl.org). Do not worry too much about SDL for this assignment. All the SDL "magic" is handled by the code provided by us.

## Code

If you decide to implement your algorithm, your starting point is the following set of files:

- _drawline.h_ - Specifies the interface of the drawline function. Do not modify this file.
- _drawline.c_ - An empty stub for the drawline program (complete this).
- _Makefile_ - A Makefile for compiling the code.

We've bundled all of these files in a zip file. The zip file is located in the same folder as this document. Use this zip file as a starting point, as it also includes the necessary SDL files.

## Tools

### General

All programming tools are installed on the lab machines. To get started with this assignment, download the zip file with the problem set code and unzip it. You shold then be able to compile the code for this assignment simply by typing 'make' from the shell. Type the command app.exe from the shell to run the program.

### Linux/Mac OS X

If you are programming on Linux/Mac, edit Makefile to build drawline with the Linux/Mac version of the SDL library. See the comment in the Makefile. If you are running Linux/Mac on your own machine, SDL must be installed on the machine.

### Resources

If you wish to learn more about Makefile and make, a starting point is this [tutorial](http://www.opussoftware.com/tutorial/TutMakefile.htm).

[Bresenham](http://www.cs.helsinki.fi/group/goa/mallinnus/lines/bresenh.html) is one example of a fast algorithm for drawing lines ([Wikipedia/Bresenham](http://en.wikipedia.org/wiki/Bresenham's_line_algorithm)).

##  Deadline

This assignment is not mandatory. However, we highly recommend you to complete it.


