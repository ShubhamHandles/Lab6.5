/*
Question 3 (Loops and Logic): The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 35^2, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to find this number.)
*/

#include<iostream>
using namespace std;

int main(){

	for(int a=1;a>0;a++){
		int b = a*a;
		int d=0;
		for(int c=1;c<=b;c++){ 
			d = d+c;
			if (d==b){
				cout << d << endl;
			}
		}
	}
	
	return 0;
}
