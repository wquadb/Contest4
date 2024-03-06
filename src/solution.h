
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <stdexcept>
#include <string>
#include <vector>

struct Task {
    std::string text;
    std::string date;
    std::map<std::string, int> workloads;
    using Workload = std::map<std::string, int>::value_type;

    Task(const std::string& text, const std::string& date, const std::map<std::string, int>& workloads);
    int getTotalLoad() const;
};

// task 1
Task::Task(const std::string& text, const std::string& date, const std::map<std::string, int>& workloads)
{
}


struct Worker {
    std::string name;
    std::string login;
    int maxLoad;

    Worker(const std::string& name, const std::string& login, int maxLoad);

    // might be needed for task 5
    bool isOverworked(const std::vector<Task>& tasks) const;
};

// task 1
Worker::Worker(const std::string& name, const std::string& login, int maxLoad)
{
}


// task 2
int Task::getTotalLoad() const
{
    // replace with your own return
    return 0;
}

// task 3
void sortTasks(std::vector<Task>& tasks)
{
}

// task 4
int getWorkerLoad(const std::vector<Task>& allTasks, const Worker& worker)
{
    // replace with your own return
    return 0;
}

// task 5
void addTask(std::vector<Task>& tasks, const Task& newTask, const std::vector<Worker>& workers)
{
}

// task 6
void addTaskVerbose(std::vector<Task>& tasks, const Task& newTask, const std::vector<Worker>& workers)
{
}
