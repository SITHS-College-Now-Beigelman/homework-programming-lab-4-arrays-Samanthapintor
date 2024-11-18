//Samantha Pintor 
//HW Lab 4 - Excercise 4 
//11-17-24

#include <iostream>
#include <string>

using namespace std;

void dna_to_rna(string dna); //function dna_to_rna

int main() {
    //Declaring variables
    string dna, rna = ""; 
    
    //Prompting user
    cout << "Hello. Please input the DNA nucleotide(s) (A, C, G, T): ";
    getline(cin, dna); //reads whole sequence until there is enter

    for (int n = 0; n < dna.length(); n++) {  //Loop
        if (dna[n] == 'A') { //If dna is A
            rna += "U";  }   //rna outputs U
        
        else if (dna[n] == 'C') { //If dna is C
            rna += "G"; }    //rna outputs G
        
        else if (dna[n] == 'G') { //If dna is G
            rna += "C";  }   //rna outputs C
        
        else if (dna[n] == 'T') { //If dna is T
            rna += "A";  }   //rna outputs A     
    }
    
    // Output the RNA sequence
    cout << rna << endl;
    
    return 0;
}

/*
Hello. Please input the DNA nucleotide(s) (A, C, G, T): ACGTTGCA
UGCAACGU

Hello. Please input the DNA nucleotide(s) (A, C, G, T): ACG TGCA
UGCACGU

Hello. Please input the DNA nucleotide(s) (A, C, G, T): GATTACA
CUAAUGU

Hello. Please input the DNA nucleotide(s) (A, C, G, T): A42%
U
*/
