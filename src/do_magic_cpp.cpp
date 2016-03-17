#include "do_magic_cpp.h"

// When you get:
// error: Rcpp.h: No such file or directory
// then use
//
// cd /
// find . | egrep "Rcpp\.h"
//
// and add the path to the INCLUDEPATH
#include <Rcpp.h>

using namespace Rcpp;

//' Does magic
//' @param x Input
//' @return Magic value
//' @export
// [[Rcpp::export]]
int do_magic_cpp(const int x) noexcept
{
  return x * 0b0000'0010;
}

//' @useDynLib domagic
//' @importFrom Rcpp sourceCpp
