#pragma once
#include <iostream>
#include <ostream>
#include <string>

class User{
private:
  int number;
  char name[50];
  char lastName[50];
  int age;
  double balance;
  char nip[5];
public:
  User(int, const std::string , const std::string, int, double, const std::string);
  double deposit(double);
  double withdraw(double);
  void set_name(const std::string); 
  void set_lastName(const std::string);
  void set_nip(const std::string);
  friend std::ostream& operator<<(std::ostream& os, const User& obj);
};

void menu(User* usuarios);
enum class Options{
  ENTRAR = 1, DEPOSITAR, RETIRAR
};
