sundials_add_f2003_library(sundials_fmemory_helper_cuda_mod
  SOURCES
    fsundials_memory_helper_cuda.f90 fsundials_memory_helper_cuda.c
  LINK_LIBRARIES
    PUBLIC sundials_fcore_mod
  OBJECT_LIBRARIES
    sundials_core
)
