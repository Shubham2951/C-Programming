Problem: Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
            if the character is an uppercase alphabet (A - Z) print "1"
            if the character is a lowercase alphabet (a - z)  print "0"
            if the character is not an alphabet print "-1"
            
*******************************************************************************************************************************************
Program:

#include<iostream>
using namespace std;

int main() {
	char c;
    cin>>c;
    if(c>=97 && c<=122)
        cout<<0;
	else if(c>=65 && c<=90)
        cout<<1;
    else
        cout<< -1;
}

*******************************************************************************************************************************************
Output:
Sample Input  :
v
Sample Output :
0
