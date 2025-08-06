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

#' Hello, world!
#'
#' This function allows you to print 'Hello, world!'.
#' @param  a (character) print this. 
#' @keywords cats
#' @export
#' @examples
#' hello()
#' 
hello <- function(a) {
  print("Hello, world!")
  print(a)
}
