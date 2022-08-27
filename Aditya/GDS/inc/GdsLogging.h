#ifndef __GdsLogging__
#define __GdsLogging__


#include "GdsCommon.h"

class TimerStats {
public:
    // we will have time stat instance for every log instance we can 
    // work like this 
    // we have specifc timelog api in the logbase which will 
    // keep the time and delta between the operations

    // time instance 
    // time start
    // time end
    // time delta
};

class LogBase {
public:
    int timeLog(int startEnd); // takes start or End event for the  
    int logd(); // debug logging 
    int logv(); // verbose logging 
    int loge(); /// error Logging 

private:
    int timeLogStart();
    int timeLogEnd();
};
class ConsoleLogger: public LogBase{
public:

};

//
class FileLogger: public LogBase{

};

//Logger Base
class Logger {
public:
    static Logger* getInstance(void){
        std::lock_guard<std::mutex> lock(mutex_);
        if (m_ptr_Logger == nullptr)
        {
            m_ptr_Logger = new Logger();
        }
        return m_ptr_Logger;
    }

    /**
     * Singletons should not be cloneable.
     */
    Logger(Logger &other) = delete;
    /**
     * Singletons should not be assignable.
     */
    void operator=(const Logger &) = delete;

private:
    static Logger *m_ptr_Logger;
    static LogBase *m_log;
    static std::mutex mutex_;
    Logger();
protected:
    ~Logger() {}
};

#endif // __GdsLogging__