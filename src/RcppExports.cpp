// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// anytime_cpp
Rcpp::NumericVector anytime_cpp(SEXP x, std::string tz);
RcppExport SEXP anytime_anytime_cpp(SEXP xSEXP, SEXP tzSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type tz(tzSEXP);
    rcpp_result_gen = Rcpp::wrap(anytime_cpp(x, tz));
    return rcpp_result_gen;
END_RCPP
}