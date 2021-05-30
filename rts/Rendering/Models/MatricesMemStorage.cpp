#include "MatricesMemStorage.h"

MatricesMemStorage::MatricesMemStorage()
{
	spa = std::make_unique<StablePosAllocator<CMatrix44f>>(INIT_NUM_ELEMS);
}