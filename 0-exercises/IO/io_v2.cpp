#include<iostream>
#include<fstream>

using namespace std; 

int main(){
	string fileName = ""; 
	string extension = ""; 

	ofstream myFile("output_v2.txt");
	string name = ""; int age = 0; float height = 0; 
	string outputText = ""; 

	cout << "--------------------------" << endl; 
	cout << "... Input Data ..." << endl << endl; 

	cout << "Name: "; 	cin >> name; 
	cout << "Age: ";	cin >> age; 
	cout << "Height: "; 	cin >> height; 

	cout << "--------------------------\n"; 
	cout << "... Output Data ...\n\n"; 

	myFile << "Name: " << name << "\nAge: " << age << "\nHeight: " << height;  
	cout << "Name: " << name << "\nAge: " << age << "\nHeight: " << height;  
	
	myFile.close(); 

	cout << "\n\n... The Data was Successfully persisted! ..." << endl;

	return 0; 
}
