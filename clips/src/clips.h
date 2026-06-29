/*******************************************************/
/*      "C" Language Integrated Production System      */
/*                                                     */
/*             CLIPS Version 6.30  08/16/14            */
/*                                                     */
/*                   API HEADER FILE                   */
/*******************************************************/

/*************************************************************/
/* Purpose:                                                  */
/*                                                           */
/* Principal Programmer(s):                                  */
/*      Gary D. Riley                                        */
/*                                                           */
/* Contributing Programmer(s):                               */
/*                                                           */
/* Revision History:                                         */
/*                                                           */
/*      6.24: Added filertr.h and tmpltfun.h to include      */
/*            list.                                          */
/*                                                           */
/*      6.30: Added classpsr.h, iofun.h, and strngrtr.h to   */
/*            include list.                                  */
/*                                                           */
/*************************************************************/

#ifndef _H_API
#define _H_API

#ifndef _STDIO_INCLUDED_
#define _STDIO_INCLUDED_
#include <stdio.h>
#endif

#include "setup.h"
#ifndef _H_argacces
#include "argacces.h"
#endif
#include "commline.h"
#include "constant.h"
#include "cstrcpsr.h"
#include "envrnmnt.h"
#include "filecom.h"
#include "memalloc.h"
#include "strngfun.h"
#ifndef _H_symbol
#include "symbol.h"
#endif

#include "bmathfun.h"
#include "filertr.h"
#include "iofun.h"
#include "router.h"
#include "strngrtr.h"
#include "sysdep.h"
#ifndef _H_expressn
#include "expressn.h"
#endif
#include "exprnpsr.h"
#ifndef _H_evaluatn
#include "evaluatn.h"
#endif
#ifndef _H_constrct
#include "constrct.h"
#endif
#include "modulbsc.h"
#include "utility.h"
#include "watch.h"

#if BLOAD_ONLY || BLOAD || BLOAD_AND_BSAVE
#include "bload.h"
#endif

#if BLOAD_AND_BSAVE
#include "bsave.h"
#endif

#if DEFRULE_CONSTRUCT
#ifndef _H_ruledef
#include "ruledef.h"
#endif
#include "crstrtgy.h"
#include "drive.h"
#include "engine.h"
#include "incrrset.h"
#include "rulebsc.h"
#include "rulecom.h"
#endif

#if DEFFACTS_CONSTRUCT
#include "dffctbsc.h"
#include "dffctdef.h"
#endif

#if DEFTEMPLATE_CONSTRUCT
#include "factcom.h"
#include "factfun.h"
#include "tmpltbsc.h"
#include "tmpltdef.h"
#include "tmpltfun.h"
#ifndef _H_factmngr
#include "factmngr.h"
#endif
#include "facthsh.h"
#endif

#if DEFGLOBAL_CONSTRUCT
#include "globlbsc.h"
#include "globlcom.h"
#include "globldef.h"
#endif

#if DEFFUNCTION_CONSTRUCT
#include "dffnxfun.h"
#endif

#if DEFGENERIC_CONSTRUCT
#include "genrccom.h"
#include "genrcfun.h"
#endif

#if OBJECT_SYSTEM
#include "classcom.h"
#include "classexm.h"
#include "classinf.h"
#include "classini.h"
#include "classpsr.h"
#include "defins.h"
#include "inscom.h"
#include "insfile.h"
#include "insfun.h"
#include "msgcom.h"
#include "msgpass.h"
#include "objrtmch.h"
#endif

#endif
