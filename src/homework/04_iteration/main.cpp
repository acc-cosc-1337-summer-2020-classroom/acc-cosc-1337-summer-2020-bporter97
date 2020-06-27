//write include statements
#include "dna.h"
#include<iostream>
//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice;
	string dna;
	do
	{
	
		cout<<"Please enter 1 for Get GC content, or 2 for Get DNA Complement: Press 'y' or 'Y' to quit \n";
		cin>>choice;
		cout<<"Please enter the DNA string: \n";
		cin>>dna; 
	
		if(choice == 1)
		{
			get_gc_content(dna);
			cout<<get_gc_content(dna);
		}
		else if(choice == 2)
		{
			get_dna_complement(dna);
			cout<<get_dna_complement(dna);
		}
		else
		{
			cout<<"That is an invalid choice";
			return 0;
		}
		
		
		
	} while (choice != 'y' || choice != 'Y');
	



	return 0;
}