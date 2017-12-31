/* -----------------------------------------------------------------------------
 * Rule_username.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_username_hpp
#define Rule_username_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_username : public Rule
{
public:
  Rule_username(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_username(const Rule_username& rule);

  Rule_username& operator=(const Rule_username& rule);

  const Rule_username* clone(void) const;

  static const Rule_username* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */