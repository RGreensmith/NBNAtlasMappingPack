# Hello, world!
#
# This is an example function named 'hello'
# which prints 'Hello, world!'.
#
# You can learn more about package authoring with RStudio at:
#
#   https://r-pkgs.org
#
# Some useful keyboard shortcuts for package authoring:
#
#   Install Package:           'Ctrl + Shift + B'
#   Check Package:             'Ctrl + Shift + E'
#   Test Package:              'Ctrl + Shift + T'

hello <- function(a) {
  print("Hello, world!")
  print(a)

  Rcpp::cppFunction('CharacterVector hello2() {
      return "sausage";
    }'
  )
  print(hello2())
}

# cppFunction('int add(int x, int y, int z) {
#   int sum = x + y + z;
#   return sum;
# }')
# add
# add(1,2,3)
