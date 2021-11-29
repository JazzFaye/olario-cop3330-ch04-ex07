/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jazz Faye Olario
 */


#include "std_lib_facilities.h"

vector<string> words{"zero","one", "two", "three", "four", "five", \
                             "six", "seven", "eight", "nine"};

vector<string> num{"0","1", "2", "3", "4", "5", "6", "7", "8", "9"};

int convert(string s){
    for(int i = 0; i < words.size(); ++i){
        if( s == words[i] || s == num[i])
            return i;
    }
}

int main(){
    cout << "Please enter two single digit (number/spelled out) values separated by an operator.\n";
    cout << "Note: Please make sure to seperate each input with spaces.\nExample: 2 + two\n";

    string word1, word2;
    char operation;

    cin>> word1 >> operation >> word2;   // read number operation number
        
        string oper;
        int num1 = convert(word1);
        int num2 = convert(word2);
        double result;
        
        if(num1 >= 10 || num2 >= 10 || num1 <= -1 || num2 <= 0){
            cout << "Error: Must be positive and a single digit (number/spelled out) values only.";
        }else{
            switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "The Sum of " << num1 << " and " << num2 << " is " << result;
            break;
        case '-':
            oper = "Difference between ";
            result = num1 - num2;
            break;
        case '*':
            oper = "Product of ";
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0){
                cout << "Error: Cannot be divided by zero.";
                break;
            }else{
                result = num1 / num2;
                cout << "The quotient of " << num1 << " and " << num2 << " is " << result;
                
            }
            break;
        default:
                cout << "Error: Please enter a valid operator.";
        }
       
    }

        return 0;
}
