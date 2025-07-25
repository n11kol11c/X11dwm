// lib
#ifdef _GRUMP_H_ //
#pragma region lib 
#pragma endregion
#include <stdlib.h>                     // General utilities (malloc, free, exit)
#include <stddef.h>                     // Common definitions (size_t, NULL, ptrdiff_t)
#include <stdbool.h>                    // Boolean type
#include <assert.h>                     // Diagnostics (assert)
#include <stdarg.h>                     // Variable arguments (va_list, va_start, va_end)
#include <limits.h>                     // Integer limits (INT_MAX, LONG_MAX)
#include <float.h>                      // Floating-point limits (FLT_MAX)
#include <stdint.h>                     // Fixed width integer types (int32_t, uint64_t)
#include <inttypes.h>                   // Integer formatting macros for stdint.h types
#include <stdio.h>                      // Input/Output (printf, scanf, fopen, etc.)
#include <string.h>                     // String manipulation (strlen, strcpy, strcat)
#include <ctype.h>                      // Character classification (isalnum, isdigit)
#include <math.h>                       // Mathematical functions (sqrt, pow, sin, cos)
#include <complex.h>                    // Complex number operations (I, creal, cimag)
#include <time.h>                       // Time and date functions (time, localtime)
#include <locale.h>                     // Locale management (setlocale, localeconv)
#include <errno.h>                      // Error codes (errno, perror)
#include <stdatomic.h>                  // Atomic operations (atomic_flag, atomic_load)
#include <threads.h>                    // Threading (threads, thread_join)
#include <stdalign.h>                   // Alignment macros (alignof, alignas)
#include <stdnoreturn.h>                // No-return attribute (noreturn)
#include <uchar.h>                      // Unicode character types and functions (char16_t, char32_t)               
#include <sys/types.h>                  // Basic data types (pid_t, uid_t)
#include <unistd.h>                     // System calls (fork, exec, read, write)
#include <sys/wait.h>                   // Wait functions (wait, waitpid)
#include <pthread.h>                    // POSIX threads
#include <sched.h>                      // Scheduling functions (sched_yield, sched_getaffinity)
#include <fcntl.h>                      // File control operations (open, fcntl)
#include <sys/stat.h>                   // File status (stat, chmod)
#include <dirent.h>                     // Directory operations (opendir, readdir)
#include <sys/statvfs.h>                // Filesystem statistics (statvfs)
#include <sys/time.h>                   // Time functions (gettimeofday, select)
#include <sys/mman.h>                   // Memory mapping (mmap, munmap)
#include <signal.h>                     // Signal handling (signal, kill)
#include <setjmp.h>                     // Jump buffers (setjmp, longjmp)
#include <sys/socket.h>                 // Sockets (socket, bind, listen)
#include <netinet/in.h>                 // Internet addresses (struct sockaddr_in)
#include <arpa/inet.h>                  // Network address manipulation (inet_ntoa, inet_pton)
#include <netdb.h>                      // Network database operations (getaddrinfo)
#include <sys/un.h>                     // UNIX domain sockets
#include <poll.h>                       // Polling system call (poll)
#include <sys/select.h>                 // Select system call (select)
#include <sys/epoll.h>                  // Linux-specific event polling
#include <termios.h>                    // Terminal I/O control (tcgetattr, tcsetattr)
#include <pty.h>                        // Pseudo-terminal devices (openpty)
#include <utmp.h>                       // User accounting (getutent)
#include <pwd.h>                        // User account information (getpwuid, getpwnam)
#include <grp.h>                        // Group information (getgrgid, getgrnam)
#include <shadow.h>                     // Shadow passwords (getspnam)
#include <sys/resource.h>               // Resource limits (getrlimit, setrlimit)
#include <sys/utsname.h>                // System information (uname)
#include <linux/limits.h>               // Linux-specific file size limits
#include <linux/ioctl.h>                // Linux I/O control commands
#include <linux/fs.h>                   // Linux filesystem operations
#include <sys/syscall.h>                // Direct system calls (syscall)
#include <execinfo.h>                   // Stack trace functions (backtrace, backtrace_symbols)
#include <error.h>                      // Error reporting (perror, strerror)
#include <sys/prctl.h>                  // Process control (prctl)
#include <sys/klog.h>                   // Kernel logging
#include <sys/sysinfo.h>                // System information (uptime, meminfo)
#include <linux/dirent.h>               // Linux directory entries (dirent)
#include <linux/if.h>                   // Network interface (ifreq)
#include <linux/if_ether.h>             // Ethernet protocol definitions
#include <linux/in.h>                   // Internet protocols and structures
#include <linux/if_packet.h>            // Raw packet sockets
#include <sys/sem.h>                    // Semaphore operations (semctl, semop)
#include <sys/shm.h>                    // Shared memory operations (shmget, shmat)
#include <sys/msg.h>                    // Message queue operations (msgget, msgsnd)
#include <sys/vfs.h>                    // Filesystem operations (statvfs)
#include <sys/ioctl.h>                  // I/O control commands
#include <sys/mman.h>                   // Memory management (mmap, munmap)
#include <sys/socket.h>                 // Socket functions (socket, connect, send)
#include <netinet/tcp.h>                // TCP header structure
#include <arpa/inet.h>                  // Address conversion (inet_ntoa, inet_pton)
#include <sys/fcntl.h>                  // File control (fcntl, open)
#include <sys/file.h>                   // File locking (flock)
#include <sys/timeb.h>                  // Time functions (ftime)
#include <sys/resource.h>               // Resource management (getrlimit, setrlimit)
#include <sys/param.h>                  // System parameters (MAXPATHLEN, ARG_MAX)
#include <sys/ioctl.h>                  // I/O control (ioctl)
#include <sys/times.h>                  // CPU time information (times)
#include <X11/Xlib.h>                   // Basic X11 functions for creating windows, events, etc.
#include <X11/Xft/Xft.h>                // Font handling (anti-aliased text rendering)
#include <X11/cursorfont.h>             // Predefined cursor shape constants (e.g., XC_left_ptr).
#include <X11/keysym.h>                 // Key symbol definitions (e.g., XK_A, XK_Escape).
#include <X11/Xatom.h>                  // Predefined X11 atoms (e.g., WM_NAME, _NET_WM_PID).
#include <X11/Xproto.h>                 // Low-level X11 protocol definitions and data types.
#include <X11/Xresource.h>              // X resource database handling (e.g., .Xresources settings).
#include <X11/Xutil.h>                  // Utility functions and macros for working with Xlib (e.g., XSizeHints).
#include <X11/extensions/Xinerama.h>    // Xinerama extension for multi-monitor support.
#include <X11/XF86keysym.h>             // Keysyms for multimedia/Fn keys (e.g., XF86XK_AudioMute).
#include <X11/Xlib-xcb.h>               // Interface between Xlib and XCB for hybrid usage.
#include <alsa/asoundlib.h>             // ALSA library for sound and audio management on Linux
#include <ffmpeg/avcodec.h>             // FFmpeg library for video/audio decoding, encoding, and streaming
#include <pulse/pulseaudio.h>           // PulseAudio library for sound server management
#include <SDL2/SDL.h>                   // Simple DirectMedia Layer for graphics, audio, and input handling
#include <gtk/gtk.h>                    // GTK (GIMP Toolkit) for building graphical user interfaces
#include <cairo/cairo.h>                // Cairo 2D graphics library for vector graphics
#include <OpenGL/gl.h>                  // OpenGL API for 2D/3D graphics rendering
#include <vulkan/vulkan.h>              // Vulkan API for high-performance graphics and compute   
#include <sys/socket.h>                 // Basic socket functions (socket, bind, listen, accept)
#include <netinet/in.h>                 // Internet address structures and utilities
#include <arpa/inet.h>                  // Address conversion functions (inet_pton, inet_ntoa)        
#include <mysql/mysql.h>                // MySQL client library for connecting to MySQL databases
#include <sqlite3.h>                    // SQLite library for embedded SQL database management
#include <regex.h>                      // POSIX regular expressions for pattern matching
#include <pcre.h>                       // Perl-compatible regular expressions
#include <openssl/ssl.h>                // OpenSSL library for implementing SSL/TLS protocols
#include <openssl/sha.h>                // OpenSSL library for SHA (Secure Hash Algorithm) hashing
#include <mntent.h>                     // Mount table entry processing
#include <sys/ioctl.h>                  // I/O control operations (used with file descriptors)
#include <sys/vfs.h>                    // Filesystem statistics
#include <sys/prctl.h>                  // Process control for setting process attributes
#include <sys/mount.h>                  // File system mounting operations
#include <ncurses.h>                    // Terminal UI library for text-based interfaces.
#include <bluetooth/bluetooth.h>        // Bluetooth address/types and utility functions.
#include <bluetooth/rfcomm.h>           // Bluetooth RFCOMM (serial port) socket communication.

