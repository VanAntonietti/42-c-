/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:40:27 by vantonie          #+#    #+#             */
/*   Updated: 2023/02/23 11:57:05 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string	uppercase(char **str, int a) {
	string res;
	string tmp;
	for (int i = 1; i < a; i++) {
		tmp = str[i];
		for (int j = 0; j < tmp.length(); j++)
			res += (char)toupper(tmp[j]);
	}
	return (res);
}

int	main(int argc, char **argv) {
	string capitalized;
	if (argc == 1)
		cout << "* LOUD UNBEARABLE FEEDBACK NOISE *" << endl;
	else 
		capitalized = uppercase(argv, argc);
	cout << capitalized << endl;
	return (0);
}
