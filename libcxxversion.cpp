#include <cstdlib>
#include <iostream>

int main() {
#ifdef _LIBCPP_STD_VER
  std::cout << "_LIBCPP_STD_VER=" << _LIBCPP_STD_VER << std::endl;
  return EXIT_SUCCESS;
#else
  std::cout << "not using libc++" << std::endl;
  return EXIT_FAILURE;
#endif
}
