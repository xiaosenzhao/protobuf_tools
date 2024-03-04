#pragma once

#include <string>
#include <memory>

namespace hello {

class HelloLib {
  public:
    explicit HelloLib(const std::string &greeting);
    void greet(const std::string &thing);

  private:
    std::unique_ptr<const std::string> greeting_;
};
}  // namespace hello