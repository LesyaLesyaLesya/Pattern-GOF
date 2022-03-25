#pragma once
#include <functional>
#include "MyTools.h"

namespace ProxyLoggerNSP
{
    class ProxyLogger
    {
    public:
        
        //ProxyLogger(std::unique_ptr<MyTools::LoggerSingleton> realLogger) :_realLogger(std::move(realLogger))
        ProxyLogger();
        ~ProxyLogger();

        static void __fastcall WriteToLog(const std::string& str);
        static void __fastcall WriteToLog(const std::string& str, int n);
        static void __fastcall WriteToLog(const std::string& str, double d);
        
    private:
        //std::unique_ptr<MyTools::LoggerSingleton> _realLogger;
        static MyTools::LoggerSingleton* _realLogger;
        static int counter;
    };
}
