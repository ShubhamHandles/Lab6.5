//Question 1 (Loops): Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50. You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer. 

#include<iostream>
using namespace std;

int main(){
 
//given rate values for each:
//Apple@=1
//Mango@=3 
//Banana@=0.5

//equations:
//nApple+nMango+nBanana = 100
//(Apple@*nApple)= A
//(Mango@*nMango)= M
//(Banana@*nBanana) = B
//A+M+B = 100

//define variables

	int A,M,B;

//loops
	for(int nApple=0; nApple<=100; nApple++){
		A=nApple*1;
		for(int nMango=0; nMango<=33; nMango++){
			M=nMango*3;
			for(int nBanana=0; nBanana<=100; nBanana++){
				if (nBanana%2==0){
					B=nBanana/2;
					if (nApple+nMango+nBanana==100 and A+M+B==100){
						cout << nApple << " Apples, "; 
						cout << nMango << " Mangoes and "; 
						cout << nBanana << " Bananas." << endl;
						}
					}			
				}
			}
		}
	return 0;
}



