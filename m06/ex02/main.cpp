#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    Base* b = NULL;
    srand(time(0));
    
    int random = (rand() % 3) + 1;
  switch (random)
  {
  case 1:
    b = new A;
    break;
  
  case 2:
    b = new B;
    break;

  case 3:
    b = new C;
    break;
  }
    return (b);
}

void identify(Base* p)
{
  if (dynamic_cast<A*>(p))
  {
    std::cout << "A" << std::endl;
  }
  else if (dynamic_cast<B*>(p))
  {
    std::cout << "B" << std::endl;
  }
  else if (dynamic_cast<C*>(p))
  {
    std::cout << "C" << std::endl;
  }
}

void identify(Base& p)
{
  try
  {
    p = dynamic_cast<A&>(p);
    std::cout << "A" << std::endl;
  }
  catch(const std::bad_cast& e)
  {
    static_cast<void>(e);
  }
  try
  {
    p = dynamic_cast<B&>(p);
    std::cout << "B" << std::endl;
  }
  catch(const std::bad_cast& e)
  {
    static_cast<void>(e);
  }
  try
  {
    p = dynamic_cast<C&>(p);
    std::cout << "C" << std::endl;
  }
  catch(const std::bad_cast& e)
  {
    static_cast<void>(e);
  }  
}


int main()
{
  Base *p = generate();
  Base &p2 = *p;
  identify(p);
  identify(p2);
  delete p;
  return (0);
}