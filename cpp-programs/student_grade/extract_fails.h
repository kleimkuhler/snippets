#ifndef GUARD_extract_fails_h
#define GUARD_extract_fails_h

#include <vector>
#include "Student_info.h"

bool fgrade(const Student_info&);
std::vector<Student_info> extract_fails_v1(std::vector<Student_info>&);
std::vector<Student_info> extract_fails_v2(std::vector<Student_info>&);

#endif
