# ---------------------------------------------------------------
# Programmer(s): Cody J. Balos @ LLNL
# ---------------------------------------------------------------
# SUNDIALS Copyright Start
# Copyright (c) 2002-2024, Lawrence Livermore National Security
# and Southern Methodist University.
# All rights reserved.
#
# See the top-level LICENSE and NOTICE files for details.
#
# SPDX-License-Identifier: BSD-3-Clause
# SUNDIALS Copyright End
# ---------------------------------------------------------------
# CMakeLists.txt file for the F2003 dense SUNMatrix object library
# ---------------------------------------------------------------

sundials_add_f2003_library(sundials_fsunmatrixmagmadense_mod
  SOURCES
    fsunmatrix_magmadense_mod.f90 fsunmatrix_magmadense_mod.c
  LINK_LIBRARIES
    PUBLIC sundials_fcore_mod sundials_fmemory_helper_cuda_mod
  OBJECT_LIBRARIES
  OUTPUT_NAME
    sundials_fsunmatrixmagmadense_mod
  VERSION
    ${sunmatrixlib_VERSION}
  SOVERSION
    ${sunmatrixlib_SOVERSION}
)

message(STATUS "Added SUNMATRIX_MAGMADENSE F2003 interface")
