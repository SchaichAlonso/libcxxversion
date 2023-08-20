#include <iostream>

int main() {
  int libcpp_std_ver(-1);
#ifdef _LIBCPP_STD_VER
  libcpp_std_ver = _LIBCPP_STD_VER;
#endif
  std::cout << "_LIBCPP_STD_VER=" << libcpp_std_ver << std::endl;
  return (libcpp_std_ver>0)? EXIT_SUCCESS:EXIT_FAILURE;
}
