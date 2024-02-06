#include <X11/Xlib.h>
#include <stdio.h>
#include <err.h>
#include "./include/g_functions.hpp"
#include "./include/g_x11_variables.h"

using namespace Nx3d;

int drawWindow() {
    Window win;
    XEvent ev;
    if ((dpy = XOpenDisplay(NULL)) == NULL) {
        err(1, "Can't open display.");
    }
    // get default screen and root window
    scr = DefaultScreen(dpy);
    root = RootWindow(dpy, scr);
    // creating window
    win = XCreateSimpleWindow(dpy, root, POS_X, POS_Y, WIN_WIDTH, WIN_HEIGHT, WIN_BORDER, BlackPixel(dpy, scr), WhitePixel(dpy, scr));
    // map window to display server
    XStoreName(dpy, win, WIN_NAME);
    XMapWindow(dpy, win);

    while(XNextEvent(dpy, &ev) == 0) {
        Nx3d::RendererStart();
    }

    // unmap window
    XUnmapWindow(dpy, win);
    // free resources
    XDestroyWindow(dpy, win);
    // close display server connection
    XCloseDisplay(dpy);

    return 0;
}