/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:40:27 by vantonie          #+#    #+#             */
/*   Updated: 2023/02/22 19:05:40 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string	uppercase(string str) {
	string res;
	
	for(int i = 0; i < str.length(); i++)
		res += toupper(str[i]);
	return (res);
}

int	main(int argc, char **argv) {
	string strCapitalized;

	strCapitalized = uppercase(argv[1]);
	cout << strCapitalized << endl;
	return (0);
}
