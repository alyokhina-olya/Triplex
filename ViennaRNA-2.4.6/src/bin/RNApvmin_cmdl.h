/** @file RNApvmin_cmdl.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef RNAPVMIN_CMDL_H
#define RNAPVMIN_CMDL_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef RNAPVMIN_CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define RNAPVMIN_CMDLINE_PARSER_PACKAGE "RNApvmin"
#endif

#ifndef RNAPVMIN_CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define RNAPVMIN_CMDLINE_PARSER_PACKAGE_NAME "RNApvmin"
#endif

#ifndef RNAPVMIN_CMDLINE_PARSER_VERSION
/** @brief the program version */
#define RNAPVMIN_CMDLINE_PARSER_VERSION VERSION
#endif

enum enum_minimizer { minimizer__NULL = -1, minimizer_arg_conjugate_fr = 0, minimizer_arg_conjugate_pr, minimizer_arg_vector_bfgs, minimizer_arg_vector_bfgs2, minimizer_arg_steepest_descent, minimizer_arg_default };

/** @brief Where the command line options are stored */
struct RNApvmin_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *detailed_help_help; /**< @brief Print help, including all details and hidden options, and exit help description.  */
  const char *full_help_help; /**< @brief Print help, including hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int numThreads_arg;	/**< @brief Set the number of threads used for calculations (only available when compiled with OpenMP support)
  
.  */
  char * numThreads_orig;	/**< @brief Set the number of threads used for calculations (only available when compiled with OpenMP support)
  
 original value given at command line.  */
  const char *numThreads_help; /**< @brief Set the number of threads used for calculations (only available when compiled with OpenMP support)
  
 help description.  */
  char * shapeConversion_arg;	/**< @brief Specify the method used to convert SHAPE reactivities to pairing probabilities.
 (default='O').  */
  char * shapeConversion_orig;	/**< @brief Specify the method used to convert SHAPE reactivities to pairing probabilities.
 original value given at command line.  */
  const char *shapeConversion_help; /**< @brief Specify the method used to convert SHAPE reactivities to pairing probabilities.
 help description.  */
  double tauSigmaRatio_arg;	/**< @brief Ratio of the weighting factors tau and sigma.
 (default='1.0').  */
  char * tauSigmaRatio_orig;	/**< @brief Ratio of the weighting factors tau and sigma.
 original value given at command line.  */
  const char *tauSigmaRatio_help; /**< @brief Ratio of the weighting factors tau and sigma.
 help description.  */
  int objectiveFunction_arg;	/**< @brief The energies of the perturbation vector and the discripancies between predicted and observed pairing probabilities contribute to the objective function. This parameter defines, which function is used to process the contributions before summing them up.
  0 square
  1 absolute
  
 (default='0').  */
  char * objectiveFunction_orig;	/**< @brief The energies of the perturbation vector and the discripancies between predicted and observed pairing probabilities contribute to the objective function. This parameter defines, which function is used to process the contributions before summing them up.
  0 square
  1 absolute
  
 original value given at command line.  */
  const char *objectiveFunction_help; /**< @brief The energies of the perturbation vector and the discripancies between predicted and observed pairing probabilities contribute to the objective function. This parameter defines, which function is used to process the contributions before summing them up.
  0 square
  1 absolute
  
 help description.  */
  int sampleSize_arg;	/**< @brief The iterative minimization process requires to evaluate the gradient of the objective function. A sample size of 0 leads to an analytical evaluation which scales as O(N^4). Choosing a sample size >0 estimates the gradient by sampling the given number of sequences from the ensemble, which is much faster.
  
 (default='1000').  */
  char * sampleSize_orig;	/**< @brief The iterative minimization process requires to evaluate the gradient of the objective function. A sample size of 0 leads to an analytical evaluation which scales as O(N^4). Choosing a sample size >0 estimates the gradient by sampling the given number of sequences from the ensemble, which is much faster.
  
 original value given at command line.  */
  const char *sampleSize_help; /**< @brief The iterative minimization process requires to evaluate the gradient of the objective function. A sample size of 0 leads to an analytical evaluation which scales as O(N^4). Choosing a sample size >0 estimates the gradient by sampling the given number of sequences from the ensemble, which is much faster.
  
 help description.  */
  char * intermediatePath_arg;	/**< @brief Write an output file for each iteration of the minimization process. Each file contains the used perturbation vector and the score of the objective function. The number of the iteration will be appended to the given path.
  
.  */
  char * intermediatePath_orig;	/**< @brief Write an output file for each iteration of the minimization process. Each file contains the used perturbation vector and the score of the objective function. The number of the iteration will be appended to the given path.
  
 original value given at command line.  */
  const char *intermediatePath_help; /**< @brief Write an output file for each iteration of the minimization process. Each file contains the used perturbation vector and the score of the objective function. The number of the iteration will be appended to the given path.
  
 help description.  */
  double initialVector_arg;	/**< @brief Defines the initial perturbation vector which will be used as starting vector for the minimization process. The value 0 results in a null vector. Every other value x will be used to populate the initial vector with random numbers from the interval [-x,x].
  
 (default='0').  */
  char * initialVector_orig;	/**< @brief Defines the initial perturbation vector which will be used as starting vector for the minimization process. The value 0 results in a null vector. Every other value x will be used to populate the initial vector with random numbers from the interval [-x,x].
  
 original value given at command line.  */
  const char *initialVector_help; /**< @brief Defines the initial perturbation vector which will be used as starting vector for the minimization process. The value 0 results in a null vector. Every other value x will be used to populate the initial vector with random numbers from the interval [-x,x].
  
 help description.  */
  enum enum_minimizer minimizer_arg;	/**< @brief Set the minimizing algorithm used for finding an appropriate perturbation vector. The default option uses a custom implementation of the gradient descent algorithms while all other options represent various algorithms implemented in the GNU Scientific Library. When the GNU Scientific Library can not be found, only the default minimizer is available.
  
 (default='default').  */
  char * minimizer_orig;	/**< @brief Set the minimizing algorithm used for finding an appropriate perturbation vector. The default option uses a custom implementation of the gradient descent algorithms while all other options represent various algorithms implemented in the GNU Scientific Library. When the GNU Scientific Library can not be found, only the default minimizer is available.
  
 original value given at command line.  */
  const char *minimizer_help; /**< @brief Set the minimizing algorithm used for finding an appropriate perturbation vector. The default option uses a custom implementation of the gradient descent algorithms while all other options represent various algorithms implemented in the GNU Scientific Library. When the GNU Scientific Library can not be found, only the default minimizer is available.
  
 help description.  */
  double initialStepSize_arg;	/**< @brief The initial stepsize for the minimizer methods
  
 (default='0.01').  */
  char * initialStepSize_orig;	/**< @brief The initial stepsize for the minimizer methods
  
 original value given at command line.  */
  const char *initialStepSize_help; /**< @brief The initial stepsize for the minimizer methods
  
 help description.  */
  double minStepSize_arg;	/**< @brief The minimal stepsize for the minizimer methods
  
 (default='1e-15').  */
  char * minStepSize_orig;	/**< @brief The minimal stepsize for the minizimer methods
  
 original value given at command line.  */
  const char *minStepSize_help; /**< @brief The minimal stepsize for the minizimer methods
  
 help description.  */
  double minImprovement_arg;	/**< @brief The minimal improvement in the default minizimer method that has to be surpassed to considered a new result a better one
  
 (default='1e-3').  */
  char * minImprovement_orig;	/**< @brief The minimal improvement in the default minizimer method that has to be surpassed to considered a new result a better one
  
 original value given at command line.  */
  const char *minImprovement_help; /**< @brief The minimal improvement in the default minizimer method that has to be surpassed to considered a new result a better one
  
 help description.  */
  double minimizerTolerance_arg;	/**< @brief The tolerance to be used in the GSL minimizer methods
  
 (default='1e-3').  */
  char * minimizerTolerance_orig;	/**< @brief The tolerance to be used in the GSL minimizer methods
  
 original value given at command line.  */
  const char *minimizerTolerance_help; /**< @brief The tolerance to be used in the GSL minimizer methods
  
 help description.  */
  double pfScale_arg;	/**< @brief In the calculation of the pf use scale*mfe as an estimate for the ensemble free energy (used to avoid overflows).
 (default='1.07').  */
  char * pfScale_orig;	/**< @brief In the calculation of the pf use scale*mfe as an estimate for the ensemble free energy (used to avoid overflows).
 original value given at command line.  */
  const char *pfScale_help; /**< @brief In the calculation of the pf use scale*mfe as an estimate for the ensemble free energy (used to avoid overflows).
 help description.  */
  double temp_arg;	/**< @brief Rescale energy parameters to a temperature of temp C. Default is 37C.
  
.  */
  char * temp_orig;	/**< @brief Rescale energy parameters to a temperature of temp C. Default is 37C.
  
 original value given at command line.  */
  const char *temp_help; /**< @brief Rescale energy parameters to a temperature of temp C. Default is 37C.
  
 help description.  */
  int noTetra_flag;	/**< @brief Do not include special tabulated stabilizing energies for tri-, tetra- and hexaloop hairpins. Mostly for testing.
  
 (default=off).  */
  const char *noTetra_help; /**< @brief Do not include special tabulated stabilizing energies for tri-, tetra- and hexaloop hairpins. Mostly for testing.
  
 help description.  */
  int dangles_arg;	/**< @brief How to treat \"dangling end\" energies for bases adjacent to helices in free ends and multi-loops
 (default='2').  */
  char * dangles_orig;	/**< @brief How to treat \"dangling end\" energies for bases adjacent to helices in free ends and multi-loops
 original value given at command line.  */
  const char *dangles_help; /**< @brief How to treat \"dangling end\" energies for bases adjacent to helices in free ends and multi-loops
 help description.  */
  int noLP_flag;	/**< @brief Produce structures without lonely pairs (helices of length 1).
 (default=off).  */
  const char *noLP_help; /**< @brief Produce structures without lonely pairs (helices of length 1).
 help description.  */
  int noGU_flag;	/**< @brief Do not allow GU pairs
  
 (default=off).  */
  const char *noGU_help; /**< @brief Do not allow GU pairs
  
 help description.  */
  int noClosingGU_flag;	/**< @brief Do not allow GU pairs at the end of helices
  
 (default=off).  */
  const char *noClosingGU_help; /**< @brief Do not allow GU pairs at the end of helices
  
 help description.  */
  char * paramFile_arg;	/**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
.  */
  char * paramFile_orig;	/**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
 original value given at command line.  */
  const char *paramFile_help; /**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
 help description.  */
  char * nsp_arg;	/**< @brief Allow other pairs in addition to the usual AU,GC,and GU pairs.
.  */
  char * nsp_orig;	/**< @brief Allow other pairs in addition to the usual AU,GC,and GU pairs.
 original value given at command line.  */
  const char *nsp_help; /**< @brief Allow other pairs in addition to the usual AU,GC,and GU pairs.
 help description.  */
  int energyModel_arg;	/**< @brief Rarely used option to fold sequences from the artificial ABCD... alphabet, where A pairs B, C-D etc.  Use the energy parameters for GC (-e 1) or AU (-e 2) pairs.
  
.  */
  char * energyModel_orig;	/**< @brief Rarely used option to fold sequences from the artificial ABCD... alphabet, where A pairs B, C-D etc.  Use the energy parameters for GC (-e 1) or AU (-e 2) pairs.
  
 original value given at command line.  */
  const char *energyModel_help; /**< @brief Rarely used option to fold sequences from the artificial ABCD... alphabet, where A pairs B, C-D etc.  Use the energy parameters for GC (-e 1) or AU (-e 2) pairs.
  
 help description.  */
  int maxBPspan_arg;	/**< @brief Set the maximum base pair span
  
 (default='-1').  */
  char * maxBPspan_orig;	/**< @brief Set the maximum base pair span
  
 original value given at command line.  */
  const char *maxBPspan_help; /**< @brief Set the maximum base pair span
  
 help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int detailed_help_given ;	/**< @brief Whether detailed-help was given.  */
  unsigned int full_help_given ;	/**< @brief Whether full-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int numThreads_given ;	/**< @brief Whether numThreads was given.  */
  unsigned int shapeConversion_given ;	/**< @brief Whether shapeConversion was given.  */
  unsigned int tauSigmaRatio_given ;	/**< @brief Whether tauSigmaRatio was given.  */
  unsigned int objectiveFunction_given ;	/**< @brief Whether objectiveFunction was given.  */
  unsigned int sampleSize_given ;	/**< @brief Whether sampleSize was given.  */
  unsigned int intermediatePath_given ;	/**< @brief Whether intermediatePath was given.  */
  unsigned int initialVector_given ;	/**< @brief Whether initialVector was given.  */
  unsigned int minimizer_given ;	/**< @brief Whether minimizer was given.  */
  unsigned int initialStepSize_given ;	/**< @brief Whether initialStepSize was given.  */
  unsigned int minStepSize_given ;	/**< @brief Whether minStepSize was given.  */
  unsigned int minImprovement_given ;	/**< @brief Whether minImprovement was given.  */
  unsigned int minimizerTolerance_given ;	/**< @brief Whether minimizerTolerance was given.  */
  unsigned int pfScale_given ;	/**< @brief Whether pfScale was given.  */
  unsigned int temp_given ;	/**< @brief Whether temp was given.  */
  unsigned int noTetra_given ;	/**< @brief Whether noTetra was given.  */
  unsigned int dangles_given ;	/**< @brief Whether dangles was given.  */
  unsigned int noLP_given ;	/**< @brief Whether noLP was given.  */
  unsigned int noGU_given ;	/**< @brief Whether noGU was given.  */
  unsigned int noClosingGU_given ;	/**< @brief Whether noClosingGU was given.  */
  unsigned int paramFile_given ;	/**< @brief Whether paramFile was given.  */
  unsigned int nsp_given ;	/**< @brief Whether nsp was given.  */
  unsigned int energyModel_given ;	/**< @brief Whether energyModel was given.  */
  unsigned int maxBPspan_given ;	/**< @brief Whether maxBPspan was given.  */

  char **inputs ; /**< @brief unamed options (options without names) */
  unsigned inputs_num ; /**< @brief unamed options number */
} ;

