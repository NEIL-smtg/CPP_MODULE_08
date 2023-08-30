/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:13:36 by suchua            #+#    #+#             */
/*   Updated: 2023/08/30 19:25:08 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->N = N;
	this->curr_size = 0;
}

Span::~Span(){}

void	Span::addNumber(int num)
{
	if (curr_size == N)
		throw OutOfBoundException();
	container.push_back(num);
	curr_size++;
}

Span::Span(const Span& other)
{
	*this = other;
}

Span&	Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;
	this->N = other.N;
	this->curr_size = other.curr_size;
	this->container = other.container;
	return *this;
}

int	Span::longestSpan() const
{
	if (curr_size <= 1)
		throw NullSpanException();
	int	max;
	int	min;

	max = *std::max_element(container.begin(), container.end());
	min = *std::min_element(container.begin(), container.end());

	return (max - min);
}

int	Span::shortestSpan() const
{
	if (curr_size <= 1)
		throw NullSpanException();
	
	int min = longestSpan();
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	it2;

	for (it = container.begin(); it != container.end(); it++)
	{
		for (it2 = container.begin(); it2 != container.end(); it2++)
		{
			if (it == it2 || *it2 - *it == 0)
				continue ;
			if (std::abs(*it2 - *it) < min)
				min = std::abs(*it2 - *it);
		}
	}
	return (min);
}

int	get_random_nb()
{
	return (std::rand() % 1000 + 1);
}

void	Span::fillSpan()
{
	std::srand(time(NULL));
	std::vector<int> vec(N);
	std::generate(vec.begin(), vec.end(), get_random_nb);
	container = vec;
	curr_size = N;
}

void	Span::printMinMax()
{
	if (curr_size <= 1)
		throw NullSpanException();
	int	min;
	int	max;

	min = *std::min_element(container.begin(), container.end());
	max = *std::max_element(container.begin(), container.end());
	std::cout << "Min = " << min << std::endl;
	std::cout << "Max = " << max << std::endl;
}

const char*	Span::OutOfBoundException::what() const throw()
{
	return ("Span is full\n");
}

const char*	Span::NullSpanException::what() const throw()
{
	return ("No enough elements to calculate\n");
}

std::vector<int>	Span::getContainer() const
{
	return this->container;
}

std::ostream&	operator<<(std::ostream& out, const Span& sp)
{
	std::vector<int> c = sp.getContainer();
	std::vector<int>::iterator	it;
	
	for (it = c.begin(); it != c.end(); it++)
	{
		out << *it;
		if (it + 1 != c.end())
			out << ", ";
	}
	out << "\n";
	return out;
}
