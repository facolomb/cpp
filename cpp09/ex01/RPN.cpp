
#include "RPN.hpp"

RPN::RPN()
{}

RPN::~RPN()
{}

RPN::RPN(const RPN &src)
{
	*this = src;
}

RPN &RPN::operator=(const RPN &src)
{
	if (this != &src)
		this->_nbrs = src._nbrs;
	return (*this);
}

int RPN::_isOperator(char c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (2);
	else if (c == '*')
		return (3);
	else if (c == '/')
		return (4);
	else
		return (0);
}

void RPN::_addition()
{
	int a;
	int b;

	a = _nbrs.top();
	_nbrs.pop();
	b = _nbrs.top();
	_nbrs. pop();
	a = a + b;
	_nbrs.push(a);
}

void RPN::_substraction()
{
	int a;
	int b;

	b = _nbrs.top();
	_nbrs.pop();
	a = _nbrs.top();
	_nbrs.pop();
	a = a - b;
	_nbrs.push(a);
}

void RPN::_multiplication()
{
	int a;
	int b;

	a = _nbrs.top();
	_nbrs.pop();
	b = _nbrs.top();
	_nbrs. pop();
	a = a * b;
	_nbrs.push(a);
}

bool RPN::_division()
{
	int	a;
	int b;

	b = _nbrs.top();
	_nbrs.pop();
	if (b == 0)
	{
		std::cout << "Error" << std::endl;
		return (false);
	}
	a = _nbrs.top();
	_nbrs.pop();
	a = a / b;
	_nbrs.push(a);
	return (true);
}

void RPN::doRPN(std::string input)
{
	bool	wasLastNb = false;
	int 	isOp;
	int 	nb;

	if (input.size() == 0)
		return;
	for(int i = 0; i < input.size(); i++)
	{
		isOp = _isOperator(input[i]);
		if (isOp)
		{
			if (_nbrs.size() == 1)
			{
				std::cout << "Error" << std::endl;
				return;
			}
			switch (isOp)
			{
				case 1:
					_addition();
					break;
				case 2:
					_substraction();
					break;
				case 3:
					_multiplication();
					break;
				case 4:
					if (!_division())
						return;
					break;
			}
		}
		else if (std::isdigit(input[i]))
		{
			if (wasLastNb)
			{
				std::cout << "Error" << std::endl;
				return;
			}
			wasLastNb = true;
			nb = static_cast<int>(input[i] - 48);
			if (nb < 0)
			{
				std::cout << "Error" << std::endl;
				return;
			}
			_nbrs.push(nb);
		}
		else if (input[i] == ' ')
			wasLastNb = false;
		else
		{
			std::cout << "Error" << std::endl;
			return;
		}
	}
	if (_nbrs.size() > 1)
	{
		std::cout << "Error : too much numbers" << std::endl;
		exit(1);
	}
	std::cout << _nbrs.top() << std::endl;
}
