#pragma once

//#include "E330/core.h"

#include <irrlicht.h>

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class Graphics
{

public:

	Graphics();
	~Graphics();

	void run();

private:

	IrrlichtDevice* device;
	IVideoDriver* driver;
	ISceneManager* smgr;
	IGUIEnvironment* guienv;

};

