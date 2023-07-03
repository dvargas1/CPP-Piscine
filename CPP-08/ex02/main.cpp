/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:10:29 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/06 09:12:49 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	{
		std::cout << "MutantStack" << std::endl;
		MutantStack<int>	mstack;

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
        
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
    while (!mstack.empty()) {
        mstack.pop();
    }

    // Verificar se a stack está vazia
    if (mstack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    }

	}
	{
		std::cout << "\n\nSame code with List container" << std::endl;
		std::list<int>		mstack;

		mstack.push_back(5);
		mstack.push_back(17);
        
		std::cout << mstack.front() << std::endl;

		mstack.pop_back();

		std::cout << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
        
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
        
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		mstack.clear();

    	if (mstack.empty()) {
        	std::cout << "List is empty." << std::endl;
   		}
	}
		{
		std::cout << "\n\nSame code with vector container" << std::endl;
		std::vector<int>		mstack;

		mstack.push_back(5);
		mstack.push_back(17);
        
		std::cout << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
        
		std::vector<int>::iterator it = mstack.begin();
		std::vector<int>::iterator ite = mstack.end();

		++it;
		--it;
        
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		mstack.clear();

    	if (mstack.empty()) {
        	std::cout << "Vector is empty." << std::endl;
   		}
	}
	return 0;
}

