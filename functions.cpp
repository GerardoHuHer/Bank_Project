#include "Bank.h"
#include <cstddef>
  
User::User(int number,const std::string name,const std::string lastName, int age, double balance, const std::string nip){
  this-> number = number;
  set_name(name);
  set_lastName(lastName);
  this->age = age;
  this->balance = balance;
  set_nip(nip);
}

std::ostream& operator<<(std::ostream& os, const User& obj){
  os << obj.name << "\n"
  << obj.nip << "\n"
  << obj.age <<"\n"
  << obj.number << "\n";
  return os;
}

void User::set_name(const std::string nombre){
  size_t length {nombre.size()};
  length = length < 50 ? length : 49;
  nombre.copy(name, length);
  name[length] = '\0';
}

void User::set_lastName(const std::string apellido){
  size_t length {apellido.size()};
  length = length < 50 ? length : 49;
  apellido.copy(name, length);
  lastName[length] = '\0';
}

void User::set_nip(const std::string nip_aux){
  size_t length {nip_aux.size()};
  length = length < 5 ? length : 4;
  nip_aux.copy(nip,length );
  nip[length] = '\0';
}
