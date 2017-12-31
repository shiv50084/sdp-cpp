/* -----------------------------------------------------------------------------
 * Rule_base64_unit.cpp
 * -----------------------------------------------------------------------------
 *
 * Producer : com.parse2.aparse.Parser 2.2
 * Produced : Sun Dec 31 10:33:28 CET 2017
 *
 * -----------------------------------------------------------------------------
 */

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Rule_base64_unit.hpp"
#include "Visitor.hpp"
#include "ParserContext.hpp"

#include "Rule_base64_char.hpp"

using namespace abnf;

Rule_base64_unit::Rule_base64_unit(
  const string& spelling, 
  const vector<const Rule*>& rules) : Rule(spelling, rules)
{
}

Rule_base64_unit::Rule_base64_unit(const Rule_base64_unit& rule) : Rule(rule)
{
}

Rule_base64_unit& Rule_base64_unit::operator=(const Rule_base64_unit& rule)
{
  Rule::operator=(rule);
  return *this;
}

const Rule_base64_unit* Rule_base64_unit::clone() const
{
  return new Rule_base64_unit(this->spelling, this->rules);
}

void* Rule_base64_unit::accept(Visitor& visitor) const
{
  return visitor.visit(this);
}

const Rule_base64_unit* Rule_base64_unit::parse(ParserContext& context)
{
  context.push("base64-unit");

  bool parsed = true;
  int s0 = context.index;
  vector<const Rule*> e0;
  const Rule* rule;

  parsed = false;
  if (!parsed)
  {
    {
      vector<const Rule*> e1;
      int s1 = context.index;
      parsed = true;
      if (parsed)
      {
        bool f1 = true;
        int c1 = 0;
        for (int i1 = 0; i1 < 4 && f1; i1++)
        {
          rule = Rule_base64_char::parse(context);
          if ((f1 = rule != NULL))
          {
            e1.push_back(rule);
            c1++;
          }
        }
        parsed = c1 == 4;
      }
      if (parsed)
        e0.insert(e0.end(), e1.begin(), e1.end());
      else
        context.index = s1;
    }
  }

  rule = NULL;
  if (parsed)
    rule = new Rule_base64_unit(context.text.substr(s0, context.index - s0), e0);
  else
    context.index = s0;

  context.pop("base64-unit", parsed);

  return (Rule_base64_unit*)rule;
}

/* -----------------------------------------------------------------------------
 * eof
 * -----------------------------------------------------------------------------
 */