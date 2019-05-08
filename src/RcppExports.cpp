// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// l_esreg_covariance
arma::mat l_esreg_covariance(arma::mat xq, arma::mat xe, arma::colvec xbq, arma::colvec xbe, arma::colvec G1_prime_xq, arma::colvec G2_xe, arma::colvec G2_prime_xe, arma::colvec density, arma::colvec conditional_variance, double alpha);
RcppExport SEXP _esreg_l_esreg_covariance(SEXP xqSEXP, SEXP xeSEXP, SEXP xbqSEXP, SEXP xbeSEXP, SEXP G1_prime_xqSEXP, SEXP G2_xeSEXP, SEXP G2_prime_xeSEXP, SEXP densitySEXP, SEXP conditional_varianceSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xq(xqSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xe(xeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type xbq(xbqSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type xbe(xbeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type G1_prime_xq(G1_prime_xqSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type G2_xe(G2_xeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type G2_prime_xe(G2_prime_xeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type density(densitySEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type conditional_variance(conditional_varianceSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(l_esreg_covariance(xq, xe, xbq, xbe, G1_prime_xq, G2_xe, G2_prime_xe, density, conditional_variance, alpha));
    return rcpp_result_gen;
END_RCPP
}
// lambda_matrix_loop
arma::mat lambda_matrix_loop(arma::mat xq, arma::mat xe, arma::vec xbq, arma::vec xbe, arma::vec G1_prime_xq, arma::vec G1_prime_prime_xq, arma::vec G2_xe, arma::vec G2_prime_xe, arma::vec G2_prime_prime_xe, arma::vec density, bool include_misspecification_terms, double alpha);
RcppExport SEXP _esreg_lambda_matrix_loop(SEXP xqSEXP, SEXP xeSEXP, SEXP xbqSEXP, SEXP xbeSEXP, SEXP G1_prime_xqSEXP, SEXP G1_prime_prime_xqSEXP, SEXP G2_xeSEXP, SEXP G2_prime_xeSEXP, SEXP G2_prime_prime_xeSEXP, SEXP densitySEXP, SEXP include_misspecification_termsSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xq(xqSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xe(xeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type xbq(xbqSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type xbe(xbeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type G1_prime_xq(G1_prime_xqSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type G1_prime_prime_xq(G1_prime_prime_xqSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type G2_xe(G2_xeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type G2_prime_xe(G2_prime_xeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type G2_prime_prime_xe(G2_prime_prime_xeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type density(densitySEXP);
    Rcpp::traits::input_parameter< bool >::type include_misspecification_terms(include_misspecification_termsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(lambda_matrix_loop(xq, xe, xbq, xbe, G1_prime_xq, G1_prime_prime_xq, G2_xe, G2_prime_xe, G2_prime_prime_xe, density, include_misspecification_terms, alpha));
    return rcpp_result_gen;
END_RCPP
}
// sigma_matrix_calculcated
arma::mat sigma_matrix_calculcated(arma::mat xq, arma::mat xe, arma::colvec xbq, arma::colvec xbe, arma::colvec G1_prime_xq, arma::colvec G2_xe, arma::colvec G2_prime_xe, arma::colvec conditional_variance, double alpha);
RcppExport SEXP _esreg_sigma_matrix_calculcated(SEXP xqSEXP, SEXP xeSEXP, SEXP xbqSEXP, SEXP xbeSEXP, SEXP G1_prime_xqSEXP, SEXP G2_xeSEXP, SEXP G2_prime_xeSEXP, SEXP conditional_varianceSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type xq(xqSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xe(xeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type xbq(xbqSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type xbe(xbeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type G1_prime_xq(G1_prime_xqSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type G2_xe(G2_xeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type G2_prime_xe(G2_prime_xeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type conditional_variance(conditional_varianceSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(sigma_matrix_calculcated(xq, xe, xbq, xbe, G1_prime_xq, G2_xe, G2_prime_xe, conditional_variance, alpha));
    return rcpp_result_gen;
END_RCPP
}
// estimating_function_loop
arma::mat estimating_function_loop(arma::vec y, arma::mat xq, arma::mat xe, arma::colvec xbq, arma::colvec xbe, arma::colvec G1_prime_xq, arma::colvec G2_xe, arma::colvec G2_prime_xe, double alpha);
RcppExport SEXP _esreg_estimating_function_loop(SEXP ySEXP, SEXP xqSEXP, SEXP xeSEXP, SEXP xbqSEXP, SEXP xbeSEXP, SEXP G1_prime_xqSEXP, SEXP G2_xeSEXP, SEXP G2_prime_xeSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xq(xqSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xe(xeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type xbq(xbqSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type xbe(xbeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type G1_prime_xq(G1_prime_xqSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type G2_xe(G2_xeSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type G2_prime_xe(G2_prime_xeSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(estimating_function_loop(y, xq, xe, xbq, xbe, G1_prime_xq, G2_xe, G2_prime_xe, alpha));
    return rcpp_result_gen;
END_RCPP
}
// G1_fun
double G1_fun(double z, int type);
RcppExport SEXP _esreg_G1_fun(SEXP zSEXP, SEXP typeSEXP) {
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
RcppExport SEXP _esreg_G1_prime_fun(SEXP zSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(G1_prime_fun(z, type));
    return rcpp_result_gen;
END_RCPP
}
// G1_prime_prime_fun
double G1_prime_prime_fun(double z, int type);
RcppExport SEXP _esreg_G1_prime_prime_fun(SEXP zSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(G1_prime_prime_fun(z, type));
    return rcpp_result_gen;
END_RCPP
}
// G2_curly_fun
double G2_curly_fun(double z, int type);
RcppExport SEXP _esreg_G2_curly_fun(SEXP zSEXP, SEXP typeSEXP) {
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
RcppExport SEXP _esreg_G2_fun(SEXP zSEXP, SEXP typeSEXP) {
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
RcppExport SEXP _esreg_G2_prime_fun(SEXP zSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(G2_prime_fun(z, type));
    return rcpp_result_gen;
END_RCPP
}
// G2_prime_prime
double G2_prime_prime(double z, int type);
RcppExport SEXP _esreg_G2_prime_prime(SEXP zSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(G2_prime_prime(z, type));
    return rcpp_result_gen;
END_RCPP
}
// G_vec
Rcpp::NumericVector G_vec(Rcpp::NumericVector z, Rcpp::String g, int type);
RcppExport SEXP _esreg_G_vec(SEXP zSEXP, SEXP gSEXP, SEXP typeSEXP) {
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
double esr_rho_lp(const arma::colvec& b, const arma::colvec& y, const arma::mat& xq, const arma::mat& xe, double alpha, int g1, int g2);
RcppExport SEXP _esreg_esr_rho_lp(SEXP bSEXP, SEXP ySEXP, SEXP xqSEXP, SEXP xeSEXP, SEXP alphaSEXP, SEXP g1SEXP, SEXP g2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type xq(xqSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type xe(xeSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type g1(g1SEXP);
    Rcpp::traits::input_parameter< int >::type g2(g2SEXP);
    rcpp_result_gen = Rcpp::wrap(esr_rho_lp(b, y, xq, xe, alpha, g1, g2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_esreg_l_esreg_covariance", (DL_FUNC) &_esreg_l_esreg_covariance, 10},
    {"_esreg_lambda_matrix_loop", (DL_FUNC) &_esreg_lambda_matrix_loop, 12},
    {"_esreg_sigma_matrix_calculcated", (DL_FUNC) &_esreg_sigma_matrix_calculcated, 9},
    {"_esreg_estimating_function_loop", (DL_FUNC) &_esreg_estimating_function_loop, 9},
    {"_esreg_G1_fun", (DL_FUNC) &_esreg_G1_fun, 2},
    {"_esreg_G1_prime_fun", (DL_FUNC) &_esreg_G1_prime_fun, 2},
    {"_esreg_G1_prime_prime_fun", (DL_FUNC) &_esreg_G1_prime_prime_fun, 2},
    {"_esreg_G2_curly_fun", (DL_FUNC) &_esreg_G2_curly_fun, 2},
    {"_esreg_G2_fun", (DL_FUNC) &_esreg_G2_fun, 2},
    {"_esreg_G2_prime_fun", (DL_FUNC) &_esreg_G2_prime_fun, 2},
    {"_esreg_G2_prime_prime", (DL_FUNC) &_esreg_G2_prime_prime, 2},
    {"_esreg_G_vec", (DL_FUNC) &_esreg_G_vec, 3},
    {"_esreg_esr_rho_lp", (DL_FUNC) &_esreg_esr_rho_lp, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_esreg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
