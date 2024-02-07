#include <stdlib.h>
#include <stdio.h>
#include <string_view>
#include "./include/g_functions.hpp"
#define VERSION "v0.1-dev"
int main(int argc, char* argv[]) {
    // check if argc[] has multiple arguments
    if (argc >= 2) {
        printf("Too many arguments.\n");
        return 1;
    }
    if (argv[1] == std::string_view("--version") || argv[1] == std::string_view("-v")) {
        printf("3d Game Engine %s\nLicensed under GNU GPLv3\n", VERSION);
        return 0;
    }

    NxWindow::Spawn();
    return 0;
}