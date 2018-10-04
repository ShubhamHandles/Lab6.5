/*
Question 2 (Functions): You are a salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary. 
1. Just a salary of Rs 600 per week;
2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week) 
3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
Write a program to help decide the best choice of compensation. You ask the user for input (Write a function for this). Then write other functions for each of the options. Write a driver program to use the 4 functions and decide the best option for yourself. (Of course, the weekly sales - the number of shoes sold per week has to be given by the user) 
*/

#include<iostream>
using namespace std;

//shoe@= Rs.225
//work= 40 hrs./week
//choice1= Rs.700/week

//ask for input
int ShoeSales(){
	cout << "Enter the number of weekly sales of shoes :" << endl;
	int S;
	cin >> S;
	return S;
}

float choice2(int s){
	float c2 =s*225*0.1+280;
	return c2;
}

float choice3(int s){
	float c3 = (0.2*225+20)*s;
	return c3;
}

void decide(){
	int shoes=ShoeSales();
	float c1 = 600;
	if (c1>choice3(shoes) and c1>choice2(shoes) and shoes>0){
		cout << "Option 1 is best!" << endl;		
	}
	else if (choice3(shoes)>c1 and choice3(shoes)>choice2(shoes) and shoes>0){
		cout << "Option 3 is best!" << endl;
	}
	else if (choice2(shoes)>c1 and choice2(shoes)>choice3(shoes) and shoes>0){
		cout << "Option 2 is best!" << endl;
	}
	else {
		cout << "Number of shoes can't be negative or fraction!" << endl;	
	}
}

int main(){
	
	decide();
	return 0;
}





