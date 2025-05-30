#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
public:
    void onMoreGames(CCObject* sender) {
        FLAlertLayer::create("hello!", "hello, world!", "OK")->show();
    }
};