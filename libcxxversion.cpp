#include <cstdlib>
#include <iostream>

int main() {
#ifdef _LIBCPP_STD_VER
  std::cout << "_LIBCPP_STD_VER=" << _LIBCPP_STD_VER << std::endl;
  bool has_ranges(false);
#if __has_include(<ranges>)
  has_ranges = true;
#endif
  std::cout << "__has_include(<ranges>)=" << has_ranges << std::endl;
#ifdef _LIBCPP_HAS_NO_INCOMPLETE_RANGES
  std::cout << "_LIBCPP_HAS_NO_INCOMPLETE_RANGES" << std::endl;
#endif
  return EXIT_SUCCESS;
#else
  std::cout << "not using libc++" << std::endl;
  return EXIT_FAILURE;
#endif
}
