#include <iostream>

class Log
{
public:
    const int loglevelerror =0;
    const int loglevelwarn =1;
    const int logleveltrace =2;
private:
    int m_loglevel;

public:

    void setlevel(int level){
        m_loglevel=level;

    }

    void warn(const char* message){
        if (m_loglevel >=loglevelwarn){
            std::cout << "warning twin: " << message << std::endl;
        }
    }
    void error(const char* message){
        if (m_loglevel >=loglevelerror){
            std::cout << "error twin: " << message << std::endl;
        }
    }
};


int main(){

    Log log;
    log.setlevel(0);
    log.warn("warning twin");






}