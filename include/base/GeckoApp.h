/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/*                                                              */
/*                                                              */
/*            Author: Stephen Thomas                            */
/*            Email: stephenthomas1@boisestate.edu              */
/*            Institution: Boise State University               */
/*                                                              */
/****************************************************************/

#ifndef GECKOAPP_H
#define GECKOAPP_H

#include "MooseApp.h"

class GeckoApp;

template<>
InputParameters validParams<GeckoApp>();

class GeckoApp : public MooseApp
{
public:
  GeckoApp(const std::string & name, InputParameters parameters);
  virtual ~GeckoApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* GECKOAPP_H */