// gcc l.c -o l -lX11 -lXft -lSDL2 
// -lgtk-3 
// -lcairo 
// -lssl 
// -lcrypto 
// -lmysqlclient 
// -lsqlite3 
// -lpulse 
// -lavcodec 
// -lavutil 
// -lGL 
// -lpcre 
// -lalsa 
// -lpthread 
// -lcrypto
// gcc -o l l.c -lX11 -lXext
// sudo apt-get install libncurses5-dev
int __cdecl iswalpha(wint_t _C);
_CRTIMP int __cdecl _iswalpha_l(wint_t _C,_locale_t _Locale);
int __cdecl iswupper(wint_t _C);
_CRTIMP int __cdecl _iswupper_l(wint_t _C,_locale_t _Locale);
int __cdecl iswlower(wint_t _C);
_CRTIMP int __cdecl _iswlower_l(wint_t _C,_locale_t _Locale);
int __cdecl iswdigit(wint_t _C);
_CRTIMP int __cdecl _iswdigit_l(wint_t _C,_locale_t _Locale);
int __cdecl iswxdigit(wint_t _C);
_CRTIMP int __cdecl _iswxdigit_l(wint_t _C,_locale_t _Locale);
int __cdecl iswspace(wint_t _C);
_CRTIMP int __cdecl _iswspace_l(wint_t _C,_locale_t _Locale);
int __cdecl iswpunct(wint_t _C);
_CRTIMP int __cdecl _iswpunct_l(wint_t _C,_locale_t _Locale);
int __cdecl iswalnum(wint_t _C);
_CRTIMP int __cdecl _iswalnum_l(wint_t _C,_locale_t _Locale);
int __cdecl iswprint(wint_t _C);
_CRTIMP int __cdecl _iswprint_l(wint_t _C,_locale_t _Locale);
int __cdecl iswgraph(wint_t _C);
_CRTIMP int __cdecl _iswgraph_l(wint_t _C,_locale_t _Locale);
int __cdecl iswcntrl(wint_t _C);
_CRTIMP int __cdecl _iswcntrl_l(wint_t _C,_locale_t _Locale);
int __cdecl iswascii(wint_t _C);
int __cdecl isleadbyte(int _C);
_CRTIMP int __cdecl _isleadbyte_l(int _C,_locale_t _Locale);
wint_t __cdecl towupper(wint_t _C);
_CRTIMP wint_t __cdecl _towupper_l(wint_t _C,_locale_t _Locale);
wint_t __cdecl towlower(wint_t _C);
_CRTIMP wint_t __cdecl _towlower_l(wint_t _C,_locale_t _Locale);
int __cdecl iswctype(wint_t _C,wctype_t _Type);
_CRTIMP int __cdecl _iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale);
_CRTIMP int __cdecl __iswcsymf(wint_t _C);
_CRTIMP int __cdecl _iswcsymf_l(wint_t _C,_locale_t _Locale);
_CRTIMP int __cdecl __iswcsym(wint_t _C);
_CRTIMP int __cdecl _iswcsym_l(wint_t _C,_locale_t _Locale);
int __cdecl is_wctype(wint_t _C,wctype_t _Type);
#define __chvalidchk(a,b) \
        (__PCTYPE_FUNC[(a)] & (b))
