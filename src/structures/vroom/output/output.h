#ifndef OUTPUT_H
#define OUTPUT_H

/*

This file is part of VROOM.

Copyright (c) 2015-2016, Julien Coupey.
All rights reserved (see LICENSE).

*/

#include "./route.h"
#include "./solution.h"

struct output{
  index_t code;
  boost::optional<std::string> error;
  const std::vector<route> routes;
  const solution solution;

  output(index_t code, std::string error):
    code(code),
    error(error){}

  output(index_t code, const std::vector<route>& routes):
    code(code),
    routes(std::move(routes)){}
};

#endif
