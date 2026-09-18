#include "Equations.H"

//This is No. 1
double Calc_Fuel_efficiency(double distance_travelled, double Fuel)
{
	return distance_travelled/Fuel;
}
//This is No. 2
double Calc_Total_Sales_Tax(double Sales_Tax_Rate, double Item_Cost)
{
	return Sales_Tax_Rate * Item_Cost;
}
//This is No. 3
double Calc_Parallel_Resistance(int R1, int R2, int R3)
{
	return 1/((1/(double)R1) + (1 / (double)R2) + (1 / (double)R3));
}
//This is No. 4
double Calc_Gravity_Force(double Mass1, double Mass2, double Distance)
{
	return (G * (Mass1 * Mass2)) / (Distance * Distance);
}
//This is No. 5
double Calc_Point_Distance(double X1, double X2, double Y1, double Y2)
{
	return sqrt(((X2 - X1) * (X2 - X1)) + ((Y2 - Y1) * (Y2 - Y1)));
}
//This is No. 6
char Calc_Encoded_Character(char Plain_Text, int offset)
{
	return (Plain_Text - 'a')+'A' - offset;
}
//This is No. 7
double Calc_Final_Y(double Y, double Z, int A, double X)
{
	double fraction = (double)33 / (double)89;
	return (Y / Z) - (fraction * X) / (A % 2) + PI;
}
