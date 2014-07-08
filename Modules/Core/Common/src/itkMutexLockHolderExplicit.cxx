#include "itkMutexLockHolder.h"

template class itk::MutexLockHolder<itk::SimpleFastMutexLock>; //Instantiated 20 times
template class itk::MutexLockHolder<itk::FastMutexLock>; //Instantiated 42 times