/** @brief The additional parameters to pass to parser functions */
struct RNApvmin_cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure RNApvmin_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure RNApvmin_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *RNApvmin_args_info_purpose;
/** @brief the usage string of the program */
extern const char *RNApvmin_args_info_usage;
/** @brief the description string of the program */
extern const char *RNApvmin_args_info_description;
/** @brief all the lines making the help output */
extern const char *RNApvmin_args_info_help[];
/** @brief all the lines making the full help output (including hidden options) */
extern const char *RNApvmin_args_info_full_help[];
/** @brief all the lines making the detailed help output (including hidden options and details) */
extern const char *RNApvmin_args_info_detailed_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNApvmin_cmdline_parser (int argc, char **argv,
  struct RNApvmin_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use RNApvmin_cmdline_parser_ext() instead
 */
int RNApvmin_cmdline_parser2 (int argc, char **argv,
  struct RNApvmin_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNApvmin_cmdline_parser_ext (int argc, char **argv,
  struct RNApvmin_args_info *args_info,
  struct RNApvmin_cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNApvmin_cmdline_parser_dump(FILE *outfile,
  struct RNApvmin_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNApvmin_cmdline_parser_file_save(const char *filename,
  struct RNApvmin_args_info *args_info);

/**
 * Print the help
 */
void RNApvmin_cmdline_parser_print_help(void);
/**
 * Print the full help (including hidden options)
 */
void RNApvmin_cmdline_parser_print_full_help(void);
/**
 * Print the detailed help (including hidden options and details)
 */
void RNApvmin_cmdline_parser_print_detailed_help(void);
/**
 * Print the version
 */
void RNApvmin_cmdline_parser_print_version(void);

/**
 * Initializes all the fields a RNApvmin_cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void RNApvmin_cmdline_parser_params_init(struct RNApvmin_cmdline_parser_params *params);

/**
 * Allocates dynamically a RNApvmin_cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized RNApvmin_cmdline_parser_params structure
 */
struct RNApvmin_cmdline_parser_params *RNApvmin_cmdline_parser_params_create(void);

/**
 * Initializes the passed RNApvmin_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void RNApvmin_cmdline_parser_init (struct RNApvmin_args_info *args_info);
/**
 * Deallocates the string fields of the RNApvmin_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void RNApvmin_cmdline_parser_free (struct RNApvmin_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int RNApvmin_cmdline_parser_required (struct RNApvmin_args_info *args_info,
  const char *prog_name);

extern const char *RNApvmin_cmdline_parser_minimizer_values[];  /**< @brief Possible values for minimizer. */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* RNAPVMIN_CMDL_H */
