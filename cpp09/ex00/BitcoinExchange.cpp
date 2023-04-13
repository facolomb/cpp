
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(std::string inputFile) : _inputFile(inputFile)
{}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
	if (this != &src)
	{
		this->_db = src._db;
		this->_inputValue = src._inputValue;
		this->_inputFile = src._inputFile;
	}
	return (*this);
}

int BitcoinExchange::buildDB()
{
	std::string		line;
	std::string 	key;
	std::ifstream	myFile("data.csv");
	float 			value;

	if (myFile.is_open())
	{
		getline(myFile, line);
		while (getline(myFile, line))
		{
			key = line.substr(0, line.find(","));
			value = std::stof(line.substr(line.find(",") + 1, line.size()));
			this->_db.insert(std::pair<std::string, float>(key, value));
		}
		myFile.close();
		return (1);
	}
	else
		std::cout << "Unable to open data.csv" << std::endl;
	return (0);
}

int BitcoinExchange::_checkLine(std::string line)
{
	if (line.find("|") == std::string::npos)
	{
		std::cout << "Error : bad input => " << line << std::endl;
		return (0);
	}
	this->_inputValue = std::stof(line.substr(line.find("|") + 1, line.size()));
	if (this->_inputValue < 0)
	{
		std::cout << "Error : not a positive number." << std::endl;
		return (0);
	}
	if (this->_inputValue > 1000)
	{
		std::cout << "Error : too large a number." << std::endl;
		return (0);
	}
	return (1);
}

std::string BitcoinExchange::_nearestDate(std::string date)
{
	std::map<std::string ,float>::iterator it;

	for(it = this->_db.begin(); it != this->_db.end(); it++)
	{
		if (it->first > date)
			break;
	}
	it--;
	return (it->first);
}

bool BitcoinExchange::_isDate(std::string toCheck)
{
	std::string year, month, day;
	int 		y, m, d;

	year = toCheck.substr(0, toCheck.find('-'));
	toCheck = toCheck.substr(toCheck.find('-') + 1, toCheck.size());
	month = toCheck.substr(0, toCheck.find('-'));
	day = toCheck.substr(toCheck.find('-') + 1, toCheck.size());

	y = atoi(year.c_str());
	m = atoi(month.c_str());
	d = atoi(day.c_str());

	if (y < 2009 || y > 2022)
		return (false);
	if (m < 1 || m > 12)
		return (false);
	if (d < 1 || d > 31)
		return (false);
	else if (d == 31 && (m == 2 || m == 4 || m == 6 || m == 9 || m == 11))
		return (false);
	else if (d > 28 && m == 2)
		return (false);
	return (true);
}

void BitcoinExchange::calculation()
{
	std::ifstream	myFile(this->_inputFile);
	std::string		line;
	std::string		toCheck;
	std::map<std::string ,float>::iterator it;

	if (myFile.is_open())
	{
		getline(myFile, line);
		while (getline(myFile, line))
		{
			if (this->_checkLine(line))
			{
				toCheck = line.substr(0, line.find("|") - 1);
				if (_isDate(toCheck))
				{
					it = this->_db.find(toCheck);
					if (it == this->_db.end())
					{
						toCheck = this->_nearestDate(toCheck);
						it = this->_db.find(toCheck);
					}
					std::cout << toCheck << " => " << this->_inputValue << " = "
							  << it->second * this->_inputValue << std::endl;
				}
				else
					std::cout << "Error : bad input => "<< toCheck << std::endl;
			}
		}
		myFile.close();
	}
	else
		std::cout << "Unable to open " << this->_inputFile << std::endl;
}
