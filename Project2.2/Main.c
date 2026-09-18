#include "Equations.H"

int main(void)
{
//This is No. 1
	double fuel_efficiency = 0.0, Fuel = 0.0, distance_travelled = 0.0;
	printf("Enter Distance Travelled:   ");
	scanf("%lf", &distance_travelled);
	printf("Enter Fuel Used:   ");
	scanf("%lf", &Fuel);
	fuel_efficiency = Calc_Fuel_efficiency(distance_travelled, Fuel);
	printf("Fuel Efficiency: %lf\n", fuel_efficiency);

//This is No. 2
	double Total_Sales_Tax = 0.0, Sales_Tax_Rate = 0.0, Item_Cost = 0.0;
	printf("Enter The Item Cost:   ");
	scanf("%lf", &Item_Cost);
	printf("Enter The Sales Tax:   ");
	scanf("%lf", &Sales_Tax_Rate);
	Total_Sales_Tax = Calc_Total_Sales_Tax(Sales_Tax_Rate, Item_Cost);
	printf("This is the Total Sales Tax: %lf\n", Total_Sales_Tax);

//This is No. 3
	double Parallel_Resistance = 0.0, R1 = 0.0, R2 = 0.0, R3 = 0.0;
	printf("Enter The First Resistance Value:   ");
	scanf("%lf", &R1);
	printf("Enter The Second Resistance Value:   ");
	scanf("%lf", &R2);
	printf("Enter The Third Resistance Value:   ");
	scanf("%lf", &R3);
	Parallel_Resistance = Calc_Parallel_Resistance(R1, R2, R3);
	printf("This is You Parallel_Resistance: %lf\n", Total_Sales_Tax);

//This is No. 4
	double Force = 0.0, Mass1 = 0.0, Mass2 = 0.0, Distance = 0.0;
	printf("Enter The Mass Of The First Object:   ");
	scanf("%lf", &Mass1);
	printf("Enter The Mass Of The Second Object:   ");
	scanf("%lf", &Mass2);
	printf("Enter The Distance Between Them:   ");
	scanf("%lf", &Distance);
	Force = Calc_Gravity_Force(Mass1, Mass2, Distance);
	printf("This is You Force: %lf\n", Force);

//This is No. 5
	double Point_Distance = 0.0, X1 = 0.0, X2 = 0.0, Y1 = 0.0, Y2 = 0.0;
	printf("Enter The Value Of The First X:   ");
	scanf("%lf", &X1);
	printf("Enter The Value Of The Second X:   ");
	scanf("%lf", &X2);
	printf("Enter The Value Of The First Y:   ");
	scanf("%lf", &Y1);
	printf("Enter The Value Of The Second Y:   ");
	scanf("%lf", &Y2);
	Point_Distance = Calc_Point_Distance(X1, X2, Y1, Y2);
	printf("This is Your Point Distance: %lf\n", Point_Distance);

//This is No. 6
	double Point_Distance = 0.0, X1 = 0.0, X2 = 0.0, Y1 = 0.0, Y2 = 0.0;
	printf("Enter The Value Of The First X:   ");
	scanf("%lf", &X1);
	printf("Enter The Value Of The Second X:   ");
	scanf("%lf", &X2);
	printf("Enter The Value Of The First Y:   ");
	scanf("%lf", &Y1);
	printf("Enter The Value Of The Second Y:   ");
	scanf("%lf", &Y2);
	Point_Distance = Calc_Point_Distance(X1, X2, Y1, Y2);
	printf("This is Your Point Distance: %lf\n", Point_Distance);

//This is No. 7
	double Final_Y = 0.0, Y = 0.0, Z = 0.0, A = 0.0, X = 0.0;
	printf("Enter The Value Of Y:   ");
	scanf("%lf", &Y);
	printf("Enter The Value Of Z:   ");
	scanf("%lf", &Z);
	printf("Enter The Value Of A:   ");
	scanf("%lf", &A);
	printf("Enter The Value Of X:   ");
	scanf("%lf", &X);
	Final_Y = Calc_Final_Y(Y, Z, A, X);
	printf("This is Your Final Y: %lf\n", Final_Y);
	
	return 0;
}