#define _chvalidchk_l(_Char,_Flag,_Locale) \
        (!_Locale ? __chvalidchk(_Char,_Flag) : ((_locale_t)_Locale)->locinfo->pctype[_Char] & (_Flag))
#define _ischartype_l(_Char,_Flag,_Locale) \
        (((_Locale)!=NULL && (((_locale_t)(_Locale))->locinfo->mb_cur_max) > 1) ? _isctype_l(_Char,(_Flag),_Locale) : _chvalidchk_l(_Char,_Flag,_Locale))
#define _isalpha_l(_Char,_Locale) \
        _ischartype_l(_Char,_ALPHA,_Locale)
#define _isupper_l(_Char,_Locale) \
        _ischartype_l(_Char,_UPPER,_Locale)
#define _islower_l(_Char,_Locale) \
        _ischartype_l(_Char,_LOWER,_Locale)
#define _isdigit_l(_Char,_Locale) \
        _ischartype_l(_Char,_DIGIT,_Locale)
#define _isxdigit_l(_Char,_Locale) \
        _ischartype_l(_Char,_HEX,_Locale)
#define _isspace_l(_Char,_Locale) \
        _ischartype_l(_Char,_SPACE,_Locale)
#define _ispunct_l(_Char,_Locale) \
        _ischartype_l(_Char,_PUNCT,_Locale)
