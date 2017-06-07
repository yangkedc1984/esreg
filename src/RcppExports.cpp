// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// l_esreg_covariance
arma::mat l_esreg_covariance(arma::mat x, arma::colvec xq, arma::colvec xe, arma::colvec G1_prime_xq, arma::colvec G2_xe, arma::colvec G2_prime_xe, arma::colvec density, arma::colvec conditional_variance, double alpha);
RcppExport SEXP esreg_l_esreg_covariance(SEXP xSEXP, SEXP xqSEXP, SEXP xeSEXP, SEXP G1_prime_xqSEXP, SEXP G2_xeSEXP, SEXP G2_prime_xeSEXP, SEXP densitySEXP, SEXP conditional_varianceSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type xq(xqSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type xe(xeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type G1_prime_xq(G1_prime_xqSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type G2_xe(G2_xeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type G2_prime_xe(G2_prime_xeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type density(densitySEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type conditional_variance(conditional_varianceSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(l_esreg_covariance(x, xq, xe, G1_prime_xq, G2_xe, G2_prime_xe, density, conditional_variance, alpha));
    return rcpp_result_gen;
END_RCPP
}
// l_esreg_twostep_covariance
arma::mat l_esreg_twostep_covariance(arma::mat x, arma::colvec xq, arma::colvec xe, arma::colvec density, arma::colvec conditional_variance, double alpha);
RcppExport SEXP esreg_l_esreg_twostep_covariance(SEXP xSEXP, SEXP xqSEXP, SEXP xeSEXP, SEXP densitySEXP, SEXP conditional_varianceSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type xq(xqSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type xe(xeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type density(densitySEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type conditional_variance(conditional_varianceSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(l_esreg_twostep_covariance(x, xq, xe, density, conditional_variance, alpha));
    return rcpp_result_gen;
END_RCPP
}
// stationary_bootstrap_indices
Rcpp::NumericMatrix stationary_bootstrap_indices(int n, double avg_block_size, int B);
RcppExport SEXP esreg_stationary_bootstrap_indices(SEXP nSEXP, SEXP avg_block_sizeSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type avg_block_size(avg_block_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(stationary_bootstrap_indices(n, avg_block_size, B));
    return rcpp_result_gen;
END_RCPP
}
// G1_fun
double G1_fun(double z, int type);
RcppExport SEXP esreg_G1_fun(SEXP zSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(G1_fun(z, type));
    return rcpp_result_gen;
END_RCPP
}
// G1_prime_fun
double G1_prime_fun(double z, int type);
RcppExport SEXP esreg_G1_prime_fun(SEXP zSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(G1_prime_fun(z, type));
    return rcpp_result_gen;
END_RCPP
}
// G2_curly_fun
double G2_curly_fun(double z, int type);
RcppExport SEXP esreg_G2_curly_fun(SEXP zSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(G2_curly_fun(z, type));
    return rcpp_result_gen;
END_RCPP
}
// G2_fun
double G2_fun(double z, int type);
RcppExport SEXP esreg_G2_fun(SEXP zSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(G2_fun(z, type));
    return rcpp_result_gen;
END_RCPP
}
// G2_prime_fun
double G2_prime_fun(double z, int type);
RcppExport SEXP esreg_G2_prime_fun(SEXP zSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(G2_prime_fun(z, type));
    return rcpp_result_gen;
END_RCPP
}
// G_vec
Rcpp::NumericVector G_vec(Rcpp::NumericVector z, Rcpp::String g, int type);
RcppExport SEXP esreg_G_vec(SEXP zSEXP, SEXP gSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type g(gSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(G_vec(z, g, type));
    return rcpp_result_gen;
END_RCPP
}
// esr_rho_lp
double esr_rho_lp(const arma::colvec& b, const arma::colvec& y, const arma::mat& x, double alpha, int g1, int g2, double delta);
RcppExport SEXP esreg_esr_rho_lp(SEXP bSEXP, SEXP ySEXP, SEXP xSEXP, SEXP alphaSEXP, SEXP g1SEXP, SEXP g2SEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type g1(g1SEXP);
    Rcpp::traits::input_parameter< int >::type g2(g2SEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(esr_rho_lp(b, y, x, alpha, g1, g2, delta));
    return rcpp_result_gen;
END_RCPP
}
// esr_psi_lp
double esr_psi_lp(const arma::colvec& b, const arma::colvec& y, const arma::mat& x, double alpha, int g1, int g2, double delta);
RcppExport SEXP esreg_esr_psi_lp(SEXP bSEXP, SEXP ySEXP, SEXP xSEXP, SEXP alphaSEXP, SEXP g1SEXP, SEXP g2SEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type g1(g1SEXP);
    Rcpp::traits::input_parameter< int >::type g2(g2SEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(esr_psi_lp(b, y, x, alpha, g1, g2, delta));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"esreg_l_esreg_covariance", (DL_FUNC) &esreg_l_esreg_covariance, 9},
    {"esreg_l_esreg_twostep_covariance", (DL_FUNC) &esreg_l_esreg_twostep_covariance, 6},
    {"esreg_stationary_bootstrap_indices", (DL_FUNC) &esreg_stationary_bootstrap_indices, 3},
    {"esreg_G1_fun", (DL_FUNC) &esreg_G1_fun, 2},
    {"esreg_G1_prime_fun", (DL_FUNC) &esreg_G1_prime_fun, 2},
    {"esreg_G2_curly_fun", (DL_FUNC) &esreg_G2_curly_fun, 2},
    {"esreg_G2_fun", (DL_FUNC) &esreg_G2_fun, 2},
    {"esreg_G2_prime_fun", (DL_FUNC) &esreg_G2_prime_fun, 2},
    {"esreg_G_vec", (DL_FUNC) &esreg_G_vec, 3},
    {"esreg_esr_rho_lp", (DL_FUNC) &esreg_esr_rho_lp, 7},
    {"esreg_esr_psi_lp", (DL_FUNC) &esreg_esr_psi_lp, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_esreg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
