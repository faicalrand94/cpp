/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:50:25 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/01 16:07:51 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>



int main(int ac, char *av[])
{
    size_t pos;
   
    if (ac!=4)
        return (1);
    std::string filename, s1, s2, token;
    std::fstream  afile;
    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    afile.open(av[1], std::ios::out | std::ios::in);
    if (!afile)
    {
        std::cerr << av[1] << " not exist\n";
        return (1);
    }
    std::string content;
    std::string newname  = filename + ".replace";
    std::fstream  replace;

    replace.open(newname , std::ios::out);
    while(!afile.eof())
    {
        getline(afile, content);
        // std::cout << content << std::endl;
        if((pos = content.find(s1)) == std::string::npos)
        {
            replace << content;
        }
        while (((pos = content.find(s1)) != std::string::npos))
        {
            token = content.substr(0, pos);
            replace << token << s2;
            content.erase(0, pos + s1.length());
            replace << content;
        }
        if(!afile.eof())
            replace << "\n";
        
    }
    return (0);
}