#include <Geode/Geode.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>

using namespace geode::prelude;

class $modify(MyBaseGameLayer, GJBaseGameLayer) {
    void pushButton(PlayerButton btn, bool isPlayer2) {
        GJBaseGameLayer::pushButton(btn, isPlayer2);
        // Aquí irá tu lógica de animaciones una vez que confirmemos que compila
    }
};