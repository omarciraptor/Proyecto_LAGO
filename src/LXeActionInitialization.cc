

#include "LXeActionInitialization.hh"

#include "LXePrimaryGeneratorAction.hh"
#include "LXeDetectorConstruction.hh"

#include "LXeRunAction.hh"
#include "LXeEventAction.hh"
#include "LXeTrackingAction.hh"
#include "LXeSteppingAction.hh"
#include "LXeStackingAction.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

LXeActionInitialization::LXeActionInitialization(
   const LXeDetectorConstruction* det)
  : G4VUserActionInitialization(), fDetector(det)
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

LXeActionInitialization::~LXeActionInitialization()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void LXeActionInitialization::BuildForMaster() const
{
  SetUserAction(new LXeRunAction());
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void LXeActionInitialization::Build() const
{
  SetUserAction(new LXePrimaryGeneratorAction());

  LXeEventAction* eventAction = new LXeEventAction(fDetector);
  SetUserAction(eventAction);
  SetUserAction(new LXeStackingAction(eventAction));

  SetUserAction(new LXeRunAction());
  SetUserAction(new LXeTrackingAction());
  SetUserAction(new LXeSteppingAction(eventAction));
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
