#include <StdInc.h>
#include <Hooking.h>
#include "CrossBuildRuntime.h"

//
// This patch forces networked peds attachment to draftveh to work
//

static HookFunction hookFunction([]()
{
	if (xbr::IsGameBuildOrGreater<1491>())
	{
		hook::nop(hook::get_pattern("48 83 BE E0 ? ? ? ? ? ? 48 85 C9"), 0xA);
	}
});
