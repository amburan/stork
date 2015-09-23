/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/*                                                              */
/*                                                              */
/*            Author: Stephen Thomas                            */
/*            Email: stephenthomas1@boisestate.edu              */
/*            Institution: Boise State University               */
/*                                                              */
/****************************************************************/

#ifndef PeltierTemperatureKernel_H
#define PeltierTemperatureKernel_H

#include "Diffusion.h"
#include "Material.h"

//Forward Declarations
class PeltierTemperatureKernel;

template<>
InputParameters validParams<PeltierTemperatureKernel>();

class PeltierTemperatureKernel : public Diffusion
{
public:

  PeltierTemperatureKernel(const InputParameters & parameters);

protected:
  virtual Real computeQpResidual();
  virtual Real computeQpJacobian();

private:
  const MaterialProperty<Real> & _seebeck_coefficient;
  const MaterialProperty<Real> & _electronic_conductivity;
};

#endif //HEATCONDUCTIONKERNEL_H