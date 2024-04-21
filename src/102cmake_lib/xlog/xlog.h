//xlog.h

#ifndef XLOG_H
#define XLOG_H

//__declspec(dllexport)
//__declspec(dllexport) 导出XLog类的函数到1ib文件中
//xlog库文件调用 d11export
//test_xlog调用 dllimport
#ifndef _WIN32
    #define XCPP_API
#else
    #ifdef xlog_EXPORTS
        #define XCPP_API __declspec(dllexport) //库项目调用
    #else
        #define XCPP_API __declspec(dllexport) //调用库项目调用
    #endif
#endif
class XCPP_API XLog
{
    public:
        XLog();
};

#endif