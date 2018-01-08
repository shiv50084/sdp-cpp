/* -----------------------------------------------------------------------------
 * Rule_key_lifetime.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_key_lifetime_hpp
#define Rule_key_lifetime_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_key_lifetime : public Rule
{
public:
  Rule_key_lifetime(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_key_lifetime(const Rule_key_lifetime& rule);

  Rule_key_lifetime& operator=(const Rule_key_lifetime& rule);

  const Rule_key_lifetime* clone(void) const;

  static const Rule_key_lifetime* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
