/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:13:59 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:00 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>
#include <iostream>

class Data {
    private:
        uint32_t _data;

    public:
        Data();
		Data(const Data& rhs);
		~Data();
		Data& operator=(const Data& rhs);

        uint32_t getData() const;
		void setData(uint32_t data);
};

#endif