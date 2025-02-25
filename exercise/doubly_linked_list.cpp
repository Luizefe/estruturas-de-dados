#include "../include/doubly_linked_list.hpp"
#include <iostream>

int main(int argc, char const* argv[]) {
  DoublyLinkedList<int> list;

  list.push_front(10);
  list.push_back(20);
  list.push_front(5);
  list.push_back(30);
  list.print();
  
  std::cout << std::endl <<  list.size() << std::endl;
  std::cout << "Lista contém 20? " << (list.contains(20) ? "Sim" : "Não") << std::endl;

  for (size_t i = 0; i < list.size(); i++) {
      std::cout << "Elemento na posição " << i << ": " << list[i] << std::endl;
  }

  std::cout << std::endl << "Removendo primeiro e último elementos:" << std::endl;
  list.pop_front();
  list.pop_back();
  list.print();
  
  //Inseri
  auto it = list.begin();
  ++it;
  list.insert(it, 15);
  list.print();

  //Remove
  list.erase(list.begin(), list.end());
  list.print();
  
  std::cout << std::endl << "Lista está vazia? " << (list.empty() ? "Sim" : "Não") << std::endl;
  
  //Inseri
  list.push_back(40);
  list.push_back(50);
  list.push_back(60);
  
  for (auto it = list.begin(); it != list.end(); ++it) {
      std::cout << (*it) << " ";
  }
  std::cout << std::endl;
  
  //Limpa
  list.clear();
  list.print();
  std::cout << "Lista está vazia? " << (list.empty() ? "Sim" : "Não") << std::endl;
  
  return 0;
}