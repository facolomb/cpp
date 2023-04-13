
#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>
#include <string>

class RPN
{
public:
	RPN();
	~RPN();
	RPN(const RPN &src);

	RPN	&operator=(const RPN &src);

	void	doRPN(std::string input);
private:
	std::stack<int> _nbrs;

	int		_isOperator(char c);
	void	_addition();
	void	_substraction();
	void	_multiplication();
	bool	_division();

};


#endif //RPN_HPP
