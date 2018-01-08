/* -----------------------------------------------------------------------------
 * Rule_repeat_field.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_repeat_field_hpp
#define Rule_repeat_field_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_repeat_field : public Rule
{
public:
  Rule_repeat_field(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_repeat_field(const Rule_repeat_field& rule);

  Rule_repeat_field& operator=(const Rule_repeat_field& rule);

  const Rule_repeat_field* clone(void) const;

  static const Rule_repeat_field* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
