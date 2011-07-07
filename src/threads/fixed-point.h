#ifndef FIXED-POINT_H
#define FIXED-POINT_H

#include <stdint.h>

/* n stands for an integer
	 f stands for a fixed point number */

/* This is a special variable used in our calculations */
int f = 1 << 14;

//Convert integer to floating point
int
convert_n_f (int n)
{
	return n*f;
}

//convert floating point number to integer
int
convert_f_n_zero (int n)
{
	return n / f; //not finished!
}

convert_f_n_nearest(int n)
{
	if (n >= 0)
	{
		return n + f / 2;
	}
	else 
	{
		return n - f / 2;
	}
}

//Add floating point number to floating point number
int
add_f_f(int x, int y)
{
	return x + y;
}

//Substract floating point number to floating point number
int
sub_f_f(int y, int x)
{
	return x - y;
}

int
mult_f_f (int x, int y)
{
	return ((int64_t) x) * y / f;
}

int
div_f_f (int x, int y)
{
	return ((int64_t) x) * f / y;
}

int
add_n_f (int x, int n)
{
	return x + n * f;
}

int
sub_n_f (int n, int x)
{
	return x - n * f;
}

int
mult_f_n (int x, int n)
{
	return x * n;
}

int
div_f_n (int x, int n)
{
	return x / n;
}

#endif
