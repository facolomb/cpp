/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:52:05 by facolomb          #+#    #+#             */
/*   Updated: 2022/11/23 14:52:08 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <fstream>

std::string replaceString(std::string line, std::string s1, std::string s2)
{
	size_t f;

	while ((f = line.find(s1)) != std::string::npos)
	{
		line.erase(f, s1.size());
		line.insert(f, s2);
	}
	return (line);
}

void manageFile(std::string param[4])
{
	std::string line;
	std::ifstream infile(param[0]);
	std::ofstream outfile(param[1]);

	if (infile.is_open())
	{
		if (outfile.is_open())
		{
			while (getline(infile, line))
				outfile << replaceString(line, param[2], param[3]) << std::endl;
			outfile.close();
		}
		else
			std::cout << "can't open file2" << std::endl;
		infile.close();
	}
	else
		std::cout << "can't open file" << std::endl;
}

int main(int ac, char **av)
{
	std::string param[4];
	std::string out;

	if (ac != 4)
	{
		std::cout << "Error wrong numbers of arguments" << std::endl;
		return (1);
	}
	out = av[1];
	out.insert(out.size(), ".replace");
	param[0] = av[1];
	param[1] = out;
	param[2] = av[2];
	param[3] = av[3];
	if (param[2].empty())
	{
		std::cout << "s1 can't be NULL" << std::endl;
		return (2);
	}
	manageFile(param);
	return (0);
}