#define _isalnum_l(_Char,_Locale) \
        _ischartype_l(_Char,_ALPHA|_DIGIT,_Locale)
#define _isprint_l(_Char,_Locale) \
        _ischartype_l(_Char,_BLANK|_PUNCT|_ALPHA|_DIGIT,_Locale)
#define _isgraph_l(_Char,_Locale) \
        _ischartype_l(_Char,_PUNCT|_ALPHA|_DIGIT,_Locale)
#define _iscntrl_l(_Char,_Locale) \
        _ischartype_l(_Char,_CONTROL,_Locale)
#define _tolower(_Char) \
        ((_Char)-'A'+'a')
#define _toupper(_Char) \
        ((_Char)-'a'+'A')
#define __isascii(_Char) \
        ((unsigned)(_Char) < 0x80)
#define __toascii(_Char) \
        ((_Char) & 0x7f)
#define iswalpha(_c) \
        (iswctype(_c,_ALPHA))
#define iswupper(_c) \
        (iswctype(_c,_UPPER))
#define iswlower(_c) \
        (iswctype(_c,_LOWER))
#define iswdigit(_c) \
        (iswctype(_c,_DIGIT))
#define iswxdigit(_c) \
        (iswctype(_c,_HEX))
#define iswspace(_c) \
        (iswctype(_c,_SPACE))
#define iswpunct(_c) \
        (iswctype(_c,_PUNCT))
#define iswalnum(_c) \
        (iswctype(_c,_ALPHA|_DIGIT))
#define iswprint(_c) \
        (iswctype(_c,_BLANK|_PUNCT|_ALPHA|_DIGIT))
#define iswgraph(_c) \
        (iswctype(_c,_PUNCT|_ALPHA|_DIGIT))
#define iswcntrl(_c) \
        (iswctype(_c,_CONTROL))
#define iswascii(_c) \
        ((unsigned)(_c) < 0x80)
#define _iswalpha_l(_c,_p) \
        (_iswctype_l(_c,_ALPHA,_p))
#define _iswupper_l(_c,_p) \
        (_iswctype_l(_c,_UPPER,_p))
