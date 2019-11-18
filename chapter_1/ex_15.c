#include <stdio.h>

int fahrenheit_to_celsius(int temp);

int main()
{
	int temp, converted_temp;
	
	printf("Enter a temperature to be converted to Celsius: ");
	scanf("%d", &temp);
	
	converted_temp = fahrenheit_to_celsius(temp);
	printf("\n");
	printf("  F  |  C\n");
	printf(" %3d : %3d\n", temp, converted_temp);
	
	return 0;
}

int fahrenheit_to_celsius(int temp)
{
	int celsius = 5 * (temp - 32) / 9;
	return celsius;
}
