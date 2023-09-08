#pragma once


int Fibonacci(int num) {
	if (num <= 1) { 
		return num; 
		} 
	else { return Fibonacci(num - 1) + Fibonacci(num - 2);
	} 
}

// Converts decimal numbers to bases from 2-16
std::string decimalToBase(int number, int base) {    // Code derived from Eder Sayd - "Number conversion to any base, C++"
    // from YouTube https://www.youtube.com/watch?v=0a8kIrIzXac
    std::string basesUsed = "0123456789ABCDEF";      // We also spoke of this same code and method in CS201 SI on 2/2/23 and 2/7/23
    std::string result = "";

    while (number > 0) {
        result = basesUsed[number % base] + result;   // Modulo the decimal integer and add it to the result
        number /= base;                               // Divide the number by the base
    }
    return result;
}