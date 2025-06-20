#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {
    struct Fields {
        CCSprite* m_jumpscareSprite;
    };

    bool init(GJGameLevel* p0, bool p1, bool p2) {
        if (!PlayLayer::init(p0, p1, p2)) return false;

        auto winSize = CCDirector::get()->getWinSize();

        m_fields->m_jumpscareSprite = CCSprite::create("amongus.png"_spr);
        m_fields->m_jumpscareSprite->setPosition({ winSize.width / 2, winSize.height / 2 });
        m_fields->m_jumpscareSprite->setVisible(false);

        this->addChild(m_fields->m_jumpscareSprite);

        return true;
    }

    void destroyPlayer(PlayerObject* p0, GameObject* p1) {
        PlayLayer::destroyPlayer(p0, p1);

        if (m_playerDied) {
            if (m_fields->m_jumpscareSprite) {
                m_fields->m_jumpscareSprite->setVisible(true);
            }
        }
    }

    void resetLevel() {
        PlayLayer::resetLevel();

        if (m_fields->m_jumpscareSprite) {
            m_fields->m_jumpscareSprite->setVisible(false);
        }
    }
};