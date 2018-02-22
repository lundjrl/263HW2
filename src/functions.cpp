/**
 *Author: James Lund
 *Date: Feb 21, 2018
 *HW2 stacks and queues assignment
 */
#include "../include/functions.h"
#include<string>
#include<iostream>
#include<stack>

bool balancedSymbols(std::string input ){	
        /*If we have an opening expression, push it to the stack 
         *until we have a closing of the same type then pop both.       
         */
	std::stack<char, std::deque<char> > myStack; 
	
	for(auto it = input.begin(); it != input.end(); ++it){
		
                if (*it == '{' || '[' || '(')
                        myStack.push(*it);

                if (*it  == '}'|| ']' || ')' && myStack.empty() )
                        return false;
                else{
                        myStack.pop();
                        if(*it != '}' || ']' || ')')
                                return false;
        }
        if(!myStack.empty())
                return false;
}
return true;

}
//int iTop(std::string input){
//	std::stack<char, std::deque<char> > stack;
	
//	for(auto it = input.begin(); it != input.end(); ++it)
	
//return 0;
//}

int main(int argc, char** argv){
}
