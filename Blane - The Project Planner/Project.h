#ifndef PROJECTCLASS
#define PROJECTCLASS
#include <iostream>
#include <vector>
enum status {
	NOTSTARTED, INPROGRESS
};
class _Task
{
public:
	std::string Name;
	std::string Description;
	status Status;
	int Priority;
	_Task(std::string name, std::string description, status st, int priority) : Name(name), Description(description), Status(st), Priority(priority) {}
};
#endif