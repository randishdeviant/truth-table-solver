#include <iostream>
#include <string>

int main() {
  std::string ekspresi;

  std::cout << "Masukkan ekspresi yang akan di cek: ";
  std::getline(std::cin, ekspresi);

  std::cout << "ekspresi: " << "<" << ekspresi << ">";
}