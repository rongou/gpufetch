#ifndef __INTEL_UARCH__
#define __INTEL_UARCH__

#include "../common/gpu.hpp"

struct uarch;

struct uarch* get_uarch_from_pci(struct pci* pci);
char* get_name_from_uarch(struct uarch* arch);

#endif
