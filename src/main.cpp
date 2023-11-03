#include <Geode/Geode.hpp>
#include <Geode/modify/GameStatsManager.hpp>

using namespace geode::prelude;

class $modify(GameStatsManager) {
		bool isItemUnlocked(UnlockType type, int id) {
			bool isEnabled = Mod::get()->getSettingValue<bool>("enabled");
			if(!isEnabled) {
				GameStatsManager::isItemUnlocked(type, id);
			} else {
				return true;
			}

	} 
};
