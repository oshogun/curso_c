#include <stdio.h>

float toFahrenheit(float celsius);
float toCelsius(float fahrenheit);
float toInches(float centimeters);
float toCentimeters(float inches);


// Codigo principal do programa, é executado quando o programa
// é iniciado.
int main()
{
	// Saúda o usuário
	printf("Conversor de unidades em C!\n");
	
	// Converte 100ºC para fahrenheit e armazena em uma variável
	float celsius_to_fahr = toFahrenheit(100);
	// Converte 100 F para celsius e armazena em uma variável
	float fahrenheit_to_celsius = toCelsius(100);
	// Converte 10cm para polegadas e armazena em uma variável
	float centimeters_to_inches = toInches(10);
	// Converte 10" para centimetros e armazena em uma variável
	float inches_to_centimeters = toCentimeters(10);

	// printa os resultados na tela
	printf("100ºC = %.2f F\n", celsius_to_fahr);
	printf("100F = %.2f ºC\n", fahrenheit_to_celsius);
	printf("10cm = %.2f\"\n", centimeters_to_inches);
	printf("10\" = %.2f cm\n", inches_to_centimeters);

	return 0;
}

// Função que recebe um valor de temperatura em Graus Celsius
// e a converte para Fahrenheit 
float toFahrenheit(float celsius)
{
	return 1.8 * celsius + 32;
}

// Função que recebe um valor de temperatura em Fahrenheit e a 
// converte para Graus Celsius
float toCelsius(float fahrenheit)
{
	return (fahrenheit - 32) / 1.8;
}

// Função que recebe uma medida em centímetros e a converte 
// para polegadas

float toInches(float centimeters)
{
	return centimeters * 0.39370;
}

// Função que recebe uma medida em polegadas e a converte
// para centímetros
float toCentimeters(float inches)
{
	return inches / 0.39370;
}