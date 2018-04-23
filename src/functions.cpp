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
		
                if (*it == '{' || *it == '[' || *it == '('){
                        myStack.push(*it);
		}

                else{
                        if (*it == '}' && myStack.top() == '{'){
			myStack.pop();
			}
			else if (*it == ']' && myStack.top() == '['){
			myStack.pop();
			}
			else if (*it == ')' && myStack.top() == '('){
			myStack.pop();
			}
        }
}
    if(!myStack.empty()){
	std::cout << "false" << std::endl;
	}

std::cout << myStack.size() << std::endl;
return true;
}

int iTop(std::string input){
	std::stack<char, std::deque<char> > stack;

	for(auto it = input.begin(); it != input.end(); ++it){
		if(*it >= 'a' && *it <= 'z'){
			std::cout << *it << std::endl;
}
		else{
			if (*it == ')'){
				while(!stack.empty() && stack.top() != '('){
					std::cout << stack.top() << " ";
					stack.pop();
}
				stack.pop();
}
			if (*it == '('){
				stack.push(*it);
}
			if (*it == '*' || *it == '/'){
				while(!stack.empty() && stack.top() != '+'
					 && stack.top() != '-' && stack.top() != '('){
					std::cout<< stack.top() << std::endl;
					stack.pop();
}
				stack.push(*it);
}
			if (*it == '+' || *it == '-'){
				while(!stack.empty() && stack.top() != '('){
					std::cout<< stack.top() << std::endl;
					stack.pop();	
}
				stack.push(*it);
}
}
		while (!stack.empty()){
			std::cout<< stack.top() << std::endl;
			stack.pop();
}
	std::cout <<" \n" << std::endl;
}
return 0;
}

int main(int argc, char** argv){
	std::cout << "first" << std::endl;
	balancedSymbols("[ sahfklb ] [fdas ] (");
	std::cout << "second" << std::endl;
	balancedSymbols("[ sahfklb ] { sdc }  ( dvav )");
	std::cout << "third" << std::endl;
	balancedSymbols("{{}}");

	std::cout << "first" << std::endl;
	iTop("1+2+3");
	std::cout << "second" << std::endl;
	iTop("1*3");
	std::cout << "third" << std::endl;
	iTop("1+2+3+4");
}
