#include "./includes/StreamingData.hpp"

StreamingData::StreamingData(DataProcessor* processor) : processor(processor), running(true) {}

void StreamingData::start() {
    streamingThread = std::thread(&StreamingData::streamData, this);
}

void StreamingData::stop() {
    running = false;
    streamingThread.join();
}

void StreamingData::streamData() {
    while (running) {
        // Simulate receiving data from an external source
        std::string newData = "hello world hello world coding engine";
        
        // Add data to the processing queue
        {
            std::lock_guard<std::mutex> lock(mtx);
            dataQueue.push(newData);
        }
        
        // Notify processing thread
        cv.notify_one();
        
        // Sleep for some time to simulate data streaming
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        
        // Perform other operations with processed data (not shown in this example)
    }
}
