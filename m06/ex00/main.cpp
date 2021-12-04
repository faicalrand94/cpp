#include <iostream>
#include <sstream>



int spacialcase(std::string s)
{
  if (s.compare("nan") == 0 || s.compare("nanf") == 0)
  {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
    return (1);
  }
  if (s.compare("+inf") == 0 || s.compare("+inff") == 0 || s.compare("inf") == 0 || s.compare("inff") == 0)
  {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: inff" << std::endl;
    std::cout << "double: inf" << std::endl;
    return (1);
  }
  if (s.compare("-inf") == 0 || s.compare("-inff") == 0)
  {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
    return (1);
  }
  return (0);
}

int is_float_c(std::string s)
{
  for (size_t i = 0; i < s.length() - 1; i++)
  {
    if (s[i] == '.')
      continue ;
    if (s[i] < '0' || s[i] > '9')
      return (0);
  }
  if (s[s.length() - 1] != 'f')
    return (0);
  return (1);
}

int main(int ac, char **av)
{
  char c;
  int it;
  if (ac != 2)
  {
    std::cout << "Error: arguments\n";
    return (1);
  }
  std::string s = av[1];
  long a;
  a = atol(av[1]);
  if (spacialcase(s))
  {
    return (0);
  }
  // CHAR
  if (s.length() == 1 && (s[0] < '0' || s[0] > '9'))
  {
    if (s[0] >= 32 && s[0] < 127)
      std::cout << "char: " << s[0] << std::endl;
    else
      std::cout << "char: " << "Non displayable" << std::endl;
  }
  else
  {
    if (a < CHAR_MIN || a > CHAR_MAX)
    {
      std::cout << "char: " << "impossible" << std::endl;
    }
    else if (a < 32 || a > 126)
    {
      std::cout << "char: " << "Non displayable" << std::endl;
    }
    else
    {
      c = static_cast<char>(a); 
      std::cout << "char: " << c << std::endl;
    }
  }

  /****** END CHAR ******/






  /****** INT ******/
  if (a < INT_MIN || a > INT_MAX)
  {
    std::cout << "int: " << "impossible" << std::endl;
  }
  else
  {
    it = static_cast<int>(a); 
    std::cout << "int: " << it << std::endl;
  }
  /***** END INT *****/

  std::stringstream ss;

  // ss << s;
  // ss >> fl;

  /****** FLOAT ******/
  if (is_float_c(s))
    s[s.length() - 1] = '\0';
  // std::cout << "float: " << atof(av[1]) << "f" << std::endl;
  std::cout << "float: " << static_cast<float>(atof(av[1]));
  std::cout << 
  ((static_cast<float>(atof(av[1])) - static_cast<int>(atof(av[1]))  == 0.0000000
  && s.length() < 7) ? ".0f" : "f");
  std::cout << std::endl;

  /***** END FLOAT *****/




  // ss << s;
  // ss >> dl;


  /****** DOUBLE ******/

  std::cout << "DOUBLE: " << static_cast<double>(atof(av[1]));
  std::cout << ((static_cast<double>(atof(av[1])) - static_cast<int>(atof(av[1]))  == 0.0000000 && s.length() < 7) ? ".0" : "");
  std::cout << std::endl;

  /***** END DOUBLE *****/


  return (0);
}
