#pragma once
#ifndef TOKEN_H
#define TOKEN_H
#include<iostream>
using namespace std;
#define NUM_TOKENS 8
enum TOKEN
{
	RACECAR, THIMBLE, SHOE, DOG,
	BATTLESHIP, TOPHAT, IRON,
	WHEELBARROW
};
const char* const TOKENS[NUM_TOKENS] = {
"Race Car", "Thimble", "Shoe",
"Dog", "Battleship", "Top Hat",
"Iron", "Wheelbarrow"
};
class Token
{
private:
    TOKEN token; // Private member variable of type TOKEN to store the token value.
public: 
    Token(TOKEN); // Constructor declaration that takes a TOKEN argument to initialize the token member.
    TOKEN Get() const; // Declaration of a method that returns the token value -- does not modify the object.
    void Print() const; // Declaration of a method that prints the token value -- does not modify the object.
};
#endif
