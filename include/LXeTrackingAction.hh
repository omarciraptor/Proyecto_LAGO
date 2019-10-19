
//
#ifndef LXeTrackingAction_h
#define LXeTrackingAction_h 1

#include "G4UserTrackingAction.hh"
#include "globals.hh"

class LXeTrackingAction : public G4UserTrackingAction {

  public:

    LXeTrackingAction();
    virtual ~LXeTrackingAction() {};

    virtual void PreUserTrackingAction(const G4Track*);
    virtual void PostUserTrackingAction(const G4Track*);

  private:

};

#endif
