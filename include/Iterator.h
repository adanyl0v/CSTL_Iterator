#ifndef CSTL_ITERATOR_H
#define CSTL_ITERATOR_H

#include "BeginCode.h"

#include <CSTL_Exception/Exception.h>
#include <CSTL_SmartPointer/SmartPointer.h>

typedef struct CSTL_Iterator {
    void *container;
    void *element;
} CSTL_Iterator;

#ifdef __cplusplus
extern "C" {
#endif

#ifndef CSTL_GetIteratorData
# define CSTL_GetIteratorData(CT, IT) _CSTL_FDECL_Iterator_##CT##_getData(IT)
#endif /* CSTL_GetIteratorData */

#ifndef CSTL_SetIteratorData
# define CSTL_SetIteratorData(CT, IT, DATA) _CSTL_FDECL_Iterator_##CT##_setData(IT, DATA)
#endif /* CSTL_SetIteratorData */

#ifndef CSTL_IsIteratorEquals
# define CSTL_IsIteratorEquals(CT, IT1, IT2) \
    (CSTL_GetIteratorData(CT, IT1) == CSTL_GetIteratorData(CT, IT2) ? CSTL_TRUE : CSTL_FALSE)
#endif /* CSTL_IsIteratorEquals */

#ifndef CSTL_IterateForward
# define CSTL_IterateForward(CT, IT) _CSTL_FDECL_Iterator_##CT##_iterateForward(IT)
#endif /* CSTL_IterateForward */

#ifndef CSTL_IterateBack
# define CSTL_IterateBack(CT, IT) _CSTL_FDECL_Iterator_##CT##_iterateBack(IT)
#endif /* CSTL_IterateBack */

#ifdef __cplusplus
};
#endif

#endif /* CSTL_ITERATOR_H */
