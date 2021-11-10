#include<iostream>
#include<fstream>

using namespace std; 

int main(){
	ofstream myFile("output_v1.txt");

	myFile << "[26, 04, 1995]" << endl; 
	myFile.close(); 

return 0;
}

//References 
//https://courses.cs.washington.edu/courses/cse373/99au/unix/g++.html