#define _iswlower_l(_c,_p) \
        (_iswctype_l(_c,_LOWER,_p))
#define _iswdigit_l(_c,_p) \
        (_iswctype_l(_c,_DIGIT,_p))
#define _iswxdigit_l(_c,_p) \
        (_iswctype_l(_c,_HEX,_p))
#define _iswspace_l(_c,_p) \
        (_iswctype_l(_c,_SPACE,_p))
#define _iswpunct_l(_c,_p) \
        (_iswctype_l(_c,_PUNCT,_p))
#define _iswalnum_l(_c,_p) \
        (_iswctype_l(_c,_ALPHA|_DIGIT,_p))
#define _iswprint_l(_c,_p) \
        (_iswctype_l(_c,_BLANK|_PUNCT|_ALPHA|_DIGIT,_p))
#define _iswgraph_l(_c,_p) \
        (_iswctype_l(_c,_PUNCT|_ALPHA|_DIGIT,_p))
#define _iswcntrl_l(_c,_p) \
        (_iswctype_l(_c,_CONTROL,_p))
#define __iscsymf(_c) (isalpha(_c) || ((_c)=='_'))
#define __iscsym(_c) (isalnum(_c) || ((_c)=='_'))
#define __iswcsymf(_c) (iswalpha(_c) || ((_c)=='_'))
#define __iswcsym(_c) (iswalnum(_c) || ((_c)=='_'))
#define _iscsymf_l(_c,_p) (_isalpha_l(_c,_p) || ((_c)=='_'))
#define _iscsym_l(_c,_p) (_isalnum_l(_c,_p) || ((_c)=='_'))
#define _iswcsymf_l(_c,_p) (_iswalpha_l(_c,_p) || ((_c)=='_'))
#define _iswcsym_l(_c,_p) (_iswalnum_l(_c,_p) || ((_c)=='_'))
#define TYPEOF(x) \
        _Generic((x), \
            int: "int", \
            float: "float", \
            double: "double", \
            char: "char", \
            bool: "bool", \
            default: "unknown" \
        )
#define DEBUG(var) \
        fprintf(stderr,"[DEBUG] %s = %s\n", #var, _Generic((var), \
        int: "%d", float: "%f", double: "%lf", \
        char*: "%s", default: "%p"), (var))
#define TPUT_ATWORD(x) \
        do { \
            WORD __mov_x = (x); \
            HANDLE __h = GetStdHandle(STD_OUTPUT_HANDLE); \
            SetConsoleTextAttribute(__h, __mov_x); \
        } while(0)
// FOREGROUND_GREEN | FOREGROUND_INTENSITY

#define A_LEN(arr) \
        (sizeof(arr)/sizeof((arr)[0]))
#define REPEAT(N, CODE) \
        do {int __i=0;for(;__i<N;++__i){CODE;}} \
        while(0)
#define RANDR(min,max) ((rand()%((max)-(min)+1))+(min))
#define CLAMP(val,lo,hi) (((val)<(lo))?(lo):((val)>(hi))?(hi):(val))
#define __min(a,b) \
        (((a)<(b))?(a):(b))
#define __max(a,b) \
        (((a)>(b))?(a):(b))
#define TIMEIT(label,CODE) \
        do{clock_t __start=clock();{CODE;} \
        fprintf(stderr,"[TIMER] %s: %.4f sec\n",label,((double)(clock()-__start))/CLOCKS_PER_SEC);} \
        while(0)
#define PANIC(...) \
        do{fprintf(stderr,"[PANIC] " __VA_ARGS__); \
            exit(1);} \
            while(0)
#define COLOR(txt,colorcode) \
        "\x1b[" #colorcode "m" txt "\x1b[0m"
#define logv(v) \
        fprintf(stderr,"#" #v ": " TYPENAME(v) " = " \
        _Generic((v), \
        int:"%d\n",float:"%f\n",double:"%lf\n",char*:"%s\n",default:"%p\n"),(v))
