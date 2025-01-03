/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:43 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:44 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

// #include <iostream>
// #include <map>
// #include <cmath>
// #include <stdexcept>
// #include <fstream>
// #include <sstream>

// class BitcoinExchange {
// 	private:
// 		std::map<std::string, double> _exchange;
// 	public:
// 		BitcoinExchange();
// 		BitcoinExchange(const BitcoinExchange& rhs);
// 		BitcoinExchange& operator=(const BitcoinExchange& rhs);
// 		~BitcoinExchange();

// 		void readDB(std::string filename);
//         void createDB(std::string date, double value);
//         void printDB(std::string date, double rate);
//         double getValue(std::string date) const;
// };

# include <iostream>
# include <fstream>
# include <map>
# include <cmath>
# include <stdexcept>
# include <sstream>

class BitcoinExchange {
	private:
		std::map<std::string, double> _exchange;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& rhs);
		BitcoinExchange& operator=(const BitcoinExchange& rhs);
		~BitcoinExchange();

		double getExchangeValue(std::string date) const;

		bool readDataBase(std::string filename);
		void createDataBase(std::string date, double value);
		void printDataBase(std::string date, double value);
};

#endif