#ifndef DATA_PROCESSOR_HPP
#define DATA_PROCESSOR_HPP

#include <string>
#include <unordered_map>

class DataProcessor {
public:
    void process(const std::string& data);

    void printWordCount() const;

private:
    std::unordered_map<std::string, int> wordCountMap;
};

#endif // DATA_PROCESSOR_HPP
