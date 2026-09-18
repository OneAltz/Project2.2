/*
	Name: Micah Sandberg
	Date: 9/18/26
	Course: CptS 121 Lab Section 1			 
*/
#ifndef Equations_h
#define Equations_h
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <math.h>
#define G 6.67e-11
#define PI 3.141592653


//This Is The Funtion Prototype For No. 1
//This Will Be Caculating The Fuel Efficiency For Distance_Travelled / Fuel
double Calc_Fuel_efficiency(double distance_travelled, double Fuel);

//This Is The Funtion Prototype For No. 2
double Calc_Total_Sales_Tax(double Sales_Tax_Rate, double Item_Cost);

//This Is The Funtion Prototype For No. 3
double Calc_Parallel_Resistance(int R1, int R2, int R3);

//This Is The Funtion Prototype For No. 4
double Calc_Gravity_Force(double Mass1, double Mass2, double Distance);

//This Is The Funtion Prototype For No. 5
double Calc_Point_Distance(double X1, double X2, double Y1, double Y2);

//This Is The Funtion Prototype For No. 6
char Calc_Encoded_Character(char Plain_Text, int offset);

//This Is The Funtion Prototype For No. 7
double Calc_Final_Y(double Y, double Z, int A, double X);
#endif