// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// factor_corres
Rcpp::List factor_corres(NumericMatrix x, NumericMatrix y, double thresh);
RcppExport SEXP _EFAdiff_factor_corres(SEXP xSEXP, SEXP ySEXP, SEXP threshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type thresh(threshSEXP);
    rcpp_result_gen = Rcpp::wrap(factor_corres(x, y, thresh));
    return rcpp_result_gen;
END_RCPP
}
// hull_paf
arma::mat hull_paf(const int n_fac, arma::mat R, double criterion, int max_iter);
RcppExport SEXP _EFAdiff_hull_paf(SEXP n_facSEXP, SEXP RSEXP, SEXP criterionSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n_fac(n_facSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type R(RSEXP);
    Rcpp::traits::input_parameter< double >::type criterion(criterionSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(hull_paf(n_fac, R, criterion, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// paf_iter
Rcpp::List paf_iter(arma::vec h2, double criterion, arma::mat R, const int n_fac, bool abs_eig, int crit_type, int max_iter);
RcppExport SEXP _EFAdiff_paf_iter(SEXP h2SEXP, SEXP criterionSEXP, SEXP RSEXP, SEXP n_facSEXP, SEXP abs_eigSEXP, SEXP crit_typeSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type h2(h2SEXP);
    Rcpp::traits::input_parameter< double >::type criterion(criterionSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type R(RSEXP);
    Rcpp::traits::input_parameter< const int >::type n_fac(n_facSEXP);
    Rcpp::traits::input_parameter< bool >::type abs_eig(abs_eigSEXP);
    Rcpp::traits::input_parameter< int >::type crit_type(crit_typeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(paf_iter(h2, criterion, R, n_fac, abs_eig, crit_type, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// parallel_sim
arma::mat parallel_sim(const int n_datasets, const int n_vars, const int n_cases, const int eigen_type);
RcppExport SEXP _EFAdiff_parallel_sim(SEXP n_datasetsSEXP, SEXP n_varsSEXP, SEXP n_casesSEXP, SEXP eigen_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n_datasets(n_datasetsSEXP);
    Rcpp::traits::input_parameter< const int >::type n_vars(n_varsSEXP);
    Rcpp::traits::input_parameter< const int >::type n_cases(n_casesSEXP);
    Rcpp::traits::input_parameter< const int >::type eigen_type(eigen_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(parallel_sim(n_datasets, n_vars, n_cases, eigen_type));
    return rcpp_result_gen;
END_RCPP
}
// parallel_paf
arma::vec parallel_paf(arma::mat R, double criterion, int crit_type, int max_iter);
RcppExport SEXP _EFAdiff_parallel_paf(SEXP RSEXP, SEXP criterionSEXP, SEXP crit_typeSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type R(RSEXP);
    Rcpp::traits::input_parameter< double >::type criterion(criterionSEXP);
    Rcpp::traits::input_parameter< int >::type crit_type(crit_typeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(parallel_paf(R, criterion, crit_type, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// parallel_paf_sim
arma::mat parallel_paf_sim(const int n_datasets, const int n_vars, const int n_cases, double criterion, int crit_type, int max_iter);
RcppExport SEXP _EFAdiff_parallel_paf_sim(SEXP n_datasetsSEXP, SEXP n_varsSEXP, SEXP n_casesSEXP, SEXP criterionSEXP, SEXP crit_typeSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n_datasets(n_datasetsSEXP);
    Rcpp::traits::input_parameter< const int >::type n_vars(n_varsSEXP);
    Rcpp::traits::input_parameter< const int >::type n_cases(n_casesSEXP);
    Rcpp::traits::input_parameter< double >::type criterion(criterionSEXP);
    Rcpp::traits::input_parameter< int >::type crit_type(crit_typeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(parallel_paf_sim(n_datasets, n_vars, n_cases, criterion, crit_type, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// parallel_summarise
NumericMatrix parallel_summarise(NumericMatrix eig_vals, NumericVector percent, const int n_datasets, const int n_vars);
RcppExport SEXP _EFAdiff_parallel_summarise(SEXP eig_valsSEXP, SEXP percentSEXP, SEXP n_datasetsSEXP, SEXP n_varsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type eig_vals(eig_valsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type percent(percentSEXP);
    Rcpp::traits::input_parameter< const int >::type n_datasets(n_datasetsSEXP);
    Rcpp::traits::input_parameter< const int >::type n_vars(n_varsSEXP);
    rcpp_result_gen = Rcpp::wrap(parallel_summarise(eig_vals, percent, n_datasets, n_vars));
    return rcpp_result_gen;
END_RCPP
}
// grad_uls
arma::vec grad_uls(arma::vec psi, arma::mat R, const int n_fac);
RcppExport SEXP _EFAdiff_grad_uls(SEXP psiSEXP, SEXP RSEXP, SEXP n_facSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type R(RSEXP);
    Rcpp::traits::input_parameter< const int >::type n_fac(n_facSEXP);
    rcpp_result_gen = Rcpp::wrap(grad_uls(psi, R, n_fac));
    return rcpp_result_gen;
END_RCPP
}
// uls_residuals
double uls_residuals(arma::vec psi, arma::mat R, const int n_fac);
RcppExport SEXP _EFAdiff_uls_residuals(SEXP psiSEXP, SEXP RSEXP, SEXP n_facSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type R(RSEXP);
    Rcpp::traits::input_parameter< const int >::type n_fac(n_facSEXP);
    rcpp_result_gen = Rcpp::wrap(uls_residuals(psi, R, n_fac));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_EFAdiff_factor_corres", (DL_FUNC) &_EFAdiff_factor_corres, 3},
    {"_EFAdiff_hull_paf", (DL_FUNC) &_EFAdiff_hull_paf, 4},
    {"_EFAdiff_paf_iter", (DL_FUNC) &_EFAdiff_paf_iter, 7},
    {"_EFAdiff_parallel_sim", (DL_FUNC) &_EFAdiff_parallel_sim, 4},
    {"_EFAdiff_parallel_paf", (DL_FUNC) &_EFAdiff_parallel_paf, 4},
    {"_EFAdiff_parallel_paf_sim", (DL_FUNC) &_EFAdiff_parallel_paf_sim, 6},
    {"_EFAdiff_parallel_summarise", (DL_FUNC) &_EFAdiff_parallel_summarise, 4},
    {"_EFAdiff_grad_uls", (DL_FUNC) &_EFAdiff_grad_uls, 3},
    {"_EFAdiff_uls_residuals", (DL_FUNC) &_EFAdiff_uls_residuals, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_EFAdiff(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
