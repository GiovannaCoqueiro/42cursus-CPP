/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:14:46 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/04/11 15:14:47 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main() {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}


// int main() {
// 	std::list<int> mlist;

// 	mlist.push_back(5);
// 	mlist.push_back(17);

// 	std::cout << mlist.back() << std::endl;

// 	mlist.pop_back();

// 	std::cout << mlist.size() << std::endl;

// 	mlist.push_back(3);
// 	mlist.push_back(5);
// 	mlist.push_back(737);
// 	//[...]
// 	mlist.push_back(0);

// 	std::list<int>::iterator it = mlist.begin();
// 	std::list<int>::iterator ite = mlist.end();

// 	++it;
// 	--it;
// 	while (it != ite) {
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::list<int> s(mlist);
// 	return 0;
// }


// int main() {
// 	MutantStack<int> mstack;

// 	std::cout << "Adding elements 10, 20, 30 in the MutanteStack" << std::endl;
// 	mstack.push(10);
// 	mstack.push(20);
// 	mstack.push(30);

// 	std::cout << "Top element: " << mstack.top() << std::endl;

// 	std::cout << "size: " << mstack.size() << std::endl;

// 	std::cout << "Iter: ";
// 	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
// 		std::cout << *it << ",";
// 	std::cout << std::endl;

// 	mstack.pop();
// 	std::cout << "Top element after pop: " << mstack.top() << std::endl;

// 	std::cout << "size: " << mstack.size() << std::endl;

// 	std::cout << "Iter: ";
// 	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
// 		std::cout << *it << ",";
// 	std::cout << std::endl;

// 	return 0;
// }