#ifndef STREAMING_DATA_HPP
#define STREAMING_DATA_HPP

#include "DataProcessor.hpp"
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

class StreamingData {
public:
    StreamingData(DataProcessor* processor);
    void start();
    void stop();

private:
    void streamData();

    DataProcessor* processor;
    std::thread streamingThread;
    std::mutex mtx;
    std::condition_variable cv;
    std::queue<std::string> dataQueue;
    bool running;
};

#endif // STREAMING_DATA_HPP
