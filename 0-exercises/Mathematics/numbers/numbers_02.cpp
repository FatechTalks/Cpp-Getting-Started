#include<iostream> 
#include<fstream> 

using namespace std; 

int main(){
    char str[80]; 
    int age, hexNum; 

    printf("Enter your family name: ");
    scanf("%s", &str);
    printf("Enter your age: ");
    scanf("%i", &age);

    printf("Mr. %s, %d years old.\n", str, age);
    printf("Enter a hexadecimal number: ");
    scanf("%x", &hexNum);

    printf("You have entered %#x (%d).\n", hexNum, hexNum);
    return 0; 
}