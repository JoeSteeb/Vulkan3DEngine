#include "lve_app_base.hpp"

// std
#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main() {
  lve::LveAppBase app{};
  std::string str = "test";
  std::cout << str;

  try 
  {
    app.run();
  } catch (const std::exception &e) 
  {
    std::cerr << e.what() << '\n';
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
