/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:04:46 by suchua            #+#    #+#             */
/*   Updated: 2023/08/25 23:55:57 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\n\nTEST 20 RANDOM NUMBER\n" << std::endl;
		Span sp = Span(20);
		sp.fillSpan();
		std::cout << sp << std::endl;
		std::cout << "Size = " << sp.getContainer().size() << std::endl;
		sp.printMinMax();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	
	{
		std::cout << "\n\nTEST 10000 RANDOM NUMBER\n" << std::endl;
		Span sp = Span(10000);
		sp.fillSpan();
		std::cout << sp << std::endl;
		std::cout << "Size = " << sp.getContainer().size() << std::endl;
		sp.printMinMax();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return 0;
}
