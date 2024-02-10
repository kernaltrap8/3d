#include <stdlib.h>
#include <stdio.h>
#include <string_view>
#include "./include/g_functions.hpp"
#include "./include/engine.hpp"
#define VERSION "v0.1-dev"
int main(int argc, char* argv[]) {
    NxEngine::EngineInit();
    NxEngine::InitColor(BLACK);
    return 0;
}