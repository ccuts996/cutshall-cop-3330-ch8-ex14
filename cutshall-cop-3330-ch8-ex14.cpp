#include<iostream>
using namespace std;
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Chase Cutshall
 */

int add(const int a, const int b){
    int sum = a + b;
    // if a = num was placed here it would create an error as a is a const int
    return sum;
}

int main() {
    cout<<add(2,3);
    cout<<("\n");
    cout<<add(5, 3);
}
//  We can declare a non-reference function argument const. It prevents modification 
// for the variable and that is why it not often used
// as the varible must remain constant and not be changed