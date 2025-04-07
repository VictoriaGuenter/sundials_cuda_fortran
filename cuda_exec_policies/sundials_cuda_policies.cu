
  #include <sundials/sundials_cuda_policies.hpp>
  #include <cuda_runtime.h>
 
 extern "C" {
   typedef sundials::cuda::ExecPolicy* ExecPolicyPtr;
 
   ExecPolicyPtr ThreadDirectExecPolicy_new(const size_t blockDim, cudaStream_t stream = 0) {
     return new sundials::cuda::ThreadDirectExecPolicy(blockDim, stream);
   }
 
   ExecPolicyPtr GridStrideExecPolicy_new(const size_t blockDim, const size_t gridDim, cudaStream_t stream = 0) {
     return new sundials::cuda::GridStrideExecPolicy(blockDim, gridDim, stream);
   }
 
   ExecPolicyPtr BlockReduceExecPolicy_new(const size_t blockDim, const size_t gridDim = 0, cudaStream_t stream = 0) {
     return new sundials::cuda::BlockReduceExecPolicy(blockDim, gridDim, stream);
   }
 
   ExecPolicyPtr BlockReduceAtomicExecPolicy_new(const size_t blockDim, const size_t gridDim = 0, cudaStream_t stream = 0) {
     return new sundials::cuda::BlockReduceAtomicExecPolicy(blockDim, gridDim, stream);
   }
 }
 
 
