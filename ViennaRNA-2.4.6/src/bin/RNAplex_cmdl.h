/** @file RNAplex_cmdl.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef RNAPLEX_CMDL_H
#define RNAPLEX_CMDL_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef RNAPLEX_CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define RNAPLEX_CMDLINE_PARSER_PACKAGE "RNAplex"
#endif

#ifndef RNAPLEX_CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define RNAPLEX_CMDLINE_PARSER_PACKAGE_NAME "RNAplex"
#endif

#ifndef RNAPLEX_CMDLINE_PARSER_VERSION
/** @brief the program version */
#define RNAPLEX_CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct RNAplex_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *detailed_help_help; /**< @brief Print help, including all details and hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  char * query_arg;	/**< @brief File containing the query sequence.
.  */
  char * query_orig;	/**< @brief File containing the query sequence.
 original value given at command line.  */
  const char *query_help; /**< @brief File containing the query sequence.
 help description.  */
  char * target_arg;	/**< @brief File containing the target sequence.
.  */
  char * target_orig;	/**< @brief File containing the target sequence.
 original value given at command line.  */
  const char *target_help; /**< @brief File containing the target sequence.
 help description.  */
  char * accessibility_dir_arg;	/**< @brief Location of the accessibility profiles.
.  */
  char * accessibility_dir_orig;	/**< @brief Location of the accessibility profiles.
 original value given at command line.  */
  const char *accessibility_dir_help; /**< @brief Location of the accessibility profiles.
 help description.  */
  int binary_flag;	/**< @brief Allow the reading and parsing of memory dumped opening energy file
 (default=off).  */
  const char *binary_help; /**< @brief Allow the reading and parsing of memory dumped opening energy file
 help description.  */
  char * paramFile_arg;	/**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
.  */
  char * paramFile_orig;	/**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
 original value given at command line.  */
  const char *paramFile_help; /**< @brief Read energy parameters from paramfile, instead of using the default parameter set.
 help description.  */
  double temp_arg;	/**< @brief Rescale energy parameters to a temperature T. Default is 37C.
  
.  */
  char * temp_orig;	/**< @brief Rescale energy parameters to a temperature T. Default is 37C.
  
 original value given at command line.  */
  const char *temp_help; /**< @brief Rescale energy parameters to a temperature T. Default is 37C.
  
 help description.  */
  int interaction_length_arg;	/**< @brief Maximal length of an interaction
 (default='40').  */
  char * interaction_length_orig;	/**< @brief Maximal length of an interaction
 original value given at command line.  */
  const char *interaction_length_help; /**< @brief Maximal length of an interaction
 help description.  */
  int extension_cost_arg;	/**< @brief Cost to add to each nucleotide in a duplex
 (default='0').  */
  char * extension_cost_orig;	/**< @brief Cost to add to each nucleotide in a duplex
 original value given at command line.  */
  const char *extension_cost_help; /**< @brief Cost to add to each nucleotide in a duplex
 help description.  */
  int probe_mode_flag;	/**< @brief Compute Tm for probes (default=off).  */
  const char *probe_mode_help; /**< @brief Compute Tm for probes help description.  */
  double probe_concentration_arg;	/**< @brief Set the probe concentration for the Tm computation
  
 (default='0.1').  */
  char * probe_concentration_orig;	/**< @brief Set the probe concentration for the Tm computation
  
 original value given at command line.  */
  const char *probe_concentration_help; /**< @brief Set the probe concentration for the Tm computation
  
 help description.  */
  double na_concentration_arg;	/**< @brief Set the Na+ concentration for the Tm computation
  
 (default='1.0').  */
  char * na_concentration_orig;	/**< @brief Set the Na+ concentration for the Tm computation
  
 original value given at command line.  */
  const char *na_concentration_help; /**< @brief Set the Na+ concentration for the Tm computation
  
 help description.  */
  double mg_concentration_arg;	/**< @brief Set the Mg2+ concentration for the Tm computation
  
 (default='1.0').  */
  char * mg_concentration_orig;	/**< @brief Set the Mg2+ concentration for the Tm computation
  
 original value given at command line.  */
  const char *mg_concentration_help; /**< @brief Set the Mg2+ concentration for the Tm computation
  
 help description.  */
  double k_concentration_arg;	/**< @brief Set the K+ concentration for the Tm computation
  
 (default='1.0').  */
  char * k_concentration_orig;	/**< @brief Set the K+ concentration for the Tm computation
  
 original value given at command line.  */
  const char *k_concentration_help; /**< @brief Set the K+ concentration for the Tm computation
  
 help description.  */
  double tris_concentration_arg;	/**< @brief Set the tris+ concentration for the Tm computation
  
 (default='1.0').  */
  char * tris_concentration_orig;	/**< @brief Set the tris+ concentration for the Tm computation
  
 original value given at command line.  */
  const char *tris_concentration_help; /**< @brief Set the tris+ concentration for the Tm computation
  
 help description.  */
  int fast_folding_arg;	/**< @brief Speedup of the target search
 (default='0').  */
  char * fast_folding_orig;	/**< @brief Speedup of the target search
 original value given at command line.  */
  const char *fast_folding_help; /**< @brief Speedup of the target search
 help description.  */
  double scale_accessibility_arg;	/**< @brief Rescale all opening energy by a factor V
 (default='1.0').  */
  char * scale_accessibility_orig;	/**< @brief Rescale all opening energy by a factor V
 original value given at command line.  */
  const char *scale_accessibility_help; /**< @brief Rescale all opening energy by a factor V
 help description.  */
  int constraint_flag;	/**< @brief Calculate structures subject to constraints.
 (default=off).  */
  const char *constraint_help; /**< @brief Calculate structures subject to constraints.
 help description.  */
  int alignment_mode_flag;	/**< @brief Tells RNAplex to compute interactions based on alignments
 (default=off).  */
  const char *alignment_mode_help; /**< @brief Tells RNAplex to compute interactions based on alignments
 help description.  */
  int convert_to_bin_flag;	/**< @brief If set, RNAplex will convert all opening energy file in a directory set by the -a option into binary opening energy files
 (default=off).  */
  const char *convert_to_bin_help; /**< @brief If set, RNAplex will convert all opening energy file in a directory set by the -a option into binary opening energy files
 help description.  */
  int duplex_distance_arg;	/**< @brief Distance between target 3' ends of two consecutive duplexes
 (default='0').  */
  char * duplex_distance_orig;	/**< @brief Distance between target 3' ends of two consecutive duplexes
 original value given at command line.  */
  const char *duplex_distance_help; /**< @brief Distance between target 3' ends of two consecutive duplexes
 help description.  */
  double energy_threshold_arg;	/**< @brief Minimal energy for a duplex to be returned
 (default='-100000').  */
  char * energy_threshold_orig;	/**< @brief Minimal energy for a duplex to be returned
 original value given at command line.  */
  const char *energy_threshold_help; /**< @brief Minimal energy for a duplex to be returned
 help description.  */
  char * produce_ps_arg;	/**< @brief Draw an alignment annotated interaction from RNAplex
.  */
  char * produce_ps_orig;	/**< @brief Draw an alignment annotated interaction from RNAplex
 original value given at command line.  */
  const char *produce_ps_help; /**< @brief Draw an alignment annotated interaction from RNAplex
 help description.  */
  int WindowLength_arg;	/**< @brief Tells how large the region around the target site should be for redrawing the alignment interaction
 (default='1').  */
  char * WindowLength_orig;	/**< @brief Tells how large the region around the target site should be for redrawing the alignment interaction
 original value given at command line.  */
  const char *WindowLength_help; /**< @brief Tells how large the region around the target site should be for redrawing the alignment interaction
 help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int detailed_help_given ;	/**< @brief Whether detailed-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int query_given ;	/**< @brief Whether query was given.  */
  unsigned int target_given ;	/**< @brief Whether target was given.  */
  unsigned int accessibility_dir_given ;	/**< @brief Whether accessibility-dir was given.  */
  unsigned int binary_given ;	/**< @brief Whether binary was given.  */
  unsigned int paramFile_given ;	/**< @brief Whether paramFile was given.  */
  unsigned int temp_given ;	/**< @brief Whether temp was given.  */
  unsigned int interaction_length_given ;	/**< @brief Whether interaction-length was given.  */
  unsigned int extension_cost_given ;	/**< @brief Whether extension-cost was given.  */
  unsigned int probe_mode_given ;	/**< @brief Whether probe-mode was given.  */
  unsigned int probe_concentration_given ;	/**< @brief Whether probe-concentration was given.  */
  unsigned int na_concentration_given ;	/**< @brief Whether na-concentration was given.  */
  unsigned int mg_concentration_given ;	/**< @brief Whether mg-concentration was given.  */
  unsigned int k_concentration_given ;	/**< @brief Whether k-concentration was given.  */
  unsigned int tris_concentration_given ;	/**< @brief Whether tris-concentration was given.  */
  unsigned int fast_folding_given ;	/**< @brief Whether fast-folding was given.  */
  unsigned int scale_accessibility_given ;	/**< @brief Whether scale-accessibility was given.  */
  unsigned int constraint_given ;	/**< @brief Whether constraint was given.  */
  unsigned int alignment_mode_given ;	/**< @brief Whether alignment-mode was given.  */
  unsigned int convert_to_bin_given ;	/**< @brief Whether convert-to-bin was given.  */
  unsigned int duplex_distance_given ;	/**< @brief Whether duplex-distance was given.  */
  unsigned int energy_threshold_given ;	/**< @brief Whether energy-threshold was given.  */
  unsigned int produce_ps_given ;	/**< @brief Whether produce-ps was given.  */
  unsigned int WindowLength_given ;	/**< @brief Whether WindowLength was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct RNAplex_cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure RNAplex_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure RNAplex_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *RNAplex_args_info_purpose;
/** @brief the usage string of the program */
extern const char *RNAplex_args_info_usage;
/** @brief the description string of the program */
extern const char *RNAplex_args_info_description;
/** @brief all the lines making the help output */
extern const char *RNAplex_args_info_help[];
/** @brief all the lines making the detailed help output (including hidden options and details) */
extern const char *RNAplex_args_info_detailed_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNAplex_cmdline_parser (int argc, char **argv,
  struct RNAplex_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use RNAplex_cmdline_parser_ext() instead
 */
int RNAplex_cmdline_parser2 (int argc, char **argv,
  struct RNAplex_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNAplex_cmdline_parser_ext (int argc, char **argv,
  struct RNAplex_args_info *args_info,
  struct RNAplex_cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNAplex_cmdline_parser_dump(FILE *outfile,
  struct RNAplex_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int RNAplex_cmdline_parser_file_save(const char *filename,
  struct RNAplex_args_info *args_info);

/**
 * Print the help
 */
void RNAplex_cmdline_parser_print_help(void);
/**
 * Print the detailed help (including hidden options and details)
 */
void RNAplex_cmdline_parser_print_detailed_help(void);
/**
 * Print the version
 */
void RNAplex_cmdline_parser_print_version(void);

/**
 * Initializes all the fields a RNAplex_cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void RNAplex_cmdline_parser_params_init(struct RNAplex_cmdline_parser_params *params);

/**
 * Allocates dynamically a RNAplex_cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized RNAplex_cmdline_parser_params structure
 */
struct RNAplex_cmdline_parser_params *RNAplex_cmdline_parser_params_create(void);

/**
 * Initializes the passed RNAplex_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void RNAplex_cmdline_parser_init (struct RNAplex_args_info *args_info);
/**
 * Deallocates the string fields of the RNAplex_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void RNAplex_cmdline_parser_free (struct RNAplex_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int RNAplex_cmdline_parser_required (struct RNAplex_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* RNAPLEX_CMDL_H */
