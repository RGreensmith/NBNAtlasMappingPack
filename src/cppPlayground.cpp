#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector timesTwo(NumericVector x) {
  return x * 2;
}

// [[Rcpp::export]]
NumericVector timesThree(NumericVector x) {
  return x * 3;
}

// [[Rcpp::export]]
CharacterVector hello2() {
  return "sausage";
}

// [[Rcpp::export]]
double sumTwoC(NumericVector x, NumericVector y) {
  int n = x.size();
  double total = 0;
  for(int i = 0; i < n; ++i) {
    total += x[i] + y[i];
  }
  return total;
}

/*** R
timesTwo(42)
timesThree(3)
a = timesThree(3)*2
print(a)
hello2()

cppFunction('int add(int x, int y, int z) {
  int sum = x + y + z;
  return sum;
}')
add
add(1,2,3)
sumTwoC(c(1, 2, 3), c(4, 5, 6))

*/


// [[Rcpp::export]]
double meanC(NumericVector x) {
  int n = x.size();
  double total = 0;

  for(int i = 0; i < n; ++i) {
    total += x[i];
  }
  return total / n;
}

/*** R
x <- runif(1e5)
bench::mark(
  mean(x),
  meanC(x)
)
isTRUE(mean(x)==meanC(x))
*/
