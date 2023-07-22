#pragma once
#include <vector>
#include <list>
#include <map>
#include <set>
#include <functional>
#include <string>
#include <filesystem>
#include <bitset>

#include "framework.h"
#include "yhMath.h"


#pragma comment(lib, "Msimg32.lib")

namespace yh::enums
{
	enum class eLayerType
	{
		Background,
		Sword,
		Shield,
		Player,
		Monster,
		Effect,
		UI,
		End,

	};

	enum class eComponentType
	{
		Transform,
		SpriteRenderer,
		Animation,
		Animator,
		Collider,
		End,

	};
}