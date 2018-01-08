/* -----------------------------------------------------------------------------
 * Rule_POS_DIGIT.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_POS_DIGIT_hpp
#define Rule_POS_DIGIT_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_POS_DIGIT : public Rule
{
public:
  Rule_POS_DIGIT(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_POS_DIGIT(const Rule_POS_DIGIT& rule);

  Rule_POS_DIGIT& operator=(const Rule_POS_DIGIT& rule);

  const Rule_POS_DIGIT* clone(void) const;

  static const Rule_POS_DIGIT* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
