sundials_add_library(sundials_cuda_policies
    SOURCES
        sundials_cuda_policies.cu)
sundials_add_f2003_library(sundials_fcuda_policies_mod
  SOURCES
    fsundials_cuda_policies_mod.f90 fsundials_cuda_policies.c
  LINK_LIBRARIES
    PUBLIC sundials_fcore_mod
  OBJECT_LIBRARIES
    sundials_core sundials_cuda_policies
)
