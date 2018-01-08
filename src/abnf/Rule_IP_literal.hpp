/* -----------------------------------------------------------------------------
 * Rule_IP_literal.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_IP_literal_hpp
#define Rule_IP_literal_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_IP_literal : public Rule
{
public:
  Rule_IP_literal(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_IP_literal(const Rule_IP_literal& rule);

  Rule_IP_literal& operator=(const Rule_IP_literal& rule);

  const Rule_IP_literal* clone(void) const;

  static const Rule_IP_literal* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
