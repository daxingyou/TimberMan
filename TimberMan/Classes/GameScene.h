#ifndef _GAMESCENE_H_
#define _GAMESCENE_H_

#include "cocos2d.h"
#include "Timber.h"
#include "GameScore.h"
USING_NS_CC;
class GameScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
    
    // a selector callback
    void menuCloseCallback();
    
	bool onTouchBegans(Touch *touch, Event *event);

    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);

	Timber* timber;
	GameScore* score;
	Menu* menu;
	int _score;
	Sprite* bg1;
	Sprite* bg2;
	Sprite* logo;
	EventListenerTouchOneByOne* list;
	bool getIsOver();
	void onRest();
	void gameOver();
	void playGame();
};

#endif // __HELLOWORLD_SCENE_H__
