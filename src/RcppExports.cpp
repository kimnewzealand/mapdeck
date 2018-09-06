// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_diff
Rcpp::NumericVector rcpp_diff(Rcpp::NumericVector x);
RcppExport SEXP _mapdeck_rcpp_diff(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_diff(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_range
Rcpp::NumericVector rcpp_range(Rcpp::NumericVector x);
RcppExport SEXP _mapdeck_rcpp_range(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_range(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_rescale
Rcpp::NumericVector rcpp_rescale(Rcpp::NumericVector x);
RcppExport SEXP _mapdeck_rcpp_rescale(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_rescale(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_unique
Rcpp::NumericVector rcpp_unique(Rcpp::NumericVector x);
RcppExport SEXP _mapdeck_rcpp_unique(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_unique(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_seq
Rcpp::NumericVector rcpp_seq(double x, double y, int length_out);
RcppExport SEXP _mapdeck_rcpp_seq(SEXP xSEXP, SEXP ySEXP, SEXP length_outSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type length_out(length_outSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_seq(x, y, length_out));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_findInterval
Rcpp::IntegerVector rcpp_findInterval(NumericVector x, NumericVector breaks);
RcppExport SEXP _mapdeck_rcpp_findInterval(SEXP xSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type breaks(breaksSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_findInterval(x, breaks));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_generate_palette
Rcpp::List rcpp_generate_palette(Rcpp::NumericVector x, Function pal);
RcppExport SEXP _mapdeck_rcpp_generate_palette(SEXP xSEXP, SEXP palSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Function >::type pal(palSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_generate_palette(x, pal));
    return rcpp_result_gen;
END_RCPP
}
// viridis_test
Rcpp::StringVector viridis_test(Rcpp::NumericVector x);
RcppExport SEXP _mapdeck_viridis_test(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(viridis_test(x));
    return rcpp_result_gen;
END_RCPP
}
// test_palette
Rcpp::StringVector test_palette(int data_rows, Function f);
RcppExport SEXP _mapdeck_test_palette(SEXP data_rowsSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type data_rows(data_rowsSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(test_palette(data_rows, f));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_scatterplot
Rcpp::List rcpp_scatterplot(Rcpp::DataFrame data, Rcpp::List params);
RcppExport SEXP _mapdeck_rcpp_scatterplot(SEXP dataSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_scatterplot(data, params));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mapdeck_rcpp_diff", (DL_FUNC) &_mapdeck_rcpp_diff, 1},
    {"_mapdeck_rcpp_range", (DL_FUNC) &_mapdeck_rcpp_range, 1},
    {"_mapdeck_rcpp_rescale", (DL_FUNC) &_mapdeck_rcpp_rescale, 1},
    {"_mapdeck_rcpp_unique", (DL_FUNC) &_mapdeck_rcpp_unique, 1},
    {"_mapdeck_rcpp_seq", (DL_FUNC) &_mapdeck_rcpp_seq, 3},
    {"_mapdeck_rcpp_findInterval", (DL_FUNC) &_mapdeck_rcpp_findInterval, 2},
    {"_mapdeck_rcpp_generate_palette", (DL_FUNC) &_mapdeck_rcpp_generate_palette, 2},
    {"_mapdeck_viridis_test", (DL_FUNC) &_mapdeck_viridis_test, 1},
    {"_mapdeck_test_palette", (DL_FUNC) &_mapdeck_test_palette, 2},
    {"_mapdeck_rcpp_scatterplot", (DL_FUNC) &_mapdeck_rcpp_scatterplot, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_mapdeck(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}