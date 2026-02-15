#include <Geode/Geode.hpp>
#include <Geode/modify/PauseLayer.hpp>

using namespace geode::prelude;

class $modify(MyTimerMod, PauseLayer) {
    void customSetup() {
        PauseLayer::customSetup();

        auto winSize = CCDirector::get()->getWinSize();
 

        float ajusteX = -150.f;   
        float ajusteY = -40.f;    

       
        if (auto timeLabel = static_cast<CCLabelBMFont*>(this->getChildByID("play-time"))) {

          
            timeLabel->setPosition({
                (winSize.width / 2) + ajusteX,
                (winSize.height - 40.f) + ajusteY
                });

            timeLabel->setAnchorPoint({ 0.5f, 0.5f });
            timeLabel->setScale(0.7f);
        }

       
    }
};