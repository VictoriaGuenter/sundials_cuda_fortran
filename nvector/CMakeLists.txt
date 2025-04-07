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
# CMakeLists.txt file for the F2003 serial NVECTOR object library
# ---------------------------------------------------------------

sundials_add_f2003_library(sundials_fnveccuda_mod
  SOURCES
    fnvector_cuda_mod.f90 fnvector_cuda_mod.c
  LINK_LIBRARIES
    PUBLIC sundials_fcore_mod sundials_fcuda_policies_mod
  OBJECT_LIBRARIES
  sundials_nveccuda
  OUTPUT_NAME
    sundials_fnveccuda_mod
)

message(STATUS "Added NVECTOR_CUDA F2003 interface")
