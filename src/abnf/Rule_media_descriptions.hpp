/* -----------------------------------------------------------------------------
 * Rule_media_descriptions.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Rule_media_descriptions_hpp
#define Rule_media_descriptions_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Rule_media_descriptions : public Rule
{
public:
  Rule_media_descriptions(const std::string& spelling, const std::vector<const Rule*>& rules);
  Rule_media_descriptions(const Rule_media_descriptions& rule);

  Rule_media_descriptions& operator=(const Rule_media_descriptions& rule);

  const Rule_media_descriptions* clone(void) const;

  static const Rule_media_descriptions* parse(ParserContext& context);

  void* accept(Visitor& visitor) const;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
