#include <stdlib.h>
#include <stdio.h>
#include "./include/g_functions.hpp"
#define VERSION "v0.1-dev"
int main(int argc, char* argv[]) {
    scanf("%s", &argv[1]);
    if (argv[1] == "--version" || argv[1] == "-v") {
        printf("3d Game Engine %s\nLicensed under GNU GPLv3", VERSION);
        return 0;
    }

    NxWindow::Spawn();
    return 0;
}