/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 23:57:41 by suchua            #+#    #+#             */
/*   Updated: 2023/08/26 00:39:59 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <algorithm>
# include <iostream>
# include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(){};
		~MutantStack<T>(){};
		MutantStack<T>(const MutantStack<T>& other){*this = other;}
		MutantStack<T>& operator=(const MutantStack<T>& other)
		{
			(void) other;
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin(){return this->c.begin();}
		iterator	end(){return this->c.end();}
};

/*
	std::stack provides a strictly last-in-first-out view
	of the underlying container,
	and that's the point of it:
	to restrict the use of the underlying container to LIFO.

	And so it does not provide iteration.

	However, it does provide the underlying container as a protected member,
	which means that it's designed for being derived from.
	In your derived class you can provide iterators,
	and whatever you want.
	Also it's possible to just access that
	protected member of an ordinary std::stack,
	even without using any cast
	(namely via implicit conversion of member data pointer).
*/

#endif
