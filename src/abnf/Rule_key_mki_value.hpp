/* -----------------------------------------------------------------------------
 * Rule_key_mki_value.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_mki_value_hpp
#define Rule_key_mki_value_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_mki_value : public Rule
{
public:
  Rule_key_mki_value(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_key_mki_value(const Rule_key_mki_value& rule);

  Rule_key_mki_value& operator=(const Rule_key_mki_value& rule);

  const Rule_key_mki_value* clone(void) const;

  static const Rule_key_mki_value* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
