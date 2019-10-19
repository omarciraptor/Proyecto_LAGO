

#ifndef LXeActionInitialization_h
#define LXeActionInitialization_h 1

#include "G4VUserActionInitialization.hh"

class LXeDetectorConstruction;

/// Action initialization class.
///

class LXeActionInitialization : public G4VUserActionInitialization
{
  public:
    LXeActionInitialization(const LXeDetectorConstruction* det);
    virtual ~LXeActionInitialization();

    virtual void BuildForMaster() const;
    virtual void Build() const;

  private:

    const LXeDetectorConstruction* fDetector;
};

#endif
