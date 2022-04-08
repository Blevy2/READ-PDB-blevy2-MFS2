// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// norm_mat
NumericMatrix norm_mat(NumericMatrix M, NumericMatrix MM, NumericMatrix Nzero_vals);
RcppExport SEXP _MixFishSim_norm_mat(SEXP MSEXP, SEXP MMSEXP, SEXP Nzero_valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type MM(MMSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Nzero_vals(Nzero_valsSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_mat(M, MM, Nzero_vals));
    return rcpp_result_gen;
END_RCPP
}
// distance_calc
double distance_calc(int x1, int y1, int x2, int y2);
RcppExport SEXP _MixFishSim_distance_calc(SEXP x1SEXP, SEXP y1SEXP, SEXP x2SEXP, SEXP y2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< int >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< int >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< int >::type y2(y2SEXP);
    rcpp_result_gen = Rcpp::wrap(distance_calc(x1, y1, x2, y2));
    return rcpp_result_gen;
END_RCPP
}
// move_prob
NumericMatrix move_prob(NumericVector start, double lambda, NumericMatrix hab, NumericMatrix Nzero_vals);
RcppExport SEXP _MixFishSim_move_prob(SEXP startSEXP, SEXP lambdaSEXP, SEXP habSEXP, SEXP Nzero_valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type start(startSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type hab(habSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Nzero_vals(Nzero_valsSEXP);
    rcpp_result_gen = Rcpp::wrap(move_prob(start, lambda, hab, Nzero_vals));
    return rcpp_result_gen;
END_RCPP
}
// move_prob_Lst
List move_prob_Lst(double lambda, NumericMatrix hab, NumericMatrix Nzero_vals);
RcppExport SEXP _MixFishSim_move_prob_Lst(SEXP lambdaSEXP, SEXP habSEXP, SEXP Nzero_valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type hab(habSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Nzero_vals(Nzero_valsSEXP);
    rcpp_result_gen = Rcpp::wrap(move_prob_Lst(lambda, hab, Nzero_vals));
    return rcpp_result_gen;
END_RCPP
}
// move_population
List move_population(List moveProp, NumericMatrix StartPop, NumericMatrix Nzero_vals, List HabTemp);
RcppExport SEXP _MixFishSim_move_population(SEXP movePropSEXP, SEXP StartPopSEXP, SEXP Nzero_valsSEXP, SEXP HabTempSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type moveProp(movePropSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type StartPop(StartPopSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Nzero_vals(Nzero_valsSEXP);
    Rcpp::traits::input_parameter< List >::type HabTemp(HabTempSEXP);
    rcpp_result_gen = Rcpp::wrap(move_population(moveProp, StartPop, Nzero_vals, HabTemp));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MixFishSim_norm_mat", (DL_FUNC) &_MixFishSim_norm_mat, 3},
    {"_MixFishSim_distance_calc", (DL_FUNC) &_MixFishSim_distance_calc, 4},
    {"_MixFishSim_move_prob", (DL_FUNC) &_MixFishSim_move_prob, 4},
    {"_MixFishSim_move_prob_Lst", (DL_FUNC) &_MixFishSim_move_prob_Lst, 3},
    {"_MixFishSim_move_population", (DL_FUNC) &_MixFishSim_move_population, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_MixFishSim(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
