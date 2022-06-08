#ifndef SYSTEM_GLOBAL_COMPONENTS_H__
#define SYSTEM_GLOBAL_COMPONENTS_H__

#include "Sim/Ecs/EcsMain.h"

#include "System/float3.h"

namespace SystemGlobals {

// struct SystemComponentTraits : public entt::component_traits<SystemGlobals::EnvResourceComponent> {
// 	static constexpr bool in_place_delete = false;
//     static constexpr std::size_t page_size = 1;
// };

    // entt::component_traits<EnvResourceComponent> systemComponentTraits;
    // systemComponentTraits.page_size = 1;

struct SystemActive {
	bool value = true;
};

struct BuildSystemComponent {
    static constexpr std::size_t page_size = 1;
};

struct EnvResourceComponent {
    static constexpr std::size_t page_size = 1;

	float curTidalStrength = 0.0f;
	float curWindStrength = 0.0f;
	float newWindStrength = 0.0f;

	float minWindStrength = 0.0f;
	float maxWindStrength = 0.0f;

	float3 curWindDir;
	float3 curWindVec; // curWindDir * curWindStrength
	float3 newWindVec;
	float3 oldWindVec;

	int windDirTimer = 0;
};

struct FlowEconomySystemComponent {
    static constexpr std::size_t page_size = 1;

    float economyMultiplier = 0.f;
};

struct UnitEconomyReportSystemComponent {
    static constexpr std::size_t page_size = 1;

    int activeBuffer = 0;
};

}

#endif