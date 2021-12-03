#include <iostream>
#include <sstream>

typedef struct data
{
  int x;
}   Data;

uintptr_t serialize(Data* ptr)
{
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
  return (reinterpret_cast<Data*>(raw));
}

int main()
{
  Data *d = new Data();
  Data *d1;
  uintptr_t pt;

  d->x = 6; 
  std::cout << d << std::endl;
  std::cout << d->x << std::endl;
  pt = serialize(d);
  std::cout << pt << std::endl;
  d1 = deserialize(pt);
  std::cout << d1 << std::endl;
  std::cout << d1->x << std::endl;
  return (0);
}