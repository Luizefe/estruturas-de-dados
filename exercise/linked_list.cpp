#include "../include/linked_list.hpp"
#include <iostream>

int main(int argc, char const* argv[]) {
  LinkedList<int> list;
    
    
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);
    std::cout << "Lista após push_front: ";
    list.print();

    
    list.insert(1, 15);
    std::cout << "Lista após insert(1, 15): ";
    list.print();

    
    std::cout << "Elemento na posição 2: " << list[2] << std::endl;

    
    try {
        int &found = list.find(15);
        std::cout << "Elemento encontrado: " << found << std::endl;
    } catch (const std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    }

    //existência
    std::cout << "A lista contém 10? " << (list.contains(10) ? "Sim" : "Não") << std::endl;
    std::cout << "A lista contém 50? " << (list.contains(50) ? "Sim" : "Não") << std::endl;

    //remoção
    list.pop_front();
    std::cout << "Lista após pop_front: ";
    list.print();

    list.remove(1);
    std::cout << "Lista após remove(1): ";
    list.print();

    // limpeza
    list.clear();
    std::cout << "Lista após clear: ";
    list.print();
    std::cout << "A lista está vazia? " << (list.empty() ? "Sim" : "Não") << std::endl;

    return 0;
}
