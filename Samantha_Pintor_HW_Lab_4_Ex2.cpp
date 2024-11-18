//Samantha Pintor 
//HW Lab 4 - Excercise 2 
//11-17-24

#include <iostream> 
#include <cmath> 

using namespace std; 

// Function to calculate total number of cars sold
int total(int one, int two, int three, int four, int five, int six, int seven, int eight, int nine, int ten) {
    return one + two + three + four + five + six + seven + eight + nine + ten; // Formula for finding the total 
}

// Function for calculating which salesperson sold the most cars
int salesperson(int one, int two, int three, int four, int five, int six, int seven, int eight, int nine, int ten) {
    int maxSales = one; //setting max sales to first value
    int bestSalesperson = 1; //setting the best sales person to one

    if (two > maxSales) {
        maxSales = two; //updates max sales
        bestSalesperson = 2;} //updates best sales person 
    
    if (three > maxSales) {
        maxSales = three; //updates max sales
        bestSalesperson = 3;} //updates best sales person 
    
    if (four > maxSales) {
        maxSales = four; //updates max sales
        bestSalesperson = 4;} //updates best sales person 
    
    if (five > maxSales) {
        maxSales = five; //updates max sales
        bestSalesperson = 5;} //updates best sales person 
    
    if (six > maxSales) {
        maxSales = six; //updates max sales
        bestSalesperson = 6;} //updates best sales person 
        
    if (seven > maxSales) {
        maxSales = seven; //updates max sales
        bestSalesperson = 7;} //updates best sales person 
    
    if (eight > maxSales) {
        maxSales = eight; //updates max sales 
        bestSalesperson = 8;} //updates best sales person 
    
    if (nine > maxSales) {
        maxSales = nine; //updates max sales
        bestSalesperson = 9;} //updates best sales person 
    
    if (ten > maxSales) {
        maxSales = ten; //updates max sales
        bestSalesperson = 10;} //updates best sales person 

    return bestSalesperson; // Return the number of the salesperson who sold the most cars
}

// Function for finding the number of cars sold by that salesperson
int number(int one, int two, int three, int four, int five, int six, int seven, int eight, int nine, int ten, int salesperson) {
    if (salesperson == 1) return one; //if first sales person sold the most cars return first int number
    if (salesperson == 2) return two; //if second sales person sold the most cars return second int number
    if (salesperson == 3) return three; //if third sales person sold the most cars return third int number
    if (salesperson == 4) return four; //if fourth sales person sold the most cars return fourth int number
    if (salesperson == 5) return five; //if fifth sales person sold the most cars return fifth int number
    if (salesperson == 6) return six; //if sixth sales person sold the most cars return sixth int number
    if (salesperson == 7) return seven; //if seventh sales person sold the most cars return seventh int number
    if (salesperson == 8) return eight; //if eight sales person sold the most cars return eight int number
    if (salesperson == 9) return nine; //if ninth sales person sold the most cars return ninth int number
    if (salesperson == 10) return ten; //if tenth sales person sold the most cars return tenth int number

    return 0; //Default
}

int main () {

    //Declaring variables
    int one, two, three, four, five, six, seven, eight, nine, ten;  

    //Prompting user 
    cout << "Hello. Please input the number of cars sold according to each of the ten salespeople." << endl;
    cin >> one >> two >> three >> four >> five >> six >> seven >> eight >> nine >> ten; // User inputs

    //Functions for total cars sold, best salesperson, and the number of cars sold by the best salesperson
    int totalCars = total(one, two, three, four, five, six, seven, eight, nine, ten);
    int bestSalesperson = salesperson(one, two, three, four, five, six, seven, eight, nine, ten);
    int carsSoldByBest = number(one, two, three, four, five, six, seven, eight, nine, ten, bestSalesperson);

    cout << "The total number of cars sold at the entire dealership is " << totalCars << endl; 
    cout << "The salesperson who sold the most cars is salesperson #" << bestSalesperson << endl;
    cout << "Salesperson #" << bestSalesperson << " sold " << carsSoldByBest << " cars." << endl;

    return 0; 
}

/*
Hello. Please input the number of cars sold according to each of the ten salespeople.
1 2 3 4 5 6 7 8 9 10
The total number of cars sold at the entire dealership is 55
The salesperson who sold the most cars is salesperson #10
Salesperson #10 sold 10 cars. 
*/
