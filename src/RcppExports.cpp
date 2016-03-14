// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// R_hunspell_info
List R_hunspell_info(std::string affix, CharacterVector dict);
RcppExport SEXP hunspell_R_hunspell_info(SEXP affixSEXP, SEXP dictSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type affix(affixSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type dict(dictSEXP);
    __result = Rcpp::wrap(R_hunspell_info(affix, dict));
    return __result;
END_RCPP
}
// R_hunspell_check
LogicalVector R_hunspell_check(std::string affix, CharacterVector dict, CharacterVector words, CharacterVector ignore);
RcppExport SEXP hunspell_R_hunspell_check(SEXP affixSEXP, SEXP dictSEXP, SEXP wordsSEXP, SEXP ignoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type affix(affixSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type words(wordsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type ignore(ignoreSEXP);
    __result = Rcpp::wrap(R_hunspell_check(affix, dict, words, ignore));
    return __result;
END_RCPP
}
// R_hunspell_suggest
List R_hunspell_suggest(std::string affix, CharacterVector dict, CharacterVector words);
RcppExport SEXP hunspell_R_hunspell_suggest(SEXP affixSEXP, SEXP dictSEXP, SEXP wordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type affix(affixSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type words(wordsSEXP);
    __result = Rcpp::wrap(R_hunspell_suggest(affix, dict, words));
    return __result;
END_RCPP
}
// R_hunspell_analyze
List R_hunspell_analyze(std::string affix, CharacterVector dict, CharacterVector words);
RcppExport SEXP hunspell_R_hunspell_analyze(SEXP affixSEXP, SEXP dictSEXP, SEXP wordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type affix(affixSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type words(wordsSEXP);
    __result = Rcpp::wrap(R_hunspell_analyze(affix, dict, words));
    return __result;
END_RCPP
}
// R_hunspell_stem
List R_hunspell_stem(std::string affix, CharacterVector dict, CharacterVector words);
RcppExport SEXP hunspell_R_hunspell_stem(SEXP affixSEXP, SEXP dictSEXP, SEXP wordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type affix(affixSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type words(wordsSEXP);
    __result = Rcpp::wrap(R_hunspell_stem(affix, dict, words));
    return __result;
END_RCPP
}
// R_hunspell_find
List R_hunspell_find(std::string affix, CharacterVector dict, CharacterVector text, CharacterVector ignore, std::string format);
RcppExport SEXP hunspell_R_hunspell_find(SEXP affixSEXP, SEXP dictSEXP, SEXP textSEXP, SEXP ignoreSEXP, SEXP formatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type affix(affixSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type text(textSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type ignore(ignoreSEXP);
    Rcpp::traits::input_parameter< std::string >::type format(formatSEXP);
    __result = Rcpp::wrap(R_hunspell_find(affix, dict, text, ignore, format));
    return __result;
END_RCPP
}