#define CLP(v,mn,mx) \
        ((v)<(mn)?(mn):((v)>(mx)?(mx):(v)))
#define LEN(x) \
        (sizeof(x)/sizeof(*(x)))
#define rnd(l,h) \
        ((rand()%(h-l+1))+(l))
#define repeat(N,C) \
        do{int __=0;while(__++<N){C;}}while(0)
#define P(X,...) \
        do{fprintf(stderr,"(" #X "):: ");fprintf(stderr,__VA_ARGS__);}while(0)
#define ENDLINE \
        puts("----------") 
#define T(label,code) \
        do{clock_t s=clock();{code} \
            fprintf(stderr,"[%s] %.3f sec\n",label,1.0*(clock()-s)/CLOCKS_PER_SEC);} \
            while(0)
#define DUMP(s) \
        do{for(char*_s=s;*_s;_s++)printf("%02X ",*_s);} \
        while(0)
#define ERR(...) \
        do{fprintf(stderr,"!!ERR: ");fprintf(stderr,__VA_ARGS__);exit(1);} \
        while(0)
#define WARN(...) \
        fprintf(stderr,"WARN~ ");fprintf(stderr,__VA_ARGS__)
#define S(...) \
        do{printf(__VA_ARGS__);fflush(stdout);}while(0)
#define INPT(P,BUF) do{printf(P);fgets(BUF,sizeof(BUF),stdin);} \
    while(0)
#define ASSERT_TYPE(var, TYPE) \
    static_assert(_Generic((var), TYPE: 1, default: 0), "Type assertion failed: " #var " is not " #TYPE)
#define STATIC_ASSERT(cond, msg) \
    typedef char static_assertion_##msg[(cond)?1:-1]
#define LOG_INFO(msg, ...) \
    fprintf(stderr, "[INFO] " msg "\n", ##__VA_ARGS__)
#define LOG_WARN(msg, ...) \
    fprintf(stderr, "[WARN] " msg "\n", ##__VA_ARGS__)
#define LOG_ERR(msg, ...) \
    do { fprintf(stderr, "[ERR] " msg "\n", ##__VA_ARGS__); exit(EXIT_FAILURE); } while(0)
#define LOG_OK(msg, ...) \
    fprintf(stderr, "[OK✓] " msg "\n", ##__VA_ARGS__)
#define IS_NULL(ptr) ((void*)(ptr) == NULL)
#define PTR_STR(p) ((p) ? "valid" : "NULL")
#define BIT(n) (1U << (n))
#define SET_FLAG(x, f) ((x) |= (f))
#define CLEAR_FLAG(x, f) ((x) &= ~(f))
#define TOGGLE_FLAG(x, f) ((x) ^= (f))
#define CHECK_FLAG(x, f) (((x) & (f)) == (f))
#define ALIGN_UP(x, a) (((x) + ((a)-1)) & ~((a)-1))
#define ALIGN_DOWN(x, a) ((x) & ~((a)-1))
#define SWAP(a, b) \
    do { __typeof__(a) __tmp = (a); (a) = (b); (b) = __tmp; } while(0)
#define CAST(type, val) ((type)(val))
#define FOREACH(item, array) \
    for(size_t keep = 1, count = 0, size = LEN(array); keep && count != size; keep = !keep, count++) \
        for(item = (array)[count]; keep; keep = !keep)
#define IN_RANGE(x, min, max) ((x) >= (min) && (x) <= (max))
#define TRACE_ID __FILE__, __LINE__, __func__
#define TRACE() \
    fprintf(stderr, "[TRACE] %s:%d in %s()\n", TRACE_ID)
#define DEPRECATED(msg) __attribute__((deprecated(msg)))
#define NORETURN __attribute__((noreturn))
#define EXIT_IF_NULL(ptr) \
    do { if ((ptr) == NULL) { LOG_ERR("Fatal: " #ptr " is NULL"); exit(1); } } while(0)

#endif /* _GRUMP_H_ */
