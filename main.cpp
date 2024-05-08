#include "./includes/StreamingData.hpp"
#include "./includes/DataProcessor.hpp"

int main() {
    // Initialize the data processor
    DataProcessor processor;

    // Start data streaming
    StreamingData streaming(&processor);
    streaming.start();

    return 0;
}
