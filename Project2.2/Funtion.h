#ifndef FUNTION_H
#define FUNTION_H
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <math.h>
#define G = 6.67 * pow(10, -11)
#define PI = 3.141592653

//This is No. 1
double Fuel_efficiency(double distance_travelled, double Fuel);
//This is No. 2
double Total_Sales_Tax(double Sales_Tax_Rate, double Item_Cost);
//This is No. 3
double Parallel_Resistance(int R1, int R2, int R3);
//This is No. 4
double Gravity_Force(double Mass1, double Mass2, double Distance);
//This is No. 5
double Point_Distance(double X1, double X2, double Y1, double Y2);
//This is No. 6
char Encoded_Character(char Plain_Text, int offset);
//This is No. 7
double Final_Y(double Y, double Z, double a, double x);

#endif // !FUNTION_H