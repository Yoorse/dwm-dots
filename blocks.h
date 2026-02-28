###Build for dwmblocks
static const Block blocks[] = {
    { "CPU ",  "/home/$username/.local/bin/dwmblocks-cpu",       2,  0 },
    { "HDD ",  "/home/$username/.local/bin/dwmblocks-disk-used", 30, 0 },
    { "NET ",  "/home/$username/.local/bin/dwmblocks-net-kbs",   2,  0 },
    { "",      "/home/$username/.local/bin/dwmblocks-clock",     10, 0 },
};

static char delim[] = " | ";
static unsigned int delimLen = 5;
