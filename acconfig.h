
/* Define the location of NGSPICEDATADIR */ 
#define NGSPICEDATADIR none

/* Define the location of NGSPICEBINDIR */ 
#define NGSPICEBINDIR none

/* Define the build date */ 
#define NGSPICEBUILDDATE none

/* Define if we want garbage collection enabled */ 
#undef HAVE_LIBGC

/* Define if we have termcap */ 
#undef HAVE_TERMCAP

/* Define if we want NOBYPASS */ 
#undef NOBYPASS

/* Define if we want to bypass cbd/cbs calculation for non varying vbs/vbd */
#undef CAPBYPASS
 
/* Define if we want to bypass cbd/cbs calculation if Czero is zero */
#undef CAPZEROBYPASS 
 
/* Experimental code never implemented to damp Newton iterations */
#undef NODELIMITING

/* Define if we want predictor algorithm */ 
#undef PREDICTOR

/* Define if you want to discover :) */
#undef NEWPRED

/* Define if we want spice2 sensitivity analysis */ 
#undef WANT_SENSE2

/* Define if we want some experimental code */ 
#undef EXPERIMENTAL_CODE

/* Define if we want to enable experimental devices */
#undef EXP_DEV

/* Define if we want noise integration code */
#undef INT_NOISE

/* Undefine HAVE_EKV since it is not included in the standard distribution */
#undef HAVE_EKV

/* Define if we have GNU readline */   
#undef HAVE_GNUREADLINE

/* Define if you want to debug frontend */
#undef FTEDEBUG

/* Define if you want to debug ngspice shell */
#undef CPDEBUG

/* Define if you want to debug pole-zero analysis */
#undef PZDEBUG

/* Do not trigger unwanted traps by default */
#undef NEWTRUNC
  
/* Define if we want debug sensititvity analysis */
#undef SENSDEBUG

/* Define if we want debug sensitivity analysis */
#undef ASDEBUG

/* Define if we want debug distortion analysis (BLOCKTIMES) */
#undef D_DBG_BLOCKTIMES

/* Define if we want debug distortion analysis (SMALLTIMES) */
#undef D_DBG_SMALLTIMES

/* Define if we want stepdebug */
#undef STEPDEBUG
  
/* Define to use always exp/log for bulk diode calculations in mosfet */
#undef NOSQRT

/*The xspice enhancements*/
#undef XSPICE

/* The CIDER enhancements */
#undef CIDER
 
/* Spice cluster support */
#undef CLUSTER

/* Spice .param support */
#undef NUMPARAMS

/* Generate MS WINDOWS executable */
#undef HAS_WINDOWS

/* get system memory and time */
#undef HAVE__MEMAVL
