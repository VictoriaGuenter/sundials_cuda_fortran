/*
 * -----------------------------------------------------------------
 * Programmer: Ashley E. Van Beusekom @ USask
 * -----------------------------------------------------------------
 * This header file defines the ExecPolicy classes which
 * are utilized to determine CUDA kernel launch parameters.
 * ----------------------------------------------------------------*/
#define _SUNDIALS_CUDAEXECPOLICIES_HPP

#ifndef _SUNDIALS_CUDA_POLICIES_H
#define _SUNDIALS_CUDA_POLICIES_H
#define _SUNDIALS_CUDAEXECPOLICIES_HPP

#include <sundials/sundials_types.h>
#include <cuda_runtime.h>
typedef void* ExecPolicyPtr;

ExecPolicyPtr ThreadDirectExecPolicy_new(size_t blockDim, void* stream);
ExecPolicyPtr GridStrideExecPolicy_new(size_t blockDim, size_t gridDim, void* stream);
ExecPolicyPtr BlockReduceExecPolicy_new(size_t blockDim, size_t gridDim, void* stream);
ExecPolicyPtr BlockReduceAtomicExecPolicy_new(size_t blockDim, size_t gridDim, void* stream);

#endif
