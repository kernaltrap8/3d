#include "./include/engine.hpp"
#include "./include/g_functions.hpp"

namespace NxEngine {
    int EngineInit() {
        NxWindow::Spawn();
        return 0;
    }
}