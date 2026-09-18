#include "Equations.H"

int main(void)
{
//This is No. 1
	double fuel_efficiency = 0.0, Fuel = 0.0, distance_travelled = 0.0;
		printf("Enter Distance Travelled:   ");
		scanf("%lf", &distance_travelled);
		printf("Enter Fuel Used:   ");
		scanf("%lf", &Fuel);
	// We Are Invoking Function Calc_Fuel_efficiency ("See Equations.h For More Information")
		fuel_efficiency = Calc_Fuel_efficiency(distance_travelled, Fuel);
		printf("Fuel Efficiency: %lf\n", fuel_efficiency);

//This is No. 2
	double Total_Sales_Tax = 0.0, Sales_Tax_Rate = 0.0, Item_Cost = 0.0;
		printf("Enter The Item Cost:   ");
		scanf("%lf", &Item_Cost);
		printf("Enter The Sales Tax:   ");
		scanf("%lf", &Sales_Tax_Rate);
	// We Are Invoking Function Calc_Total_Sales_Tax ("See Equations.h For More Information")
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
	// We Are Invoking Function Calc_Parallel_Resistance ("See Equations.h For More Information")
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
	// We Are Invoking Function Calc_Gravity_Force ("See Equations.h For More Information")
		Force = Calc_Gravity_Force(Mass1, Mass2, Distance);
		printf("This is You Force: %0.14lf\n", Force);

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
	// We Are Invoking Function Calc_Point_Distance ("See Equations.h For More Information")
		Point_Distance = Calc_Point_Distance(X1, X2, Y1, Y2);
		printf("This is Your Point Distance: %lf\n", Point_Distance);

//This is No. 6
	char Plain_Text, Encoded_Character;
	int Offset = 0;
		printf("What is the Character:  ");
		scanf(" %c", &Plain_Text);
		printf("Enter The Offset:   ");
		scanf("%lf", &Offset);
	// We Are Invoking Function Calc_Encoded_Character ("See Equations.h For More Information")
		Encoded_Character = Calc_Encoded_Character(Plain_Text, Offset);
		printf("This is Your Encoded Character: %c \n", Encoded_Character);

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
	// We Are Invoking Function Calc_Final_Y ("See Equations.h For More Information")
		Final_Y = Calc_Final_Y(Y, Z, A, X);
		printf("This is Your Final Y: %lf\n", Final_Y);
	
	return 0;
}