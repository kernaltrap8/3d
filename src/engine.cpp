#include "./include/engine.hpp"
#include "./include/g_functions.hpp"

namespace NxEngine {
    char EngineInit() {
        // check if argc[] has multiple arguments
        if (argc >= 2) {
            if (argv[1] == std::string_view("--version") || argv[1] == std::string_view("-v")) {
                printf("3d Game Engine %s\nLicensed under GNU GPLv3\n", VERSION);
                return 0;
            } else {
                printf("Usage:\n-v or --version: Display current version of 3d being run.\n");
                return EXIT_FAILURE;
            }
        }
        NxWindow::Spawn();
    }
    char InitColor(char b_color) {
        case b_color = WHITE:
            BACKGROUND_COLOR = WHITE;
            return BACKGROUND_COLOR;
        case b_color = RED:
            BACKGROUND_COLOR = RED;
            return BACKGROUND_COLOR;
        case b_color = BLACK:
            BACKGROUND_COLOR = BLACK;
            return BACKGROUND_COLOR
        case b_color = YELLOW:
            BACKGROUND_COLOR = YELLOW;
            return BACKGROUND_COLOR;
    }
}