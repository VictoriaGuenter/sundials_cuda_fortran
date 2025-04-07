# CUDA Fortran interfaces for SUNDIALS

## Build notes
This will require both the CUDA NVector, and MAGMA support enables within SUNDIALS, as well as fortran interfaces being enabled.
 
In addition, the Fortran compiler for the entire build must be nvfortran

The additional flags I use are:
```    
-DCMAKE_CUDA_FLAGS="-rdc=true" -DCMAKE_CUDA_RESOLVE_DEVICE_SYMBOLS=ON -DCUDA_SEPERABLE_COMPILATION=ON -DCMAKE_CUDA_COMPILER_FORCED=TRUE  -DCMAKE_Fortran_COMPILER=nvfortran -DCMAKE_Fortran_FLAGS="-cuda -gpu=cuda11.8,rdc"
```

However relocatable device code may not be required for all users

## Usage notes

CUDA NVector execution policies may be created with `FThreadDirectExecPolicy_new`, `FGridStrideExecPolicy_new`, `FBlockReduceExecPolicy_new`, or `FBlockReduceAtomicExecPolicy_new` for the relevant choice of execution policies. The result of each of these functions is `type(C_PTR)`

The BlockData function is not supported for the SUNMatrix_MagmaDense.

The return for `FSUNMatrix_MagmaDense_Data` is a three dimensional pointer of shape (M_block, N_block, num_blocks)