/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:03:46 by suchua            #+#    #+#             */
/*   Updated: 2023/08/25 20:39:00 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);

	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	std::vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));
	std::list<int> lst(arr, arr + sizeof(arr) / sizeof(arr[0]));

	easyfind(nums, std::atoi(av[1]));
	easyfind(lst, std::atoi(av[1]));
	return (0);
}
