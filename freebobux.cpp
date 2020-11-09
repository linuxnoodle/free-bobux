#include <cstdlib>
#if defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__NT__)
    #include <windows.h>
#endif
// Btw, not a virus. Just a rickroll.
int main(){
    #if defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__NT__)
        system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    #elif defined(__linux__) || defined(__unix__) || defined(_POSIX_VERSION)
        system("xdg-open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    #elif __APPLE__
        system("open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    #else
        #error "How the hell do you exist?"
    #endif
    return 0;
}
