#include "sunmemory/sunmemory_cuda.h"

void * _wrap_FSUNMemoryHelper_Cuda(void *farg1) {
    void * fresult ;
    SUNContext arg1 = (SUNContext) 0 ;
    void *result = 0 ;
    
    arg1 = (SUNContext)(farg1);
    result = (void *)SUNMemoryHelper_Cuda(arg1);
    fresult = result;
    return fresult;
  }
  