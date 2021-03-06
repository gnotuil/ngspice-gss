/**********
Copyright 1992 Regents of the University of California.  All rights reserved.
Author: 1992 David A. Gates, U. C. Berkeley CAD Group
Modified: 2001 Paolo Nenzi
$Id: modlset.c,v 1.2 2005/05/21 12:37:23 sjborley Exp $
**********/

#include "ngspice.h"
#include "cktdefs.h"
#include "modldefs.h"
#include "sperror.h"
#include "suffix.h"

extern int MODLcheck( MODLcard * );
extern int MODLsetup( MODLcard * );

/*
 * Name:	MODLcheck
 * Purpose:	checks a list of MODLcards for input errors, sets defaults
 * Formals:	cardList: the list to check
 * Returns:	OK/E_PRIVATE
 * Users:	 numerical device setup routines
 * Calls:	error message handler
 */
int
  MODLcheck(MODLcard *cardList)
{
  MODLcard *card;
  int cardNum = 0;
  
  for ( card = cardList; card != NIL(MODLcard); card = card->MODLnextCard ) {
    cardNum++;

    if ( !card->MODLbandGapNarrowingGiven ) {
      card->MODLbandGapNarrowing = FALSE;
    }
    if ( !card->MODLtempDepMobilityGiven ) {
      card->MODLtempDepMobility = FALSE;
    }
    if ( !card->MODLconcDepMobilityGiven ) {
      card->MODLconcDepMobility = FALSE;
    }
    if ( !card->MODLfieldDepMobilityGiven ) {
      card->MODLfieldDepMobility = FALSE;
    }
    if ( !card->MODLtransDepMobilityGiven ) {
      card->MODLtransDepMobility = FALSE;
    }
    if ( !card->MODLsurfaceMobilityGiven ) {
      card->MODLsurfaceMobility = FALSE;
    }
    if ( !card->MODLmatchingMobilityGiven ) {
      card->MODLmatchingMobility = FALSE;
    }
    if ( !card->MODLsrhGiven ) {
      card->MODLsrh = FALSE;
    }
    if ( !card->MODLconcDepLifetimeGiven ) {
      card->MODLconcDepLifetime = FALSE;
    }
    if ( !card->MODLaugerGiven ) {
      card->MODLauger = FALSE;
    }
    if ( !card->MODLavalancheGenGiven ) {
      card->MODLavalancheGen = FALSE;
    }
  }
  return(OK);
}



/*
 * Name:	MODLsetup
 * Purpose:	setup the physical models used
 * Formals:	cardList: list of cards to setup
 * Returns:	OK/E_PRIVATE
 * Users:	 numerical devices
 * Calls:	MODLcheck
 */
int
  MODLsetup(MODLcard *cardList)
{
  int error;

  /* Check the card list */
  if ((error = MODLcheck( cardList ))) return( error );

  /* Nothing else to do. */
  return( OK );
}
