/*
   This code can be compiled and run ok.

   Given a row of n seats in a theater, you need to calculate and output the 
   seat no., stored in S[i], i=0,...,n-1
   seat preference, stored in P[i], i=0,...,n-1
   
   Then, input the no. of occupied seats, output the seat no. & preference by
   replacing the status of the occupied seats by "X"
   
   Then, input the number of adjacent seats requested, denoted by K, output the
   selected seats of the maximal total preference, or NONE if no such seats.
   
   usage (how to run):
     seat  (then input n and alpha)

   input file:
     none

   output file: 
     none

   compile (how to compile):
     gcc -o seat hw1.cpp

   pseudocode:
     with a given n, S[i]=???!!try to describe the formula or rule you use!!
	                 P[i]=???!!try to describe the formula or rule you use!!
     for a known occupied seat j, !! describe how you reset its no. and preference !! 

	 for a given K, !! describe how you search for the best K adjacent seats !!
	 

   coded by Ta-Tou Wang, ID: hxxx, email: tatouwang@mail.ncku.edu.tw
   date: 2018.XX.XX
*/
#include <iostream>
#include <iomanip>
using namespace std ;

int main() 
{
	//---begin--- PART 1: Declaration -----------
    int n=0, K=0;
    int S[20]={0}; //Seat
    int P[20]={0}; //Preference
	
	//--- end --- PART 1: Declaration -----------
	//---begin--- PART 2: Calculate S[] & P[] -----------
    cout << "Number of seats n in [5,20] = ? ";  //input total seat 
    cin >> n ;
	while(n<5||n>20){       //check if the input is right in the range[5,20].
		cout << "!!WRONG!! Please input an integer in [5,20] = ?";  //if not,input again.
        cin >> n;
    }
	
	//--- end --- PART 2: Calculate S[] & P[] -----------
	//---begin--- PART 3: Output Updated Seat Status with known Occupied seats -----------

	
	//--- end --- PART 3: Output Updated Seat Status with known Occupied seats -----------
	//---begin--- PART 4: Seek optimal K adjacent seats -----------
	cout << endl <<"How many adjacent seats to seek?";   //input how many adjacent seat(K) to calculate max seat preference
    cin >> K;
	
	//--- end --- PART 4: Seek optimal K adjacent seats -----------
    return 0 ;
	
}
