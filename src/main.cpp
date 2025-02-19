// enable mem leak detection
#if _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#endif

#include "Engine.h"
#include <iostream>

int main(int argc, char** argv) {
#ifdef _DEBUG
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

    Engine engine;
    engine.init();
    engine.run();
    engine.cleanup();

    return 0;
}