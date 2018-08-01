#include <iostream>

#if defined(_MSC_VER)
// Microsoft 
#define EXPORT __declspec(dllexport)
#else
// other
#define EXPORT __attribute__((visibility("default")))
#endif

// note: The entry point. Mono calls this function. We should initialize profiler here.
extern "C" EXPORT void mono_profiler_init_empty(const char *)
{
    // std::cout << "Hello form the empty profiler\n\n";
}
