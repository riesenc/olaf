#include "ini_format_exception.h"

namespace Ini_Parser
{
  Ini_Format_Exception::Ini_Format_Exception(const std::string &file_name, const std::string &error_line, int line_num) :
    fname(file_name),
    line(error_line),
    num(line_num)
  {
  }

  Ini_Format_Exception::~Ini_Format_Exception()
  {
  }
  
  const char* Ini_Format_Exception::what() const throw()
  {
    return ("ini format exception");
  }
}