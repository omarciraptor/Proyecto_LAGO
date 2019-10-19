
//
#ifndef LXeStackingAction_H
#define LXeStackingAction_H 1

#include "globals.hh"
#include "G4UserStackingAction.hh"

class LXeEventAction;

class LXeStackingAction : public G4UserStackingAction
{
  public:

    LXeStackingAction(LXeEventAction*);
    virtual ~LXeStackingAction();
 
    virtual G4ClassificationOfNewTrack ClassifyNewTrack(const G4Track* aTrack);
    virtual void NewStage();
    virtual void PrepareNewEvent();
 
  private:
    LXeEventAction* fEventAction;
};

#endif
