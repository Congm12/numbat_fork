// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// allChildrenCPP
List allChildrenCPP(const IntegerMatrix orig);
RcppExport SEXP _numbat_allChildrenCPP(SEXP origSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type orig(origSEXP);
    rcpp_result_gen = Rcpp::wrap(allChildrenCPP(orig));
    return rcpp_result_gen;
END_RCPP
}
// cppdbbinom
NumericVector cppdbbinom(const NumericVector& x, const NumericVector& size, const NumericVector& alpha, const NumericVector& beta, const bool& log_prob);
RcppExport SEXP _numbat_cppdbbinom(SEXP xSEXP, SEXP sizeSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP log_probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const bool& >::type log_prob(log_probSEXP);
    rcpp_result_gen = Rcpp::wrap(cppdbbinom(x, size, alpha, beta, log_prob));
    return rcpp_result_gen;
END_RCPP
}
// poilog2
NumericVector poilog2(NumericVector x, NumericVector y, double my1, double my2, double sig1, double sig2, double ro, int nrN);
RcppExport SEXP _numbat_poilog2(SEXP xSEXP, SEXP ySEXP, SEXP my1SEXP, SEXP my2SEXP, SEXP sig1SEXP, SEXP sig2SEXP, SEXP roSEXP, SEXP nrNSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type my1(my1SEXP);
    Rcpp::traits::input_parameter< double >::type my2(my2SEXP);
    Rcpp::traits::input_parameter< double >::type sig1(sig1SEXP);
    Rcpp::traits::input_parameter< double >::type sig2(sig2SEXP);
    Rcpp::traits::input_parameter< double >::type ro(roSEXP);
    Rcpp::traits::input_parameter< int >::type nrN(nrNSEXP);
    rcpp_result_gen = Rcpp::wrap(poilog2(x, y, my1, my2, sig1, sig2, ro, nrN));
    return rcpp_result_gen;
END_RCPP
}
// poilog1
NumericVector poilog1(NumericVector x, NumericVector my, NumericVector sig, int nrN);
RcppExport SEXP _numbat_poilog1(SEXP xSEXP, SEXP mySEXP, SEXP sigSEXP, SEXP nrNSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type my(mySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sig(sigSEXP);
    Rcpp::traits::input_parameter< int >::type nrN(nrNSEXP);
    rcpp_result_gen = Rcpp::wrap(poilog1(x, my, sig, nrN));
    return rcpp_result_gen;
END_RCPP
}
// logSumExp
double logSumExp(const arma::vec& x);
RcppExport SEXP _numbat_logSumExp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(logSumExp(x));
    return rcpp_result_gen;
END_RCPP
}
// likelihood_allele_compute
double likelihood_allele_compute(Rcpp::List obj, Rcpp::NumericVector logphi, Rcpp::NumericMatrix logprob, Rcpp::List logPi, int n, int m);
RcppExport SEXP _numbat_likelihood_allele_compute(SEXP objSEXP, SEXP logphiSEXP, SEXP logprobSEXP, SEXP logPiSEXP, SEXP nSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type obj(objSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type logphi(logphiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type logprob(logprobSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type logPi(logPiSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihood_allele_compute(obj, logphi, logprob, logPi, n, m));
    return rcpp_result_gen;
END_RCPP
}
// forward_backward_compute
Rcpp::NumericMatrix forward_backward_compute(Rcpp::List obj, Rcpp::NumericVector logphi, Rcpp::NumericMatrix logprob, Rcpp::List logPi, int n, int m);
RcppExport SEXP _numbat_forward_backward_compute(SEXP objSEXP, SEXP logphiSEXP, SEXP logprobSEXP, SEXP logPiSEXP, SEXP nSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type obj(objSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type logphi(logphiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type logprob(logprobSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type logPi(logPiSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(forward_backward_compute(obj, logphi, logprob, logPi, n, m));
    return rcpp_result_gen;
END_RCPP
}
// CgetQ
NumericMatrix CgetQ(NumericMatrix logQ, List children_dict, IntegerVector node_order);
RcppExport SEXP _numbat_CgetQ(SEXP logQSEXP, SEXP children_dictSEXP, SEXP node_orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type logQ(logQSEXP);
    Rcpp::traits::input_parameter< List >::type children_dict(children_dictSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type node_order(node_orderSEXP);
    rcpp_result_gen = Rcpp::wrap(CgetQ(logQ, children_dict, node_order));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_numbat_allChildrenCPP", (DL_FUNC) &_numbat_allChildrenCPP, 1},
    {"_numbat_cppdbbinom", (DL_FUNC) &_numbat_cppdbbinom, 5},
    {"_numbat_poilog2", (DL_FUNC) &_numbat_poilog2, 8},
    {"_numbat_poilog1", (DL_FUNC) &_numbat_poilog1, 4},
    {"_numbat_logSumExp", (DL_FUNC) &_numbat_logSumExp, 1},
    {"_numbat_likelihood_allele_compute", (DL_FUNC) &_numbat_likelihood_allele_compute, 6},
    {"_numbat_forward_backward_compute", (DL_FUNC) &_numbat_forward_backward_compute, 6},
    {"_numbat_CgetQ", (DL_FUNC) &_numbat_CgetQ, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_numbat(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
