/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:30:08 by tsaby             #+#    #+#             */
/*   Updated: 2025/07/29 12:13:12 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char ** argv)
{

	std::string s1;
	std::string s2;
	std::string filename;
	std::string outfile_name;

	if (argc != 4)
	{
		std::cout << "Bad usage" << std::endl;
		return (1);
	}
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty())
	{
		std::cout << "s1 cannot be empty" << std::endl;
		return (1);
	}
	filename = argv[1];
	std::ifstream infile(filename.c_str());
	if(infile.fail())
	{
		std::cout << "Error with open File" << std::endl;
	}
	outfile_name = filename + ".replace";
	std::ofstream outfile(outfile_name.c_str());
	if(outfile.fail())
	{
		std::cout << "Error for creating outfile" << std::endl;
		infile.close();
		return(1);
	}

	std::string line;


	while (std::getline(infile,line))
	{
		std::string result;
		std::string::size_type pos = 0;
		std::string::size_type last_pos = 0;
		while ((pos = line.find(s1,last_pos)) != std::string::npos)
		{
			result += line.substr(last_pos, pos - last_pos);
			result += s2;
			last_pos = pos + s1.length();
		}
		result += line.substr(last_pos);
		outfile << result << '\n';
	}
	// return(replace(infile, s1, s2,outfile));
	return (0);

}

