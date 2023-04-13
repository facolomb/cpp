
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <map>
#include <iostream>
#include <fstream>
#include <string>

class BitcoinExchange
{
public:
	BitcoinExchange();
	BitcoinExchange(std::string inputFile);
	BitcoinExchange(const BitcoinExchange &src);
	~BitcoinExchange();

	BitcoinExchange &operator=(const BitcoinExchange &src);

	int		buildDB();
	void	calculation();
private:
	std::map<std::string, float> _db;
	std::string _inputFile;
	float 		_inputValue;

	int 		_checkLine(std::string line);
	std::string _nearestDate(std::string date);
	bool		_isDate(std::string toCheck);
};


#endif //BITCOINEXCHANGE_HPP
