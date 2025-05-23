//
// Created by CanhDo on 2025/05/19.
//

#ifndef RUNNER_HPP
#define RUNNER_HPP

#include <string>
#include "utility/Timer.hpp"

class Runner {
public:
    virtual ~Runner() = default;

    virtual void modelCheck(const std::string &modelFile, const std::string &property) = 0;

    virtual std::string getPath() = 0;

    virtual bool isAvailable() = 0;

    virtual void printTiming(const Timer &timer) = 0;

    std::string execCommand(const std::string &command);

    void parseResult(const std::string &output);

    void setSaveModel(bool saveModel);

    bool getSaveModel();

private:
    bool saveModel = false;
};
#endif //RUNNER_HPP
