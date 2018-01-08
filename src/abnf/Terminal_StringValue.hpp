/* -----------------------------------------------------------------------------
 * Terminal_StringValue.hpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.5
 * Produced : Mon Jan 08 13:30:55 CET 2018
 *
 * -----------------------------------------------------------------------------
 */

#ifndef Terminal_StringValue_hpp
#define Terminal_StringValue_hpp

#include <string>
#include <vector>

#include "Rule.hpp"

namespace abnf {

class Visitor;
class ParserContext;

class Terminal_StringValue : public Rule
{
public:
  Terminal_StringValue(
    const std::string& spelling, 
    const std::vector<const Rule*>& rules);

  const Terminal_StringValue* clone(void) const;

  static const Terminal_StringValue* parse(
    ParserContext& context,
    const std::string& pattern);

  void* accept(Visitor& visitor) const ;
};

}

#endif
/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */
