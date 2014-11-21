#include <execinfo.h>

void* buffer[len];
int nptrs = ::backtrace(buffer, len);
char** strings = ::backtrace_symbols(buffer, nptrs);
// strings[i]中的信息就是调用栈的信息
free(strings);


