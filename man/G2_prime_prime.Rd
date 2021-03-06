% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{G2_prime_prime}
\alias{G2_prime_prime}
\title{Specification Function}
\usage{
G2_prime_prime(z, type)
}
\arguments{
\item{z}{Data}

\item{type}{Choice of the G2_prime_prime function:
\itemize{
  \item 1: -2/z^3, z < 0
  \item 2: 0.375 / (-z)^(5/2), z < 0
  \item 3: 6/z^4, z < 0
  \item 4: -(exp(z) * (exp(z) - 1)) / (exp(z) + 1)^3
  \item 5: exp(z)
}}
}
\description{
G2_prime_prime
}
\keyword{internal}
