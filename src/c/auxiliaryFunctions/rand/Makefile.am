##
##  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
##  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
##
##  This file must be used under the terms of the CeCILL.
##  This source file is licensed as described in the file COPYING, which
##  you should have received as part of this distribution.  The terms
##  are also available at
##  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
##
##

libRand_la_CFLAGS =	-I ../../type \
			-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libRand.la

libRand_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	srands.c \
		drands.c \
		crands.c \
		zrands.c \
		sranda.c \
		dranda.c \
		cranda.c \
		zranda.c

HEAD	=	../includes/rand.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/src/c/auxiliaryFunctions/includes \
			-I $(top_builddir)/src/c/type

check_PROGRAMS	= 	testRand

TESTS		=	testRand

#
# -*- Rand Tests -*-
#
testRand_SOURCES = 	testRand.h testRand.c
testRand_CFLAGS	=	$(check_INCLUDES)
testRand_LDADD	=	$(top_builddir)/src/c/type/libDoubleComplex.la \
			$(top_builddir)/src/c/type/libFloatComplex.la \
			$(top_builddir)/src/c/auxiliaryFunctions/rand/libRand.la \
			@LIBMATH@
