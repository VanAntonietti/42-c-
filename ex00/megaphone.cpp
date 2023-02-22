/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:40:27 by vantonie          #+#    #+#             */
/*   Updated: 2023/02/22 20:06:22 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string	uppercase(string str) {
	string res;
	for (int i = 0; i < str.length(); i++)
		res += toupper(str[i]);
	return (res);
}

int	main(int argc, char **argv) {
	string strCapitalized;
	string tmp;
	if (argc == 1)
		cout << "* LOUD UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			tmp += argv[i];
			tmp += " ";
		}
	}
	strCapitalized = uppercase(tmp);
	cout << strCapitalized << endl;
	return (0);
}
