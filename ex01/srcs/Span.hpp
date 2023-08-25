/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:05:12 by suchua            #+#    #+#             */
/*   Updated: 2023/08/25 23:38:46 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include <ctime>
# include <cstdlib>

class Span
{
	private:
		unsigned int		curr_size;
		unsigned int		N;
		std::vector<int>	container;
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span& other);
		Span&	operator=(const Span& other);
		void	addNumber(int num);
		int		shortestSpan() const;
		int		longestSpan() const;
		void	fillSpan();
		void	printMinMax();
		std::vector<int>	getContainer() const;
		
		class OutOfBoundException : public std::exception
		{
			public :
				const char* what() const throw();
		};
		
		class NullSpanException : public std::exception
		{
			public :
				const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Span& sp);

#endif
