#include <dlfcn.h>
#include <stdint.h>
#include <stdio.h>


void executefs(const char* fs, const char* entry)
{
    typedef void (*essential_t)();
    void *lib = dlopen(fs, RTLD_LAZY); //RTLD_LAZY=0x00001
    essential_t func = (essential_t) dlsym(lib,entry);
    func();
}