#include "./includes/DataProcessor.hpp"
#include <iostream>

void DataProcessor::process(const std::string& data) {
    // Split data into words and update word count
    // Implementation omitted for brevity
}

void DataProcessor::printWordCount() const {
    // Print word count
    for (const auto& pair : wordCountMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}
