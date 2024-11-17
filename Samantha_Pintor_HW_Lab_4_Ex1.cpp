//Samantha Pintor
//HW Lab 4 - Excercise 1
//11-17-24

#include <iostream> 
#include <cmath> 

using namespace std; 

//function to filter the even numbers 
void filterEvens(int one, int two, int three, int four, int five, int six, int seven, int eight)
{
    int numbers[8] = {one, two, three, four, five, six, seven, eight};
    
    for (int n = 0; n < 8; n++) //renamed loop variable
    {
        if (numbers[n] % 2 == 0) //if the number divided by 2 has no remainder, it's even
        {
            cout << numbers[n] << endl; //print the even number
        }
    }
}

//function for getting input and returning function "Filter Evens"
void myArray(int one, int two, int three, int four, int five, int six, int seven, int eight)
{
    filterEvens(one, two, three, four, five, six, seven, eight); //filterEvens function
}

int main ()
{
    const int ARRAY_SIZE = 8; //list array size is 8

    //declaring variables 
    int one, two, three, four, five, six, seven, eight; 
    
    cout << "Hello! Please input 8 whole numbers." << endl; //prompting the user 
    cin >> one >> two >> three >> four >> five >> six >> seven >> eight; //user inputs 8 numbers
    
    myArray(one, two, three, four, five, six, seven, eight); //execute the function
    
    return 0; 
}

/*
Hello! Please input 8 whole numbers.
7 5 4 3 2 1 9 23
4
2
*/
