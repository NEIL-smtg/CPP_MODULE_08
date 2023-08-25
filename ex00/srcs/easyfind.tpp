/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:02:18 by suchua            #+#    #+#             */
/*   Updated: 2023/08/25 20:02:47 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "easyfind.hpp"

template<typename T>
void	easyfind(T& container, int find)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), find);
	if (it != container.end())
		std::cout << "found" << std::endl;
	else
		std::cout << "Not found" << std::endl;
}

#endif
