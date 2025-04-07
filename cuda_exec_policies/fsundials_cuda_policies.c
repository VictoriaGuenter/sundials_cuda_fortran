#include "sundials_cuda_policies.h"
#include <cuda_runtime.h>


void * _wrap_FThreadDirectExecPolicy_new(size_t const *farg1, intptr_t const *farg2) {
  void * fresult;
  size_t arg1;
  cudaStream_t arg2 = (cudaStream_t) 0 ;
  ExecPolicyPtr result;

  arg1 = (size_t)(*farg1);
  arg2 = (cudaStream_t)(*farg2);
  result = (ExecPolicyPtr)ThreadDirectExecPolicy_new(arg1,arg2);
  fresult = result;
  return fresult;
}


void * _wrap_FGridStrideExecPolicy_new(size_t const *farg1, size_t const *farg2, intptr_t const *farg3) {
  void * fresult ;
  size_t arg1 ;
  size_t arg2 ;
  cudaStream_t arg3 = (cudaStream_t) 0 ;
  ExecPolicyPtr result;
  
  arg1 = (size_t)(*farg1);
  arg2 = (size_t)(*farg2);
  arg3 = (cudaStream_t)(*farg3);
  result = (ExecPolicyPtr)GridStrideExecPolicy_new(arg1,arg2,arg3);
  fresult = result;
  return fresult;
}


void * _wrap_FBlockReduceExecPolicy_new(size_t const *farg1, size_t const *farg2, intptr_t const *farg3) {
  void * fresult ;
  size_t arg1 ;
  size_t arg2 = (size_t) (size_t)0 ;
  cudaStream_t arg3 = (cudaStream_t) 0 ;
  ExecPolicyPtr result;
  
  arg1 = (size_t)(*farg1);
  arg2 = (size_t)(*farg2);
  arg3 = (cudaStream_t )(*farg3);
  result = (ExecPolicyPtr)BlockReduceExecPolicy_new(arg1,arg2,arg3);
  fresult = result;
  return fresult;
}


void * _wrap_FBlockReduceAtomicExecPolicy_new(size_t const *farg1, size_t const *farg2, intptr_t const *farg3) {
  void * fresult ;
  size_t arg1 ;
  size_t arg2 = (size_t) (size_t)0 ;
  cudaStream_t arg3 = (cudaStream_t) 0 ;
  ExecPolicyPtr result;
  
  arg1 = (size_t)(*farg1);
  arg2 = (size_t)(*farg2);
  arg3 = (cudaStream_t )(*farg3);
  result = (ExecPolicyPtr)BlockReduceAtomicExecPolicy_new(arg1,arg2,arg3);
  fresult = result;
  return fresult;
}



