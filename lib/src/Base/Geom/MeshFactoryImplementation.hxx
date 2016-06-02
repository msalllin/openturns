//                                               -*- C++ -*-
/**
 *  @brief Top-level class for the meshing algorithms
 *
 *  Copyright 2005-2015 Airbus-EDF-IMACS-Phimeca
 *
 *  This library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  along with this library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef OPENTURNS_MESHFACTORYIMPLEMENTATION_HXX
#define OPENTURNS_MESHFACTORYIMPLEMENTATION_HXX

#include "Domain.hxx"
#include "Mesh.hxx"
#include "PersistentObject.hxx"

BEGIN_NAMESPACE_OPENTURNS

/**
 * @class MeshFactoryImplementation
 */
class OT_API MeshFactoryImplementation
  : public PersistentObject
{
  CLASSNAME;
public:

  typedef Pointer< MeshFactoryImplementation > Implementation;

  /** Default constructor */
  MeshFactoryImplementation();

  /** Virtual constructor */
  virtual MeshFactoryImplementation * clone() const;

  /** String converter */
  virtual String __repr__() const;

  /** String converter */
  virtual String __str__(const String & offset = "") const;

  /* Here is the interface that all derived class must implement */
  /** Build a mesh based on a domain */
  virtual Mesh build(const Domain & domain) const;

protected:

}; /* class MeshFactoryImplementation */

END_NAMESPACE_OPENTURNS

#endif /* OPENTURNS_MESHFACTORYIMPLEMENTATION_HXX */