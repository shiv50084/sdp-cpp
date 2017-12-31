/* -----------------------------------------------------------------------------
 * Rule_extmap_attribute.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_extmap_attribute_hpp
#define Rule_extmap_attribute_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_extmap_attribute : public Rule
{
public:
  Rule_extmap_attribute(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_extmap_attribute(const Rule_extmap_attribute& rule);

  Rule_extmap_attribute& operator=(const Rule_extmap_attribute& rule);

  const Rule_extmap_attribute* clone(void) const;

  static const Rule_extmap_attribute* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */