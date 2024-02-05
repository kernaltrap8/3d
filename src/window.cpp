#include <X11/Xlib.h>
#include <stdio.h>
#include <err.h>

static Display* dpy;
static int scr;
static Window root;

int screenHeight = 1920;
int screenWidth = 1080;

#define POS_X screenHeight / 2
#define POS_Y screenWidth / 2
#define WIN_WIDTH   500
#define WIN_HEIGHT  500
#define WIN_BORDER  15

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
    XMapWindow(dpy, win);

    while(XNextEvent(dpy, &ev) == 0) {

    }

    // unmap window
    XUnmapWindow(dpy, win);
    // free resources
    XDestroyWindow(dpy, win);
    // close display server connection
    XCloseDisplay(dpy);

    return 0;
}