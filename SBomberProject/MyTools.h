#pragma once

#include <stdint.h>
#include <string>
#include <fstream>


namespace MyTools 
{
   
    enum ConsoleColor
    {
        CC_Black = 0,
        CC_Blue,
        CC_Green,
        CC_Cyan,
        CC_Red,
        CC_Magenta,
        CC_Brown,
        CC_LightGray,
        CC_DarkGray,
        CC_LightBlue,
        CC_LightGreen,
        CC_LightCyan,
        CC_LightRed,
        CC_LightMagenta,
        CC_Yellow,
        CC_White
    };
	//=============================================================================================
    class ScreenSingleton
    {
    public:
        static ScreenSingleton& getInstance()
        { 
            static ScreenSingleton theInstance;
            return theInstance;
        }
        void ClrScr();
        void __fastcall GotoXY(double x, double y);
        uint16_t GetMaxX();
        uint16_t GetMaxY();
        void SetColor(ConsoleColor color);
    private:
        ScreenSingleton() {};
        ScreenSingleton(const ScreenSingleton&) = delete;
        ScreenSingleton& operator=(const ScreenSingleton&) = delete;
        ScreenSingleton(ScreenSingleton&&) = delete;
        ScreenSingleton& operator=(const ScreenSingleton&&) = delete;
    };

	
	//=============================================================================================

    class LoggerSingleton
    {
    public:
        static LoggerSingleton& getLoggerSingleton()
        {
            LoggerSingleton myLoggerSingleton;
            return myLoggerSingleton;
        }

        void __fastcall OpenLogFile(const std::string& FN);
        void CloseLogFile();
        void __fastcall WriteToLog(const std::string& str);
        void __fastcall WriteToLog(const std::string& str, int n);
        void __fastcall WriteToLog(const std::string& str, double d);

    private:
        LoggerSingleton() {};
        LoggerSingleton(const LoggerSingleton&) = delete;
        LoggerSingleton& operator=(LoggerSingleton&) = delete;
        LoggerSingleton(LoggerSingleton&&) = delete;
        LoggerSingleton& operator=(LoggerSingleton&&) = delete;
    };

    std::string GetCurDateTime();
   
	//=============================================================================================

};